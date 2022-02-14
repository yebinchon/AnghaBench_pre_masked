
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nchar; scalar_t__ issuffix; TYPE_1__* node; } ;
struct TYPE_4__ {int type; struct TYPE_4__* next; scalar_t__ data; } ;
typedef TYPE_1__ RegisNode ;
typedef TYPE_2__ Regis ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

bool
FUNC_3(Regis *VAR_1, char *VAR_2)
{
 RegisNode *VAR_3 = VAR_1->node;
 char *VAR_4 = VAR_2;
 int VAR_5 = 0;

 while (*VAR_4)
 {
  VAR_5++;
  VAR_4 += FUNC_2(VAR_4);
 }

 if (VAR_5 < VAR_1->nchar)
  return 0;

 VAR_4 = VAR_2;
 if (VAR_1->issuffix)
 {
  VAR_5 -= VAR_1->nchar;
  while (VAR_5-- > 0)
   VAR_4 += FUNC_2(VAR_4);
 }


 while (VAR_3)
 {
  switch (VAR_3->type)
  {
   case 128:
    if (!FUNC_1((char *) VAR_3->data, VAR_4))
     return 0;
    break;
   case 129:
    if (FUNC_1((char *) VAR_3->data, VAR_4))
     return 0;
    break;
   default:
    FUNC_0(VAR_0, "unrecognized regis node type: %d", VAR_3->type);
  }
  VAR_3 = VAR_3->next;
  VAR_4 += FUNC_2(VAR_4);
 }

 return 1;
}
