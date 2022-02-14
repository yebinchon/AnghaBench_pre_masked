
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int in; int table_window; int table_blend; int buf_pre_corr; int buf_overlap; int buf_queue; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_3(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(VAR_1->buf_queue);
    FUNC_1(VAR_1->buf_overlap);
    FUNC_1(VAR_1->buf_pre_corr);
    FUNC_1(VAR_1->table_blend);
    FUNC_1(VAR_1->table_window);
    FUNC_0(&VAR_1->in);
    FUNC_2(VAR_0);
}
