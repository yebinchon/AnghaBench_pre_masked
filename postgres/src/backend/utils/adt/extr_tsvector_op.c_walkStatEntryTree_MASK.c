
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ndoc; struct TYPE_6__* left; struct TYPE_6__* right; } ;
struct TYPE_5__ {size_t stackpos; size_t maxdepth; TYPE_2__** stack; } ;
typedef TYPE_1__ TSVectorStat ;
typedef TYPE_2__ StatEntry ;


 int FUNC_0 (int) ;

__attribute__((used)) static StatEntry *
FUNC_1(TSVectorStat *VAR_0)
{
 StatEntry *VAR_1 = VAR_0->stack[VAR_0->stackpos];

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 if (VAR_1->ndoc != 0)
 {

  return VAR_1;
 }
 else if (VAR_1->right && VAR_1->right != VAR_0->stack[VAR_0->stackpos + 1])
 {

  VAR_0->stackpos++;
  VAR_1 = VAR_1->right;


  for (;;)
  {
   VAR_0->stack[VAR_0->stackpos] = VAR_1;
   if (VAR_1->left)
   {
    VAR_0->stackpos++;
    VAR_1 = VAR_1->left;
   }
   else
    break;
  }
  FUNC_0(VAR_0->stackpos <= VAR_0->maxdepth);
 }
 else
 {

  if (VAR_0->stackpos == 0)
   return ((void*)0);

  VAR_0->stackpos--;
  return FUNC_1(VAR_0);
 }

 return VAR_1;
}
