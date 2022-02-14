
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcov {unsigned long* area; unsigned long size; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kcov *VAR_1)
{
 unsigned long VAR_2 = VAR_0 / sizeof(unsigned long);
 unsigned long *VAR_3 = VAR_1->area;
 unsigned long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4 += VAR_2)
  FUNC_0(VAR_3[VAR_4]);
}
