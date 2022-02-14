
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_filter {struct fixed_aframe_size_priv* priv; } ;
struct fixed_aframe_size_priv {scalar_t__ out_written; int out; int in; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    struct fixed_aframe_size_priv *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_1->in);
    FUNC_0(&VAR_1->out);
    VAR_1->out_written = 0;
}
