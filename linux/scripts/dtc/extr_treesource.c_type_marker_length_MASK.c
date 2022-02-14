
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct marker {size_t offset; int next; } ;


 struct marker* FUNC_0 (int ) ;

size_t FUNC_1(struct marker *VAR_0)
{
 struct marker *VAR_1 = FUNC_0(VAR_0->next);

 if (VAR_1)
  return VAR_1->offset - VAR_0->offset;
 return 0;
}
