
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sourceText; } ;
typedef TYPE_1__ QueryDesc ;
typedef int ExplainState ;


 int FUNC_0 (char*,scalar_t__,int *) ;

void
FUNC_1(ExplainState *VAR_0, QueryDesc *VAR_1)
{
 if (VAR_1->sourceText)
  FUNC_0("Query Text", VAR_1->sourceText, VAR_0);
}
