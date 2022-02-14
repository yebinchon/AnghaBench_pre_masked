
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int context; int display; } ;
struct mp_filter {struct priv* priv; } ;
typedef int VAStatus ;
typedef int VAProcFilterType ;


 scalar_t__ FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 (int ,int ,int ,void*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct mp_filter *VAR_0, VAProcFilterType VAR_1,
                                void *VAR_2, unsigned int VAR_3)
{
    struct priv *VAR_4 = VAR_0->priv;
    VAStatus VAR_5 = FUNC_1(VAR_4->display, VAR_4->context, VAR_1,
                                                 VAR_2, &VAR_3);
    return FUNC_0(VAR_0, "vaQueryVideoProcFilterCaps()") ? VAR_3 : 0;
}
