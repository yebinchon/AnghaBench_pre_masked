
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {scalar_t__ imgfmt; scalar_t__* planes; } ;
typedef int VASurfaceID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

VASurfaceID FUNC_0(struct mp_image *VAR_2)
{
    return VAR_2 && VAR_2->imgfmt == VAR_0 ?
        (VASurfaceID)(uintptr_t)VAR_2->planes[3] : VAR_1;
}
