
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_db ;
typedef int TestDb ;
struct TYPE_3__ {int nDel; int iDelStart; int nIns; int iInsStart; } ;
typedef TYPE_1__ SetupStep ;
typedef int Datasource ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int ,int*) ;
 int FUNC_7 (int *,int *,int ,int ,int*) ;

__attribute__((used)) static void FUNC_8(
  TestDb *VAR_1,
  Datasource *VAR_2,
  const SetupStep *VAR_3,
  int *VAR_4
){
  FUNC_7(VAR_1, VAR_2, VAR_3->iInsStart, VAR_3->nIns, VAR_4);
  FUNC_6(VAR_1, VAR_2, VAR_3->iDelStart, VAR_3->nDel, VAR_4);
  if( *VAR_4==0 ){
    int VAR_5 = -1;
    int VAR_6 = 64;
    lsm_db *VAR_7 = FUNC_5(VAR_1);

    FUNC_3(VAR_7, VAR_0, &VAR_5);
    FUNC_3(VAR_7, VAR_0, &VAR_6);
    FUNC_0(VAR_7, 1);
    FUNC_2(VAR_7, 0);
    FUNC_3(VAR_7, VAR_0, &VAR_5);

    *VAR_4 = FUNC_4(VAR_7, 0, 0, 0);
    if( *VAR_4==0 ){
      *VAR_4 = FUNC_1(VAR_7, 0);
    }
  }
}
