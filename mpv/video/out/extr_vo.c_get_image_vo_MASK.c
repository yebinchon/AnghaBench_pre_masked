
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* driver; } ;
struct mp_image {int dummy; } ;
struct TYPE_2__ {struct mp_image* (* get_image ) (struct vo*,int,int,int,int) ;} ;


 struct mp_image* FUNC_0 (struct vo*,int,int,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_1(void *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                     int VAR_4)
{
    struct vo *VAR_5 = VAR_0;
    return VAR_5->driver->get_image(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
