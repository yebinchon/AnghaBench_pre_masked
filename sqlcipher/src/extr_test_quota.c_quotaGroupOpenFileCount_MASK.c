
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pFiles; } ;
typedef TYPE_1__ quotaGroup ;
struct TYPE_5__ {struct TYPE_5__* pNext; scalar_t__ nRef; } ;
typedef TYPE_2__ quotaFile ;



__attribute__((used)) static int FUNC_0(quotaGroup *VAR_0){
  int VAR_1 = 0;
  quotaFile *VAR_2 = VAR_0->pFiles;
  while( VAR_2 ){
    if( VAR_2->nRef ) VAR_1++;
    VAR_2 = VAR_2->pNext;
  }
  return VAR_1;
}
