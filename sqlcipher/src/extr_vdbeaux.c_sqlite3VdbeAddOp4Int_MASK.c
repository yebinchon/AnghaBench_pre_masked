
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i; } ;
struct TYPE_9__ {TYPE_2__ p4; int p4type; } ;
typedef TYPE_3__ VdbeOp ;
struct TYPE_10__ {TYPE_3__* aOp; TYPE_1__* db; } ;
typedef TYPE_4__ Vdbe ;
struct TYPE_7__ {scalar_t__ mallocFailed; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int,int,int) ;

int FUNC_1(
  Vdbe *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6
){
  int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if( VAR_1->db->mallocFailed==0 ){
    VdbeOp *VAR_8 = &VAR_1->aOp[VAR_7];
    VAR_8->p4type = VAR_0;
    VAR_8->p4.i = VAR_6;
  }
  return VAR_7;
}
