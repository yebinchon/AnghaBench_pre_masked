
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnfa {scalar_t__ nstates; int arcs; int states; int stflags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct cnfa *VAR_0)
{
 FUNC_1(VAR_0->nstates != 0);
 VAR_0->nstates = 0;
 FUNC_0(VAR_0->stflags);
 FUNC_0(VAR_0->states);
 FUNC_0(VAR_0->arcs);
}
