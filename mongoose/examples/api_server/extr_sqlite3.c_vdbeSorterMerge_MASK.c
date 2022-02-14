
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VdbeCursor ;
struct TYPE_5__ {void* pVal; struct TYPE_5__* pNext; int nVal; } ;
typedef TYPE_1__ SorterRecord ;


 int FUNC_0 (int const*,int ,void*,int ,void*,int ,int*) ;

__attribute__((used)) static void FUNC_1(
  const VdbeCursor *VAR_0,
  SorterRecord *VAR_1,
  SorterRecord *VAR_2,
  SorterRecord **VAR_3
){
  SorterRecord *VAR_4 = 0;
  SorterRecord **VAR_5 = &VAR_4;
  void *VAR_6 = VAR_2 ? VAR_2->pVal : 0;

  while( VAR_1 && VAR_2 ){
    int VAR_7;
    FUNC_0(VAR_0, 0, VAR_1->pVal, VAR_1->nVal, VAR_6, VAR_2->nVal, &VAR_7);
    if( VAR_7<=0 ){
      *VAR_5 = VAR_1;
      VAR_5 = &VAR_1->pNext;
      VAR_1 = VAR_1->pNext;
      VAR_6 = 0;
    }else{
      *VAR_5 = VAR_2;
       VAR_5 = &VAR_2->pNext;
      VAR_2 = VAR_2->pNext;
      if( VAR_2==0 ) break;
      VAR_6 = VAR_2->pVal;
    }
  }
  *VAR_5 = VAR_1 ? VAR_1 : VAR_2;
  *VAR_3 = VAR_4;
}
