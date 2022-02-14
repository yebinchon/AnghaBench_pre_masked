
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {int bPoint; scalar_t__* aNode; TYPE_2__ sPoint; TYPE_1__* aPoint; scalar_t__ nPoint; } ;
struct TYPE_6__ {int id; } ;
typedef int RtreeNode ;
typedef TYPE_3__ RtreeCursor ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static RtreeNode *FUNC_3(RtreeCursor *VAR_0, int *VAR_1){
  sqlite3_int64 VAR_2;
  int VAR_3 = 1 - VAR_0->bPoint;
  FUNC_1( VAR_3==0 || VAR_3==1 );
  FUNC_1( VAR_0->bPoint || VAR_0->nPoint );
  if( VAR_0->aNode[VAR_3]==0 ){
    FUNC_1( VAR_1!=0 );
    VAR_2 = VAR_3 ? VAR_0->aPoint[0].id : VAR_0->sPoint.id;
    *VAR_1 = FUNC_2(FUNC_0(VAR_0), VAR_2, 0, &VAR_0->aNode[VAR_3]);
  }
  return VAR_0->aNode[VAR_3];
}
