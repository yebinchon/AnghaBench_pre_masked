
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {unsigned long index; unsigned int order; } ;


 struct item* FUNC_0 (int) ;

struct item *FUNC_1(unsigned long VAR_0, unsigned int VAR_1)
{
 struct item *VAR_2 = FUNC_0(sizeof(*VAR_2));

 VAR_2->index = VAR_0;
 VAR_2->order = VAR_1;
 return VAR_2;
}
