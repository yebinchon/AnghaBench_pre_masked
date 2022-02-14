
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VdbeOp ;
struct TYPE_3__ {int nOpAlloc; int * aOp; int db; } ;
typedef TYPE_1__ Vdbe ;
typedef int Op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(Vdbe *VAR_2){
  VdbeOp *VAR_3;
  int VAR_4 = (VAR_2->nOpAlloc ? VAR_2->nOpAlloc*2 : (int)(1024/sizeof(Op)));
  VAR_3 = FUNC_1(VAR_2->db, VAR_2->aOp, VAR_4*sizeof(Op));
  if( VAR_3 ){
    VAR_2->nOpAlloc = FUNC_0(VAR_2->db, VAR_3)/sizeof(Op);
    VAR_2->aOp = VAR_3;
  }
  return (VAR_3 ? VAR_1 : VAR_0);
}
