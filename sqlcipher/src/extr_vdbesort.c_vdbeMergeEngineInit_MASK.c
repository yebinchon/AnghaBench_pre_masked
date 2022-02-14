
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nTree; int * aReadr; TYPE_2__* pTask; } ;
struct TYPE_8__ {TYPE_1__* pUnpacked; } ;
struct TYPE_7__ {int errCode; } ;
typedef TYPE_2__ SortSubtask ;
typedef TYPE_3__ MergeEngine ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
  SortSubtask *VAR_4,
  MergeEngine *VAR_5,
  int VAR_6
){
  int VAR_7 = VAR_3;
  int VAR_8;
  int VAR_9;



  FUNC_0( VAR_5!=0 );


  FUNC_0( VAR_2>0 || VAR_6==VAR_0 );


  FUNC_0( VAR_5->pTask==0 );
  VAR_5->pTask = VAR_4;

  VAR_9 = VAR_5->nTree;
  for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
    if( VAR_2>0 && VAR_6==VAR_1 ){







      VAR_7 = FUNC_3(&VAR_5->aReadr[VAR_9-VAR_8-1]);
    }else{
      VAR_7 = FUNC_2(&VAR_5->aReadr[VAR_8], VAR_0);
    }
    if( VAR_7!=VAR_3 ) return VAR_7;
  }

  for(VAR_8=VAR_5->nTree-1; VAR_8>0; VAR_8--){
    FUNC_1(VAR_5, VAR_8);
  }
  return VAR_4->pUnpacked->errCode;
}
