
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int eof_returned; } ;
struct mp_filter {struct priv* priv; } ;



__attribute__((used)) static void FUNC_0(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    VAR_1->eof_returned = 0;
}
