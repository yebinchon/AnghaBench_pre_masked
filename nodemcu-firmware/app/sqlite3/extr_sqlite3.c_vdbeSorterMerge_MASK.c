
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int (* xCompare ) (TYPE_3__*,int*,int ,int ,int ,int ) ;} ;
struct TYPE_10__ {TYPE_2__* pNext; } ;
struct TYPE_11__ {TYPE_1__ u; int nVal; } ;
typedef TYPE_2__ SorterRecord ;
typedef TYPE_3__ SortSubtask ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int*,int ,int ,int ,int ) ;

__attribute__((used)) static SorterRecord *FUNC_3(
  SortSubtask *VAR_0,
  SorterRecord *VAR_1,
  SorterRecord *VAR_2
){
  SorterRecord *VAR_3 = 0;
  SorterRecord **VAR_4 = &VAR_3;
  int VAR_5 = 0;

  FUNC_1( VAR_1!=0 && VAR_2!=0 );
  for(;;){
    int VAR_6;
    VAR_6 = VAR_0->xCompare(
        VAR_0, &VAR_5, FUNC_0(VAR_1), VAR_1->nVal, FUNC_0(VAR_2), VAR_2->nVal
    );

    if( VAR_6<=0 ){
      *VAR_4 = VAR_1;
      VAR_4 = &VAR_1->u.pNext;
      VAR_1 = VAR_1->u.pNext;
      if( VAR_1==0 ){
        *VAR_4 = VAR_2;
        break;
      }
    }else{
      *VAR_4 = VAR_2;
      VAR_4 = &VAR_2->u.pNext;
      VAR_2 = VAR_2->u.pNext;
      VAR_5 = 0;
      if( VAR_2==0 ){
        *VAR_4 = VAR_1;
        break;
      }
    }
  }
  return VAR_3;
}
