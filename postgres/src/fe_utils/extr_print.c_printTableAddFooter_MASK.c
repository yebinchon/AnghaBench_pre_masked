
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int data; } ;
typedef TYPE_1__ printTableFooter ;
struct TYPE_6__ {TYPE_1__* footer; TYPE_1__* footers; } ;
typedef TYPE_2__ printTableContent ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

void
FUNC_2(printTableContent *const VAR_0, const char *VAR_1)
{
 printTableFooter *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->data = FUNC_1(VAR_1);

 if (VAR_0->footers == ((void*)0))
  VAR_0->footers = VAR_2;
 else
  VAR_0->footer->next = VAR_2;

 VAR_0->footer = VAR_2;
}
