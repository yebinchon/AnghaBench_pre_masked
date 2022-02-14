
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * pVtab; } ;
struct TYPE_13__ {scalar_t__ opcode; int p3; int p2; scalar_t__ p4type; TYPE_1__ p4; } ;
typedef TYPE_2__ VdbeOp ;
typedef int Vdbe ;
typedef int VTable ;
struct TYPE_14__ {int tnum; TYPE_5__* pIndex; } ;
typedef TYPE_3__ Table ;
struct TYPE_16__ {int tnum; struct TYPE_16__* pNext; } ;
struct TYPE_15__ {int db; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Index ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,TYPE_3__*) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(Parse *VAR_3, int VAR_4, Table *VAR_5){
  Vdbe *VAR_6 = FUNC_3(VAR_3);
  int VAR_7;
  int VAR_8 = FUNC_4(VAR_6);

  VTable *VAR_9 = FUNC_0(VAR_5) ? FUNC_2(VAR_3->db, VAR_5) : 0;


  for(VAR_7=1; VAR_7<VAR_8; VAR_7++){
    VdbeOp *VAR_10 = FUNC_5(VAR_6, VAR_7);
    FUNC_1( VAR_10!=0 );
    if( VAR_10->opcode==VAR_0 && VAR_10->p3==VAR_4 ){
      Index *VAR_11;
      int VAR_12 = VAR_10->p2;
      if( VAR_12==VAR_5->tnum ){
        return 1;
      }
      for(VAR_11=VAR_5->pIndex; VAR_11; VAR_11=VAR_11->pNext){
        if( VAR_12==VAR_11->tnum ){
          return 1;
        }
      }
    }

    if( VAR_10->opcode==VAR_1 && VAR_10->p4.pVtab==VAR_9 ){
      FUNC_1( VAR_10->p4.pVtab!=0 );
      FUNC_1( VAR_10->p4type==VAR_2 );
      return 1;
    }

  }
  return 0;
}
