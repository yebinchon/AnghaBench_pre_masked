
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vaapi_gl_mapper_priv {scalar_t__* images; int (* DestroyImageKHR ) (int ,scalar_t__) ;} ;
struct ra_hwdec_mapper {struct priv* priv; } ;
struct priv {struct vaapi_gl_mapper_priv* interop_mapper_priv; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct vaapi_gl_mapper_priv *VAR_2 = VAR_1->interop_mapper_priv;

    if (VAR_2) {
        for (int VAR_3 = 0; VAR_3 < 4; VAR_3++) {
            if (VAR_2->images[VAR_3])
                VAR_2->DestroyImageKHR(FUNC_0(), VAR_2->images[VAR_3]);
            VAR_2->images[VAR_3] = 0;
        }
    }
}
