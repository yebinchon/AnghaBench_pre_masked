
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cstate {scalar_t__ ncclass; TYPE_2__* yycc; TYPE_1__* prog; } ;
struct TYPE_4__ {int spans; int end; } ;
struct TYPE_3__ {TYPE_2__* cclass; } ;


 int FUNC_0 (struct cstate*,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct cstate *VAR_0)
{
 if (VAR_0->ncclass >= FUNC_1(VAR_0->prog->cclass))
  FUNC_0(VAR_0, "too many character classes");
 VAR_0->yycc = VAR_0->prog->cclass + VAR_0->ncclass++;
 VAR_0->yycc->end = VAR_0->yycc->spans;
}
