
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_filter {struct frame_duration_priv* priv; } ;
struct frame_duration_priv {int buffered; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    struct frame_duration_priv *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_1->buffered);
}
