
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
typedef TYPE_1__ DatasourceDefn ;
typedef int Datasource ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;

void FUNC_6(
  const char *VAR_1,
  const char *VAR_2,
  int *VAR_3
){
  if( *VAR_3==0 ){
    int VAR_4 = 1;

    if( VAR_2 ){
      char *VAR_5 = FUNC_0(VAR_1);
      VAR_4 = FUNC_5(VAR_2, VAR_5);
      FUNC_4(VAR_5);
    }

    if( VAR_4 ){
      DatasourceDefn VAR_6 = { VAR_0, 10, 15, 50, 100 };
      Datasource *VAR_7 = FUNC_3(&VAR_6);
      *VAR_3 = FUNC_1(VAR_1, VAR_7);
      FUNC_2(VAR_7);
    }
  }
}
