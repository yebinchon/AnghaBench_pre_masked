
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int * vp_enum; int * video_proc; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->video_proc)
        FUNC_1(VAR_1->video_proc);
    VAR_1->video_proc = ((void*)0);

    if (VAR_1->vp_enum)
        FUNC_0(VAR_1->vp_enum);
    VAR_1->vp_enum = ((void*)0);
}
