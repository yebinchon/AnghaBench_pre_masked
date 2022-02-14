
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_opts {double ar_rate; double ar_delay; } ;
struct input_ctx {scalar_t__ ar_state; scalar_t__ last_key_down; struct input_opts* opts; } ;


 double FUNC_0 (double,double) ;

__attribute__((used)) static void FUNC_1(struct input_ctx *VAR_0, double *VAR_1)
{
    struct input_opts *VAR_2 = VAR_0->opts;
    if (VAR_0->last_key_down && VAR_2->ar_rate > 0 && VAR_0->ar_state >= 0) {
        *VAR_1 = FUNC_0(*VAR_1, 1.0 / VAR_2->ar_rate);
        *VAR_1 = FUNC_0(*VAR_1, VAR_2->ar_delay / 1000.0);
    }
}
