
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int iFirst; } ;
struct TYPE_7__ {TYPE_2__* pSeg; } ;
typedef TYPE_1__ SegmentPtr ;
typedef TYPE_2__ Segment ;
typedef int Page ;
typedef int FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int **) ;
 int FUNC_1 (int *,TYPE_2__*,int **) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(
  FileSystem *VAR_1,
  SegmentPtr *VAR_2,
  int VAR_3,
  int *VAR_4
){
  if( *VAR_4==VAR_0 ){
    Segment *VAR_5 = VAR_2->pSeg;
    Page *VAR_6 = 0;
    if( VAR_3 ){
      *VAR_4 = FUNC_1(VAR_1, VAR_5, &VAR_6);
    }else{
      *VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_5->iFirst, &VAR_6);
    }
    FUNC_2(VAR_2, VAR_6);
  }
}
