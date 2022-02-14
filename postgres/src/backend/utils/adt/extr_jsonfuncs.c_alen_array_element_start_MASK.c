
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_1__* lex; } ;
struct TYPE_3__ {int lex_level; } ;
typedef TYPE_2__ AlenState ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bool VAR_1)
{
 AlenState *VAR_2 = (AlenState *) VAR_0;


 if (VAR_2->lex->lex_level == 1)
  VAR_2->count++;
}
