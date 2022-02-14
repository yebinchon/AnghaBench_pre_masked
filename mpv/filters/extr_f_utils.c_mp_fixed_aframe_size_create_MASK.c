
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_filter {struct fixed_aframe_size_priv* priv; } ;
struct fixed_aframe_size_priv {int samples; int pad_silence; int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fixed_aframe_size_priv*) ;
 int FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;

struct mp_filter *FUNC_3(struct mp_filter *VAR_3,
                                              int VAR_4, bool VAR_5)
{
    if (VAR_4 < 1)
        return ((void*)0);

    struct mp_filter *VAR_6 = FUNC_2(VAR_3, &VAR_2);
    if (!VAR_6)
        return ((void*)0);

    FUNC_1(VAR_6, VAR_0, "in");
    FUNC_1(VAR_6, VAR_1, "out");

    struct fixed_aframe_size_priv *VAR_7 = VAR_6->priv;
    VAR_7->samples = VAR_4;
    VAR_7->pad_silence = VAR_5;
    VAR_7->pool = FUNC_0(VAR_7);

    return VAR_6;
}
