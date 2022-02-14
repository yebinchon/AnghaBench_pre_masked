
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct avtab {scalar_t__ nel; int * htable; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct avtab *VAR_0)
{
 FUNC_0(VAR_0->htable);
 VAR_0->htable = ((void*)0);
 VAR_0->nel = 0;
 return 0;
}
