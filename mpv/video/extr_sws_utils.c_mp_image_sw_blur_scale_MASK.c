
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_sws_context {int flags; int force_reload; int src_filter; } ;
struct mp_image {int dummy; } ;


 int VAR_0 ;
 struct mp_sws_context* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct mp_sws_context*,struct mp_image*,struct mp_image*) ;
 int FUNC_2 (float,float,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct mp_sws_context*) ;

int FUNC_4(struct mp_image *VAR_2, struct mp_image *VAR_3,
                           float VAR_4)
{
    struct mp_sws_context *VAR_5 = FUNC_0(((void*)0));
    VAR_5->flags = VAR_0 | VAR_1;
    VAR_5->src_filter = FUNC_2(VAR_4, VAR_4, 0, 0, 0, 0, 0);
    VAR_5->force_reload = 1;
    int VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3);
    FUNC_3(VAR_5);
    return VAR_6;
}
