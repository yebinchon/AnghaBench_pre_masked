
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hook ;
typedef int TestDb ;
struct TYPE_7__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
struct TYPE_6__ {int pOut; } ;
typedef TYPE_1__ InsertWriteHook ;
typedef TYPE_2__ DatasourceDefn ;
typedef int Datasource ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,char*,int,int **) ;
 int FUNC_8 (int *,int ,void*) ;
 int FUNC_9 (char const*,int ,int,int **) ;
 int FUNC_10 (int *,void*,int,void*,int) ;
 int FUNC_11 (int *,int,void**,int*,void**,int*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static int FUNC_17(int VAR_3, char **VAR_4){
  const char *VAR_5 = "lsm";
  TestDb *VAR_6 = 0;
  int VAR_7;
  int VAR_8;
  const int VAR_9 = 1 * 1000 * 1000;

  DatasourceDefn VAR_10 = { VAR_0, 8, 15, 80, 150 };
  Datasource *VAR_11 = 0;

  if( VAR_3>1 ){
    FUNC_16("Usage: insert ?DATABASE?\n");
    return 1;
  }
  if( VAR_3==1 ){ VAR_5 = VAR_4[0]; }

  FUNC_15(FUNC_6());
  for(VAR_7=0; VAR_5[VAR_7] && VAR_5[VAR_7]!='='; VAR_7++);
  if( VAR_5[VAR_7] ){
    VAR_8 = FUNC_7(VAR_5, "testdb.lsm", 1, &VAR_6);
  }else{
    VAR_8 = FUNC_9(VAR_5, 0, 1, &VAR_6);
  }

  if( VAR_8!=0 ){
    FUNC_16("Error opening db \"%s\": %d\n", VAR_5, VAR_8);
  }else{
    InsertWriteHook VAR_12;
    FUNC_3(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.pOut = FUNC_2("writelog.txt", "w");

    VAR_11 = FUNC_13(&VAR_10);
    FUNC_5(VAR_6, VAR_1, 0);
    FUNC_8(VAR_6, VAR_2, (void *)&VAR_12);

    if( VAR_8==0 ){
      for(VAR_7=0; VAR_7<VAR_9; VAR_7++){
        void *VAR_13; int VAR_14;
        void *VAR_15; int VAR_16;
        FUNC_11(VAR_11, VAR_7, &VAR_13, &VAR_14, &VAR_15, &VAR_16);
        FUNC_10(VAR_6, VAR_13, VAR_14, VAR_15, VAR_16);
      }
    }

    FUNC_12(VAR_11);
    FUNC_4(VAR_6);
    FUNC_1(&VAR_12);
    FUNC_0(VAR_12.pOut);
  }
  FUNC_14(FUNC_6());

  return VAR_8;
}
