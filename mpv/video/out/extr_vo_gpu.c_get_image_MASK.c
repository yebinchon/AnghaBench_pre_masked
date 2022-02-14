
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct gpu_priv* priv; } ;
struct mp_image {int dummy; } ;
struct gpu_priv {int renderer; } ;


 struct mp_image* FUNC_0 (int ,int,int,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_1(struct vo *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                  int VAR_4)
{
    struct gpu_priv *VAR_5 = VAR_0->priv;

    return FUNC_0(VAR_5->renderer, VAR_1, VAR_2, VAR_3, VAR_4);
}
