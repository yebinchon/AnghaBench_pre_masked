
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va_surface {int dummy; } ;
struct mp_image {scalar_t__ imgfmt; scalar_t__* planes; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct va_surface *FUNC_0(struct mp_image *VAR_1)
{
    return VAR_1 && VAR_1->imgfmt == VAR_0 ?
        (struct va_surface*)VAR_1->planes[0] : ((void*)0);
}
