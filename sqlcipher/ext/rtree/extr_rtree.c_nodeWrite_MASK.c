
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_8__ {int db; int iNodeSize; int * pWriteNode; } ;
struct TYPE_7__ {int iNode; scalar_t__ isDirty; int zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(Rtree *VAR_2, RtreeNode *VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_3->isDirty ){
    sqlite3_stmt *VAR_5 = VAR_2->pWriteNode;
    if( VAR_3->iNode ){
      FUNC_2(VAR_5, 1, VAR_3->iNode);
    }else{
      FUNC_3(VAR_5, 1);
    }
    FUNC_1(VAR_5, 2, VAR_3->zData, VAR_2->iNodeSize, VAR_1);
    FUNC_6(VAR_5);
    VAR_3->isDirty = 0;
    VAR_4 = FUNC_5(VAR_5);
    FUNC_3(VAR_5, 2);
    if( VAR_3->iNode==0 && VAR_4==VAR_0 ){
      VAR_3->iNode = FUNC_4(VAR_2->db);
      FUNC_0(VAR_2, VAR_3);
    }
  }
  return VAR_4;
}
