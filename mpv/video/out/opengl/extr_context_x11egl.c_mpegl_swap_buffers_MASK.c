
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int sync; int egl_surface; int egl_display; int (* GetSyncValues ) (int ,int ,int*,int*,int*) ;} ;
typedef int int64_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int ,int ,int*,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_1->egl_display, VAR_1->egl_surface);

    int64_t VAR_2, VAR_3, VAR_4;
    if (!VAR_1->GetSyncValues || !VAR_1->GetSyncValues(VAR_1->egl_display, VAR_1->egl_surface,
                                               &VAR_2, &VAR_3, &VAR_4))
        VAR_2 = VAR_3 = VAR_4 = -1;

    FUNC_1(&VAR_1->sync, VAR_2, VAR_3, VAR_4);
}
