
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int buffer_queue; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int ,struct ao*) ;

__attribute__((used)) static void FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_1->buffer_queue, VAR_0);
}
