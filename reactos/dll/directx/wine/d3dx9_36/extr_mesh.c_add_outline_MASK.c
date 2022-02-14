
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outline_array {scalar_t__ count; struct outline* items; } ;
struct outline {int dummy; } ;
struct dynamic_array {int dummy; } ;


 int FUNC_0 (struct outline*,int) ;
 int FUNC_1 (struct dynamic_array*,scalar_t__,int) ;

__attribute__((used)) static struct outline *FUNC_2(struct outline_array *VAR_0)
{
    struct outline *VAR_1;

    if (!FUNC_1((struct dynamic_array *)VAR_0, VAR_0->count + 1, sizeof(VAR_0->items[0])))
        return ((void*)0);

    VAR_1 = &VAR_0->items[VAR_0->count++];
    FUNC_0(VAR_1, sizeof(*VAR_1));
    return VAR_1;
}
