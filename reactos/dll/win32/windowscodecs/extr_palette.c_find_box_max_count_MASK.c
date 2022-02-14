
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct box {scalar_t__ count; scalar_t__ score; } ;



__attribute__((used)) static struct box *FUNC_0(struct box *VAR_0, int VAR_1)
{
    struct box *VAR_2 = ((void*)0);
    for (; VAR_1--; VAR_0++)
        if (VAR_0->score && (!VAR_2 || VAR_0->count > VAR_2->count)) VAR_2 = VAR_0;
    return VAR_2;
}
