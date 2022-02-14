
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwupload {struct mp_filter* f; } ;
struct priv {struct mp_hwupload public; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;
 int FUNC_3 (struct mp_hwupload*,int) ;
 int FUNC_4 (struct mp_filter*) ;

struct mp_hwupload *FUNC_5(struct mp_filter *VAR_3, int VAR_4)
{
    struct mp_filter *VAR_5 = FUNC_2(VAR_3, &VAR_2);
    if (!VAR_5)
        return ((void*)0);

    struct priv *VAR_6 = VAR_5->priv;
    struct mp_hwupload *VAR_7 = &VAR_6->public;
    VAR_7->f = VAR_5;

    FUNC_1(VAR_5, VAR_0, "in");
    FUNC_1(VAR_5, VAR_1, "out");

    if (!FUNC_3(VAR_7, VAR_4)) {
        FUNC_0(VAR_5, "hardware format not supported\n");
        goto error;
    }

    return VAR_7;
error:
    FUNC_4(VAR_5);
    return ((void*)0);
}
