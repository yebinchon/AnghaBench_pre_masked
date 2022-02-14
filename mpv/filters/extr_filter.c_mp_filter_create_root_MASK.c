
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_filter_params {struct mpv_global* global; int * info; } ;
struct mp_filter {int dummy; } ;


 int VAR_0 ;
 struct mp_filter* FUNC_0 (struct mp_filter_params*) ;

struct mp_filter *FUNC_1(struct mpv_global *VAR_1)
{
    struct mp_filter_params VAR_2 = {
        .info = &VAR_0,
        .global = VAR_1,
    };
    return FUNC_0(&VAR_2);
}
