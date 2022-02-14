
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int const,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (char const*,int,int ,int ,int*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_1__ const*) ;
 int * FUNC_10 (char*,int ,int*) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*,char const*,int *,int,int*) ;
 int FUNC_13 (int *,int *,int,int,int*) ;

__attribute__((used)) static void FUNC_14(int VAR_1, int *VAR_2){
  const char *VAR_3 = "testdb.lsm";
  const int VAR_4 = 100;
  const DatasourceDefn VAR_5 = {VAR_0, 12, 16, 1000, 1000};

  int VAR_6;
  int VAR_7 = 0;
  Datasource *VAR_8;
  CksumDb *VAR_9;
  TestDb *VAR_10;


  VAR_8 = FUNC_9(&VAR_5);
  VAR_9 = FUNC_6(VAR_8, 110, 150, 10);


  FUNC_12("", VAR_3, VAR_8, 100, VAR_2);

  for(VAR_6=0; VAR_6<VAR_4 && *VAR_2==0; VAR_6++){
    int VAR_11;
    FUNC_3(VAR_6, VAR_4, FUNC_2(), &VAR_7);
    FUNC_11(VAR_3, "log");

    for(VAR_11=0; VAR_11<5; VAR_11++){

      VAR_10 = FUNC_10("lsm", 0, VAR_2);
      FUNC_13(VAR_10, VAR_8, 100+VAR_11*10, 10, VAR_2);


      FUNC_1(VAR_10, 1 + (VAR_6%2));
      FUNC_0(VAR_10);



      FUNC_7(VAR_3, VAR_1,
        FUNC_5(VAR_9, 110 + VAR_11*10), 0,
        VAR_2
      );
    }
  }

  FUNC_8(VAR_8);
  FUNC_4(VAR_9);
}
