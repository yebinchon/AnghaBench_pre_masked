
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {scalar_t__ hwdec_devs; struct priv* priv; } ;
struct vaapi_osd_part {int image; } ;
struct priv {TYPE_1__* mpvaapi; struct vaapi_osd_part* osd_parts; int pool; } ;
struct TYPE_2__ {int hwctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct priv*,int *) ;
 int FUNC_1 (struct priv*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct vo*) ;

__attribute__((used)) static void FUNC_7(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    FUNC_1(VAR_2);
    FUNC_4(VAR_2->pool);

    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        struct vaapi_osd_part *VAR_4 = &VAR_2->osd_parts[VAR_3];
        FUNC_0(VAR_2, &VAR_4->image);
    }

    if (VAR_1->hwdec_devs) {
        FUNC_3(VAR_1->hwdec_devs, &VAR_2->mpvaapi->hwctx);
        FUNC_2(VAR_1->hwdec_devs);
    }

    FUNC_5(VAR_2->mpvaapi);

    FUNC_6(VAR_1);
}
