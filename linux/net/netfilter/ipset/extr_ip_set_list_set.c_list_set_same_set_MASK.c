
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_set {scalar_t__ size; } ;
struct ip_set {scalar_t__ timeout; scalar_t__ extensions; struct list_set* data; } ;



__attribute__((used)) static bool
FUNC_0(const struct ip_set *VAR_0, const struct ip_set *VAR_1)
{
 const struct list_set *VAR_2 = VAR_0->data;
 const struct list_set *VAR_3 = VAR_1->data;

 return VAR_2->size == VAR_3->size &&
        VAR_0->timeout == VAR_1->timeout &&
        VAR_0->extensions == VAR_1->extensions;
}
