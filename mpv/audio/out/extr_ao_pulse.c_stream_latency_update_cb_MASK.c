
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; } ;
struct ao {struct priv* priv; } ;
typedef int pa_stream ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(pa_stream *VAR_0, void *VAR_1)
{
    struct ao *VAR_2 = VAR_1;
    struct priv *VAR_3 = VAR_2->priv;
    FUNC_0(VAR_3->mainloop, 0);
}
