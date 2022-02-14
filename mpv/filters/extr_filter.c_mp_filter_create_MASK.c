
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_filter_params {struct mp_filter_info const* parent; struct mp_filter_info const* info; } ;
struct mp_filter_info {int dummy; } ;
typedef struct mp_filter_info const mp_filter ;


 int FUNC_0 (struct mp_filter_info const*) ;
 struct mp_filter_info const* FUNC_1 (struct mp_filter_params*) ;

struct mp_filter *FUNC_2(struct mp_filter *VAR_0,
                                   const struct mp_filter_info *VAR_1)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
    struct mp_filter_params VAR_2 = {
        .info = VAR_1,
        .parent = VAR_0,
    };
    return FUNC_1(&VAR_2);
}
