
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* db; } ;
struct TYPE_5__ {int * pDfltColl; } ;
typedef TYPE_2__ Parse ;
typedef int Expr ;
typedef int CollSeq ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int *) ;

CollSeq *FUNC_2(Parse *VAR_0, Expr *VAR_1){
  CollSeq *VAR_2 = FUNC_1(VAR_0, VAR_1);
  if( VAR_2==0 ) VAR_2 = VAR_0->db->pDfltColl;
  FUNC_0( VAR_2!=0 );
  return VAR_2;
}
