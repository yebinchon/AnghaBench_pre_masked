
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {int dummy; } ;
struct mp_image {int dummy; } ;


 struct mp_image* FUNC_0 (struct mp_refqueue*,int) ;
 scalar_t__ FUNC_1 (struct mp_refqueue*) ;
 scalar_t__ FUNC_2 (struct mp_refqueue*) ;

struct mp_image *FUNC_3(struct mp_refqueue *VAR_0, int VAR_1)
{



    int VAR_2 = FUNC_2(VAR_0) != FUNC_1(VAR_0);
    int VAR_3 = (VAR_1 < 0 ? VAR_1 - (1 - VAR_2) : VAR_1 + VAR_2) / 2;
    return FUNC_0(VAR_0, VAR_3);
}
