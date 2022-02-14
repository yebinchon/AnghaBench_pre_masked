
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ image_id; } ;
struct vaapi_osd_image {scalar_t__ subpic_id; TYPE_1__ image; } ;
struct priv {int display; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct priv *VAR_1, struct vaapi_osd_image *VAR_2)
{
    if (VAR_2->image.image_id != VAR_0)
        FUNC_0(VAR_1->display, VAR_2->image.image_id);
    if (VAR_2->subpic_id != VAR_0)
        FUNC_1(VAR_1->display, VAR_2->subpic_id);
    VAR_2->image.image_id = VAR_0;
    VAR_2->subpic_id = VAR_0;
}
