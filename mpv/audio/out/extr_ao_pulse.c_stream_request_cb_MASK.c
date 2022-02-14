
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; } ;
struct ao {struct priv* priv; } ;
typedef int pa_stream ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static void FUNC_2(pa_stream *VAR_0, size_t VAR_1, void *VAR_2)
{
    struct ao *VAR_3 = VAR_2;
    struct priv *VAR_4 = VAR_3->priv;
    FUNC_1(VAR_3);
    FUNC_0(VAR_4->mainloop, 0);
}
