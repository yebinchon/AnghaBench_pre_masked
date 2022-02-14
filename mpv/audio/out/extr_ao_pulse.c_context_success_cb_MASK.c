
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int retval; int mainloop; } ;
struct ao {struct priv* priv; } ;
typedef int pa_context ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_0, int VAR_1, void *VAR_2)
{
    struct ao *VAR_3 = VAR_2;
    struct priv *VAR_4 = VAR_3->priv;
    VAR_4->retval = VAR_1;
    FUNC_0(VAR_4->mainloop, 0);
}
