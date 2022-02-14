
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_node {unsigned long start; unsigned long end; struct mempolicy* policy; } ;
struct mempolicy {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct sp_node *VAR_0, unsigned long VAR_1,
   unsigned long VAR_2, struct mempolicy *VAR_3)
{
 VAR_0->start = VAR_1;
 VAR_0->end = VAR_2;
 VAR_0->policy = VAR_3;
}
