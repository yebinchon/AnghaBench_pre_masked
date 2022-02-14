
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ errCode; } ;
typedef int Pgno ;
typedef TYPE_1__ Pager ;
typedef int DbPage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  Pager *VAR_1,
  Pgno VAR_2,
  DbPage **VAR_3,
  int VAR_4
){
  FUNC_0(VAR_2);
  FUNC_0(VAR_4);
  FUNC_1( VAR_1->errCode!=VAR_0 );
  *VAR_3 = 0;
  return VAR_1->errCode;
}
