
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int errors; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(xsltStylesheetPtr VAR_0,
         xmlNodePtr VAR_1)
{
    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
 return;

    if (FUNC_0(VAR_1))
 FUNC_1(((void*)0), VAR_0, VAR_1,
     "The XSLT-element '%s' is not allowed at this position.\n",
     VAR_1->name);
    else
 FUNC_1(((void*)0), VAR_0, VAR_1,
     "The element '%s' is not allowed at this position.\n",
     VAR_1->name);
    VAR_0->errors++;
}
