
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct point2d {int dummy; } ;
struct outline {int count; struct point2d* items; } ;
struct dynamic_array {int dummy; } ;


 int FUNC_0 (struct dynamic_array*,int,int) ;

__attribute__((used)) static struct point2d *FUNC_1(struct outline *VAR_0, int VAR_1)
{
    struct point2d *VAR_2;

    if (!FUNC_0((struct dynamic_array *)VAR_0, VAR_0->count + VAR_1, sizeof(VAR_0->items[0])))
        return ((void*)0);

    VAR_2 = &VAR_0->items[VAR_0->count];
    VAR_0->count += VAR_1;
    return VAR_2;
}
