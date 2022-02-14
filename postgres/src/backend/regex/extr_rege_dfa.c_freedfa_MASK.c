
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfa {int * mallocarea; int * incarea; int * outsarea; int * statesarea; int * ssets; scalar_t__ cptsmalloced; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct dfa *VAR_0)
{
 if (VAR_0->cptsmalloced)
 {
  if (VAR_0->ssets != ((void*)0))
   FUNC_0(VAR_0->ssets);
  if (VAR_0->statesarea != ((void*)0))
   FUNC_0(VAR_0->statesarea);
  if (VAR_0->outsarea != ((void*)0))
   FUNC_0(VAR_0->outsarea);
  if (VAR_0->incarea != ((void*)0))
   FUNC_0(VAR_0->incarea);
 }

 if (VAR_0->mallocarea != ((void*)0))
  FUNC_0(VAR_0->mallocarea);
}
