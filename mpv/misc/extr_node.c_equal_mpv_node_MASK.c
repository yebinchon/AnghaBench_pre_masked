
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_node {scalar_t__ format; int u; } ;


 int FUNC_0 (int *,int *,scalar_t__) ;

bool FUNC_1(const struct mpv_node *VAR_0, const struct mpv_node *VAR_1)
{
    if (VAR_0->format != VAR_1->format)
        return 0;
    return FUNC_0(&VAR_0->u, &VAR_1->u, VAR_0->format);
}
