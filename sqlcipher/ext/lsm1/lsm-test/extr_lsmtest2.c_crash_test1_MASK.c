
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_db ;
typedef int TestDb ;
struct TYPE_3__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
typedef TYPE_1__ DatasourceDefn ;
typedef int Datasource ;
typedef int CksumDb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int const,int*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char const*,char const*,int ,int **) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int const,int ,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const) ;
 int * FUNC_11 (int *,int const,int const,int) ;
 int FUNC_12 (char const*,int,int ,int ,int*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (TYPE_1__ const*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,char const*) ;
 int FUNC_17 (char const*,char*) ;
 int FUNC_18 (char*,char const*,int *,int,int*) ;

__attribute__((used)) static void FUNC_19(int VAR_1, int *VAR_2){
  const char *VAR_3 = "testdb.lsm";
  const DatasourceDefn VAR_4 = {VAR_0, 12, 16, 200, 200};

  const int VAR_5 = 5000;
  const int VAR_6 = 200;
  const int VAR_7 = 20;
  const int VAR_8 = 15;

  int VAR_9;
  int VAR_10 = 0;
  Datasource *VAR_11;
  CksumDb *VAR_12;
  TestDb *VAR_13;
  char *VAR_14;

  const char *VAR_15[2] = {
    "page_size=1024 block_size=65536 autoflush=16384 safety=2 mmap=0",
    "page_size=1024 block_size=65536 autoflush=16384 safety=2 "
    " compression=1 mmap=0"
  };
  FUNC_0( VAR_1==0 || VAR_1==1 );


  VAR_11 = FUNC_14(&VAR_4);
  VAR_12 = FUNC_11(VAR_11, VAR_5, VAR_5, 1);



  VAR_14 = FUNC_16("%s automerge=7", VAR_15[VAR_1]);
  FUNC_18(VAR_14, VAR_3, VAR_11, 5000, VAR_2);
  FUNC_15(VAR_14);

  for(VAR_9=0; VAR_9<VAR_6 && *VAR_2==0; VAR_9++){
    int VAR_16;
    int VAR_17 = 0;

    FUNC_8(VAR_9, VAR_6, FUNC_7(), &VAR_10);


    FUNC_17(VAR_3, "log");
    VAR_17 = FUNC_5(VAR_15[VAR_1], VAR_3, 0, &VAR_13);
    FUNC_0( VAR_17==0 );


    FUNC_6(VAR_13, 1 + (VAR_9%(VAR_7*2)));
    for(VAR_16=0; VAR_17==0 && VAR_16<VAR_7; VAR_16++){
      int VAR_18 = 0;
      lsm_db *VAR_19 = FUNC_4(VAR_13);
      VAR_17 = FUNC_2(VAR_19, 0, VAR_8, &VAR_18);

      if( VAR_17==0 ) VAR_17 = FUNC_1(VAR_19, 0);
    }
    FUNC_3(VAR_13);


    FUNC_12(VAR_3,
        VAR_1, FUNC_10(VAR_12, VAR_5), 0, VAR_2);
  }

  FUNC_9(VAR_12);
  FUNC_13(VAR_11);
}
