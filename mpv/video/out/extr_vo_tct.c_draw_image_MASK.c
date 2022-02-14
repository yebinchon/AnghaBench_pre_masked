
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int frame; int sws; } ;
struct mp_image {int dummy; } ;
typedef struct mp_image mp_image_t ;


 int FUNC_0 (int ,int ,struct mp_image*) ;
 int FUNC_1 (struct mp_image*) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0, mp_image_t *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    struct mp_image VAR_3 = *VAR_1;

    FUNC_0(VAR_2->sws, VAR_2->frame, &VAR_3);
    FUNC_1(VAR_1);
}
