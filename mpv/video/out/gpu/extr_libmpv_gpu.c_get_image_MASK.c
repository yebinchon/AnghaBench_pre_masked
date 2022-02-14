
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_backend {struct priv* priv; } ;
struct priv {int renderer; } ;
struct mp_image {int dummy; } ;


 struct mp_image* FUNC_0 (int ,int,int,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_1(struct render_backend *VAR_0, int VAR_1,
                                  int VAR_2, int VAR_3, int VAR_4)
{
    struct priv *VAR_5 = VAR_0->priv;

    return FUNC_0(VAR_5->renderer, VAR_1, VAR_2, VAR_3, VAR_4);
}
