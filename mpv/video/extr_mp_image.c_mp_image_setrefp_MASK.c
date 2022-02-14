
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int dummy; } ;


 struct mp_image* FUNC_0 (struct mp_image*) ;
 int FUNC_1 (struct mp_image*) ;

void FUNC_2(struct mp_image **VAR_0, struct mp_image *VAR_1)
{
    if (*VAR_0 != VAR_1) {
        FUNC_1(*VAR_0);
        *VAR_0 = VAR_1 ? FUNC_0(VAR_1) : ((void*)0);
    }
}
