
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_order_objects {int member_0; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static inline struct kmem_cache_order_objects FUNC_1(unsigned int VAR_1,
  unsigned int VAR_2)
{
 struct kmem_cache_order_objects VAR_3 = {
  (VAR_1 << VAR_0) + FUNC_0(VAR_1, VAR_2)
 };

 return VAR_3;
}
