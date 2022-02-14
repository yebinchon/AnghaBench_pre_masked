
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_user_filter {int error_eof_sent; int last_out_pts; int last_in_pts; } ;
struct mp_filter {struct mp_user_filter* priv; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mp_filter *VAR_1)
{
    struct mp_user_filter *VAR_2 = VAR_1->priv;

    VAR_2->error_eof_sent = 0;
    VAR_2->last_in_pts = VAR_2->last_out_pts = VAR_0;
}
