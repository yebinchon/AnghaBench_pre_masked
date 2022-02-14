
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int i64 ;
struct TYPE_24__ {scalar_t__ iDepth; int nNodeRef; TYPE_1__* pDeleted; int pDeleteRowid; } ;
struct TYPE_23__ {int isDirty; struct TYPE_23__* pNext; int zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__**,int ) ;
 int FUNC_4 (TYPE_2__*,int,TYPE_1__*,TYPE_1__**) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ,int*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(Rtree *VAR_2, sqlite3_int64 VAR_3){
  int VAR_4;
  RtreeNode *VAR_5 = 0;
  int VAR_6;
  RtreeNode *VAR_7 = 0;



  VAR_4 = FUNC_4(VAR_2, 1, 0, &VAR_7);




  if( VAR_4==VAR_1 ){
    VAR_4 = FUNC_3(VAR_2, VAR_3, &VAR_5, 0);
  }






  if( VAR_4==VAR_1 && VAR_5 ){
    int VAR_8;
    VAR_4 = FUNC_7(VAR_2, VAR_5, VAR_3, &VAR_6);
    if( VAR_4==VAR_1 ){
      VAR_4 = FUNC_2(VAR_2, VAR_5, VAR_6, 0);
    }
    VAR_8 = FUNC_6(VAR_2, VAR_5);
    if( VAR_4==VAR_1 ){
      VAR_4 = VAR_8;
    }
  }


  if( VAR_4==VAR_1 ){
    FUNC_10(VAR_2->pDeleteRowid, 1, VAR_3);
    FUNC_13(VAR_2->pDeleteRowid);
    VAR_4 = FUNC_12(VAR_2->pDeleteRowid);
  }
  if( VAR_4==VAR_1 && VAR_2->iDepth>0 && FUNC_0(VAR_7)==1 ){
    int VAR_9;
    RtreeNode *VAR_10 = 0;
    i64 VAR_11 = FUNC_5(VAR_2, VAR_7, 0);
    VAR_4 = FUNC_4(VAR_2, VAR_11, VAR_7, &VAR_10);
    if( VAR_4==VAR_1 ){
      VAR_4 = FUNC_9(VAR_2, VAR_10, VAR_2->iDepth-1);
    }
    VAR_9 = FUNC_6(VAR_2, VAR_10);
    if( VAR_4==VAR_1 ) VAR_4 = VAR_9;
    if( VAR_4==VAR_1 ){
      VAR_2->iDepth--;
      FUNC_14(VAR_7->zData, VAR_2->iDepth);
      VAR_7->isDirty = 1;
    }
  }


  for(VAR_5=VAR_2->pDeleted; VAR_5; VAR_5=VAR_2->pDeleted){
    if( VAR_4==VAR_1 ){
      VAR_4 = FUNC_8(VAR_2, VAR_5);
    }
    VAR_2->pDeleted = VAR_5->pNext;
    VAR_2->nNodeRef--;
    FUNC_11(VAR_5);
  }


  if( VAR_4==VAR_1 ){
    VAR_4 = FUNC_6(VAR_2, VAR_7);
  }else{
    FUNC_6(VAR_2, VAR_7);
  }

  return VAR_4;
}
