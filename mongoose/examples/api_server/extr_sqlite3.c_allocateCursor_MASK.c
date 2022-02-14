
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int iDb; int nField; int * pCursor; int * aType; } ;
typedef TYPE_1__ VdbeCursor ;
struct TYPE_11__ {int nMem; int nCursor; TYPE_1__** apCsr; TYPE_3__* aMem; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_12__ {int * z; } ;
typedef TYPE_3__ Mem ;
typedef int BtCursor ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int,int ) ;

__attribute__((used)) static VdbeCursor *FUNC_7(
  Vdbe *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5
){
  Mem *VAR_6 = &VAR_1->aMem[VAR_1->nMem-VAR_2];

  int VAR_7;
  VdbeCursor *VAR_8 = 0;
  VAR_7 =
      FUNC_0(sizeof(VdbeCursor)) +
      (VAR_5?FUNC_3():0) +
      2*VAR_3*sizeof(u32);

  FUNC_1( VAR_2<VAR_1->nCursor );
  if( VAR_1->apCsr[VAR_2] ){
    FUNC_5(VAR_1, VAR_1->apCsr[VAR_2]);
    VAR_1->apCsr[VAR_2] = 0;
  }
  if( VAR_0==FUNC_6(VAR_6, VAR_7, 0) ){
    VAR_1->apCsr[VAR_2] = VAR_8 = (VdbeCursor*)VAR_6->z;
    FUNC_2(VAR_8, 0, sizeof(VdbeCursor));
    VAR_8->iDb = VAR_4;
    VAR_8->nField = VAR_3;
    if( VAR_3 ){
      VAR_8->aType = (u32 *)&VAR_6->z[FUNC_0(sizeof(VdbeCursor))];
    }
    if( VAR_5 ){
      VAR_8->pCursor = (BtCursor*)
          &VAR_6->z[FUNC_0(sizeof(VdbeCursor))+2*VAR_3*sizeof(u32)];
      FUNC_4(VAR_8->pCursor);
    }
  }
  return VAR_8;
}
