
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_filter {struct lavfi* priv; } ;
struct lavfi {int tmp_frame; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    struct lavfi *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_0);
    FUNC_0(&VAR_1->tmp_frame);
}
