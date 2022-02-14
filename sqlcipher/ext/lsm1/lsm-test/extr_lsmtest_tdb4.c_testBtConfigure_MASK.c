
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct CfgParam TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct CfgParam {char const* zParam; int eParam; } ;
struct TYPE_4__ {int bFastInsert; int pBt; } ;
typedef TYPE_1__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,void*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_3__*,char*,char const*,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char const*,int*) ;
 scalar_t__ FUNC_6 (char const**,char const**,char const**,char*) ;

__attribute__((used)) static int FUNC_7(BtDb *VAR_6, const char *VAR_7, int *VAR_8){
  int VAR_9 = VAR_5;

  if( VAR_7 ){
    struct CfgParam {
      const char *zParam;
      int eParam;
    } VAR_10[] = {
      { "safety", VAR_4 },
      { "autockpt", VAR_0 },
      { "multiproc", VAR_2 },
      { "blksz", VAR_1 },
      { "pagesz", VAR_3 },
      { "mt", -1 },
      { "fastinsert", -2 },
      { 0, 0 }
    };
    const char *VAR_11 = VAR_7;
    int VAR_12 = FUNC_1(VAR_11);
    char *VAR_13;
    const char *VAR_14;
    const char *VAR_15;

    VAR_13 = (char*)FUNC_4(VAR_12+2);
    while( VAR_9==VAR_5 && 0==FUNC_6(&VAR_11, &VAR_14, &VAR_15, VAR_13) ){
      int VAR_16;
      int VAR_17;
      VAR_9 = FUNC_2(VAR_10, "param", VAR_14, &VAR_16);
      if( VAR_9!=VAR_5 ) break;

      VAR_9 = FUNC_5(VAR_15, &VAR_17);
      if( VAR_9!=VAR_5 ) break;

      switch( VAR_10[VAR_16].eParam ){
        case -1:
          *VAR_8 = VAR_17;
          break;
        case -2:
          VAR_6->bFastInsert = 1;
          break;
        default:
          VAR_9 = FUNC_0(VAR_6->pBt, VAR_10[VAR_16].eParam, (void*)&VAR_17);
          break;
      }
    }
    FUNC_3(VAR_13);
  }

  return VAR_9;
}
