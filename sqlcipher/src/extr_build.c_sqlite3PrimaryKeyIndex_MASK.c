
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pIndex; } ;
typedef TYPE_1__ Table ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ Index ;


 int FUNC_0 (TYPE_2__*) ;

Index *FUNC_1(Table *VAR_0){
  Index *VAR_1;
  for(VAR_1=VAR_0->pIndex; VAR_1 && !FUNC_0(VAR_1); VAR_1=VAR_1->pNext){}
  return VAR_1;
}
