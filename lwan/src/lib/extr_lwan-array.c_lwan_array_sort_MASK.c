
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_array {int elements; int base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,size_t,int (*) (void const*,void const*)) ;

void FUNC_2(struct lwan_array *VAR_0,
                     size_t VAR_1,
                     int (*VAR_2)(const void *VAR_3, const void *VAR_4))
{
    if (FUNC_0(VAR_0->elements))
        FUNC_1(VAR_0->base, VAR_0->elements, VAR_1, VAR_2);
}
