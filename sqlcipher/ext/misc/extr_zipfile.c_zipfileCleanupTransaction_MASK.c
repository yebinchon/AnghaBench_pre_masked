
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ szOrig; scalar_t__ szCurrent; scalar_t__ pLastEntry; TYPE_2__* pFirstEntry; scalar_t__ pWriteFd; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
typedef TYPE_2__ ZipfileEntry ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(ZipfileTab *VAR_0){
  ZipfileEntry *VAR_1;
  ZipfileEntry *VAR_2;

  if( VAR_0->pWriteFd ){
    FUNC_0(VAR_0->pWriteFd);
    VAR_0->pWriteFd = 0;
  }
  for(VAR_1=VAR_0->pFirstEntry; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_1(VAR_1);
  }
  VAR_0->pFirstEntry = 0;
  VAR_0->pLastEntry = 0;
  VAR_0->szCurrent = 0;
  VAR_0->szOrig = 0;
}
