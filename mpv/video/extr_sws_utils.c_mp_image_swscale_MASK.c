
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_sws_context {int flags; } ;
struct mp_image {int dummy; } ;


 struct mp_sws_context* FUNC_0 (int *) ;
 int FUNC_1 (struct mp_sws_context*,struct mp_image*,struct mp_image*) ;
 int FUNC_2 (struct mp_sws_context*) ;

int FUNC_3(struct mp_image *VAR_0, struct mp_image *VAR_1,
                     int VAR_2)
{
    struct mp_sws_context *VAR_3 = FUNC_0(((void*)0));
    VAR_3->flags = VAR_2;
    int VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_1);
    FUNC_2(VAR_3);
    return VAR_4;
}
