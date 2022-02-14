
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_context {int * nodemask; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline bool
FUNC_3(int VAR_0, struct alloc_context *VAR_1)
{
 if (FUNC_1() && VAR_1->nodemask &&
   !FUNC_0(VAR_1->nodemask)) {
  VAR_1->nodemask = ((void*)0);
  return 1;
 }
 if (FUNC_2(VAR_0))
  return 1;

 return 0;
}
