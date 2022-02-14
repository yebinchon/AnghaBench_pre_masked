
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VdbeOp ;
struct TYPE_5__ {scalar_t__ magic; int nOp; int * aOp; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_4__ {scalar_t__ mallocFailed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

VdbeOp *FUNC_1(Vdbe *VAR_1, int VAR_2){


  static VdbeOp VAR_3;
  FUNC_0( VAR_1->magic==VAR_0 );
  if( VAR_2<0 ){
    VAR_2 = VAR_1->nOp - 1;
  }
  FUNC_0( (VAR_2>=0 && VAR_2<VAR_1->nOp) || VAR_1->db->mallocFailed );
  if( VAR_1->db->mallocFailed ){
    return (VdbeOp*)&VAR_3;
  }else{
    return &VAR_1->aOp[VAR_2];
  }
}
