
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
typedef TYPE_1__ DatasourceDefn ;
typedef int Datasource ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int*,char const*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__ const*) ;
 int * FUNC_7 (char*,int,int*) ;
 int FUNC_8 (int *,int *,int ,int,int*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1, int *VAR_2){
  if( FUNC_2(VAR_2, VAR_1, "api1.lsm") ){
    const DatasourceDefn VAR_3 = { VAR_0, 10, 15, 200, 250 };
    Datasource *VAR_4;
    TestDb *VAR_5;
    int VAR_6 = 0;

    VAR_5 = FUNC_7("lsm_lomem", 1, &VAR_6);
    VAR_4 = FUNC_6(&VAR_3);
    FUNC_8(VAR_5, VAR_4, 0, 1000, VAR_2);

    FUNC_0(FUNC_1(VAR_5), VAR_2);

    FUNC_5(VAR_4);
    FUNC_4(&VAR_5);

    FUNC_3(*VAR_2);
  }
}
