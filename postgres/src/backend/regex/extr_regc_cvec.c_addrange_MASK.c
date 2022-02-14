
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvec {int nranges; int rangespace; void** ranges; } ;
typedef void* chr ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct cvec *VAR_0,
   chr VAR_1,
   chr VAR_2)
{
 FUNC_0(VAR_0->nranges < VAR_0->rangespace);
 VAR_0->ranges[VAR_0->nranges * 2] = VAR_1;
 VAR_0->ranges[VAR_0->nranges * 2 + 1] = VAR_2;
 VAR_0->nranges++;
}
