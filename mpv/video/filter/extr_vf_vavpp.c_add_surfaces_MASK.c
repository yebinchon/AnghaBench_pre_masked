
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface_refs {int max_surfaces; int num_surfaces; int surfaces; } ;
struct priv {int queue; } ;
struct mp_image {int dummy; } ;
typedef scalar_t__ VASurfaceID ;


 int FUNC_0 (struct priv*,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct mp_image* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct mp_image*) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_1, struct surface_refs *VAR_2, int VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_2->max_surfaces; VAR_4++) {
        struct mp_image *VAR_5 = FUNC_1(VAR_1->queue, (1 + VAR_4) * VAR_3);
        if (!VAR_5)
            break;
        VASurfaceID VAR_6 = FUNC_2(VAR_5);
        if (VAR_6 == VAR_0)
            break;
        FUNC_0(VAR_1, VAR_2->surfaces, VAR_2->num_surfaces, VAR_6);
    }
}
