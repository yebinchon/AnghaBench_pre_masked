
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {unsigned long order; unsigned long index; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct item*) ;

void FUNC_2(struct item *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(!FUNC_1(VAR_1));
 FUNC_0(VAR_1->order < VAR_0);
 VAR_3 = (1UL << VAR_1->order) - 1;
 FUNC_0((VAR_1->index | VAR_3) == (VAR_2 | VAR_3));
}
