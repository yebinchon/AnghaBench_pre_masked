
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zLine ;
typedef int lsm_file ;
struct TYPE_4__ {int (* xOpen ) (TYPE_1__*,char const*,int ,int **) ;int (* xSync ) (int *) ;int (* xWrite ) (int *,int,char*,int) ;int (* xClose ) (int *) ;} ;
typedef TYPE_1__ lsm_env ;
typedef int aBuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,char*,int*,int*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (TYPE_1__*,char const*,int ,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,char*,int) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 () ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(int VAR_2, char **VAR_3){
  char VAR_4[4096];
  FILE *VAR_5;
  FILE *VAR_6 = 0;
  const char *VAR_7;

  lsm_env *VAR_8;
  lsm_file *VAR_9;
  int VAR_10;

  if( VAR_2!=2 ){
    FUNC_13("Usage: replay WRITELOG FILE\n");
    return 1;
  }

  if( FUNC_7(VAR_3[0], "-")==0 ){
    VAR_5 = VAR_1;
  }else{
    VAR_6 = VAR_5 = FUNC_3(VAR_3[0], "r");
  }
  VAR_7 = VAR_3[1];
  VAR_8 = FUNC_12();
  VAR_10 = VAR_8->xOpen(VAR_8, VAR_7, 0, &VAR_9);
  if( VAR_10!=VAR_0 ) return VAR_10;

  while( FUNC_1(VAR_5)==0 ){
    char VAR_11[80];
    FUNC_2(VAR_11, sizeof(VAR_11)-1, VAR_5);
    VAR_11[sizeof(VAR_11)-1] = '\0';

    if( 0==FUNC_4("sync db", VAR_11, 7) ){
      VAR_10 = VAR_8->xSync(VAR_9);
      if( VAR_10!=0 ) break;
    }else{
      int VAR_12;
      int VAR_13;
      int VAR_14;
      VAR_14 = FUNC_6(VAR_11, "write db %d %d", &VAR_12, &VAR_13);
      if( VAR_14==2 ){
        int VAR_15;
        for(VAR_15=0; VAR_15<VAR_13; VAR_15+=sizeof(VAR_4)){
          FUNC_5(VAR_4, VAR_15&0xFF, sizeof(VAR_4));
          VAR_10 = VAR_8->xWrite(VAR_9, VAR_12+VAR_15, VAR_4, sizeof(VAR_4));
          if( VAR_10!=0 ) break;
        }
      }
    }
  }
  if( VAR_6 ) FUNC_0(VAR_6);
  VAR_8->xClose(VAR_9);

  return VAR_10;
}
