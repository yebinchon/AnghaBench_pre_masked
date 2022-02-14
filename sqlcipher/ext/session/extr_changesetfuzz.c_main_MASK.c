
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_5__ {int nGroup; int * apGroup; } ;
typedef TYPE_1__ FuzzChangeset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (void*,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (char const*,int*,void**) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char const*,int) ;
 int VAR_2 ;
 int FUNC_11 (char*) ;

int FUNC_12(int VAR_3, char **VAR_4){
  int VAR_5 = 0;
  int VAR_6 = 0;
  const char *VAR_7;
  void *VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10;
  FuzzChangeset VAR_11;
  int VAR_12;
  u8 *VAR_13 = 0;

  if( VAR_3!=4 && VAR_3!=2 ) FUNC_11(VAR_4[0]);
  VAR_7 = VAR_4[1];

  FUNC_8(VAR_7, &VAR_9, &VAR_8);
  VAR_12 = FUNC_5(VAR_8, VAR_9, &VAR_11);

  if( VAR_12==VAR_1 ){
    if( VAR_3==2 ){
      for(VAR_10=0; VAR_10<VAR_11.nGroup; VAR_10++){
        FUNC_6(&VAR_11, VAR_11.apGroup[VAR_10]);
      }
    }else{
      VAR_13 = (u8*)FUNC_4((sqlite3_int64)VAR_9*2 + 1024);
      if( VAR_13==0 ){
        VAR_12 = VAR_0;
      }else{
        VAR_6 = FUNC_0(VAR_4[2]);
        VAR_5 = FUNC_0(VAR_4[3]);
        FUNC_7((unsigned int)VAR_6);
        for(VAR_10=0; VAR_12==VAR_1 && VAR_10<VAR_5; VAR_10++){
          char *VAR_14 = FUNC_10("%s-%d", VAR_7, VAR_10);
          VAR_12 = FUNC_2(VAR_14, VAR_13, &VAR_11);
          FUNC_9(VAR_14);
        }
        FUNC_3(VAR_13);
      }
    }
  }

  if( VAR_12!=VAR_1 ){
    FUNC_1(VAR_2, "error while processing changeset: %d\n", VAR_12);
  }

  return VAR_12;
}
