
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {scalar_t__ timeout; scalar_t__ extensions; struct bitmap_port* data; } ;
struct bitmap_port {scalar_t__ first_port; scalar_t__ last_port; } ;



__attribute__((used)) static bool
FUNC_0(const struct ip_set *VAR_0, const struct ip_set *VAR_1)
{
 const struct bitmap_port *VAR_2 = VAR_0->data;
 const struct bitmap_port *VAR_3 = VAR_1->data;

 return VAR_2->first_port == VAR_3->first_port &&
        VAR_2->last_port == VAR_3->last_port &&
        VAR_0->timeout == VAR_1->timeout &&
        VAR_0->extensions == VAR_1->extensions;
}
