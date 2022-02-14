
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assoc_array_ptr {int dummy; } ;
struct assoc_array {int root; } ;


 struct assoc_array_ptr* FUNC_0 (int ) ;
 int FUNC_1 (struct assoc_array_ptr*,int *,int (*) (void const*,void*),void*) ;

int FUNC_2(const struct assoc_array *VAR_0,
   int (*VAR_1)(const void *VAR_2,
     void *VAR_3),
   void *VAR_4)
{
 struct assoc_array_ptr *VAR_5 = FUNC_0(VAR_0->root);

 if (!VAR_5)
  return 0;
 return FUNC_1(VAR_5, ((void*)0), VAR_1, VAR_4);
}
