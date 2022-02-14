
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
typedef TYPE_1__ DatasourceDefn ;
typedef int Datasource ;
typedef int CksumDb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,int ,int **) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,void*,int,void*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int const,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,int,int,int) ;
 int FUNC_10 (char const*,int,int ,int ,int*) ;
 int FUNC_11 (int *,int,void**,int*,void**,int*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_1__ const*) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*,char const*,int *,int,int*) ;

__attribute__((used)) static void FUNC_16(int VAR_1, int *VAR_2){
  const char *VAR_3 = "testdb.lsm";
  const DatasourceDefn VAR_4 = {VAR_0, 12, 16, 1000, 1000};

  const int VAR_5 = 200;
  const int VAR_6 = 20;

  int VAR_7;
  int VAR_8 = 0;
  Datasource *VAR_9;
  CksumDb *VAR_10;
  TestDb *VAR_11;


  VAR_9 = FUNC_13(&VAR_4);
  VAR_10 = FUNC_9(VAR_9, 100, 100+VAR_6, 1);


  FUNC_15("", VAR_3, VAR_9, 100, VAR_2);

  for(VAR_7=0; VAR_7<VAR_5 && *VAR_2==0; VAR_7++){
    int VAR_12;
    int VAR_13 = 0;

    FUNC_6(VAR_7, VAR_5, FUNC_5(), &VAR_8);


    FUNC_14(VAR_3, "log");
    VAR_13 = FUNC_2("safety=2", VAR_3, 0, &VAR_11);
    FUNC_0( VAR_13==0 );


    FUNC_3(VAR_11, 1 + (VAR_7%(VAR_6+2)));
    for(VAR_12=0; VAR_12<VAR_6; VAR_12++){
      void *VAR_14; int VAR_15;
      void *VAR_16; int VAR_17;

      FUNC_11(VAR_9, 100+VAR_12, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
      VAR_13 = FUNC_4(VAR_11, VAR_14, VAR_15, VAR_16, VAR_17);
      if( VAR_13 ) break;
    }
    FUNC_1(VAR_11);


    FUNC_10(VAR_3, VAR_1,
      FUNC_8(VAR_10, 100 + VAR_12),
      FUNC_8(VAR_10, 100 + VAR_12 + 1),
      VAR_2
    );
  }

  FUNC_12(VAR_9);
  FUNC_7(VAR_10);
}
