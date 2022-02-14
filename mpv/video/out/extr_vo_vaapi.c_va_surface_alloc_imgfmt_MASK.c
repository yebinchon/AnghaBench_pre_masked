
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fourcc; } ;
struct TYPE_4__ {scalar_t__ image_id; TYPE_1__ format; } ;
struct va_surface {TYPE_2__ image; } ;
struct priv {int dummy; } ;
struct mp_image {int dummy; } ;
typedef int VAImageFormat ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct priv*,int) ;
 scalar_t__ FUNC_2 (struct va_surface*,int *) ;
 struct va_surface* FUNC_3 (struct mp_image*) ;

__attribute__((used)) static int FUNC_4(struct priv *VAR_1, struct mp_image *VAR_2,
                                   int VAR_3)
{
    struct va_surface *VAR_4 = FUNC_3(VAR_2);
    if (!VAR_4)
        return -1;


    if (VAR_4->image.image_id != VAR_0 &&
        FUNC_0(VAR_4->image.format.fourcc) == VAR_3)
        return 0;
    VAImageFormat *VAR_5 = FUNC_1(VAR_1, VAR_3);
    if (!VAR_5)
        return -1;
    if (FUNC_2(VAR_4, VAR_5) < 0)
        return -1;
    return 0;
}
