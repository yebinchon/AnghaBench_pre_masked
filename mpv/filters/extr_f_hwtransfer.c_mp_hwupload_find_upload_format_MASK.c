
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int last_upload_fmt; } ;
struct mp_hwupload {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (struct priv*,int) ;

int FUNC_1(struct mp_hwupload *VAR_0, int VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;

    if (!FUNC_0(VAR_2, VAR_1))
        return 0;
    return VAR_2->last_upload_fmt;
}
