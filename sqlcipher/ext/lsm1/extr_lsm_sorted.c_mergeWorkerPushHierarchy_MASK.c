
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_2__* aSave; scalar_t__ iIndirect; TYPE_1__* pDb; } ;
struct TYPE_8__ {int bStore; scalar_t__ iPgno; } ;
struct TYPE_7__ {int pFS; } ;
typedef TYPE_3__ MergeWorker ;
typedef scalar_t__ LsmPgno ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,scalar_t__,int ,void*,int) ;

__attribute__((used)) static int FUNC_4(
  MergeWorker *VAR_2,
  int VAR_3,
  void *VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_0;
  LsmPgno VAR_7;

  FUNC_0( VAR_2->aSave[0].bStore==0 );
  FUNC_0( VAR_2->aSave[1].bStore==0 );
  VAR_6 = FUNC_2(VAR_2);




  VAR_7 = VAR_2->aSave[0].iPgno;
  FUNC_0( VAR_7!=0 );


  if( (VAR_5*4 > FUNC_1(VAR_2->pDb->pFS)) ){
    VAR_2->iIndirect = VAR_7;
    VAR_2->aSave[1].bStore = 1;
  }else{
    VAR_6 = FUNC_3(
        VAR_2, (u8)(VAR_3 | VAR_1), VAR_7, 0, VAR_4, VAR_5
    );
  }


  return VAR_6;
}
