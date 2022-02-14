
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_7__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_4; int member_3; } ;
typedef TYPE_1__ SetupStep ;
typedef TYPE_2__ DatasourceDefn ;
typedef int Datasource ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,TYPE_1__ const*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_4(TestDb *VAR_1, Datasource **VAR_2){
  const SetupStep VAR_3[] = {
    { 0, 1, 2000, 0, 0 },
    { 1, 0, 0, 0, 0 },
    { 0, 10001, 1000, 0, 0 },
  };
  const DatasourceDefn VAR_4 = {VAR_0, 12, 16, 100, 500};
  Datasource *VAR_5;

  VAR_5 = FUNC_3(&VAR_4);
  FUNC_1(VAR_1, VAR_5, VAR_3, FUNC_0(VAR_3));
  if( VAR_2 ){
    *VAR_2 = VAR_5;
  }else{
    FUNC_2(VAR_5);
  }
}
