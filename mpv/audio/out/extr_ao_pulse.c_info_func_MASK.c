
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pa_sink_input_info {int dummy; } ;
struct priv {int mainloop; struct pa_sink_input_info pi; } ;
struct pa_context {int dummy; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pa_context *VAR_0, const struct pa_sink_input_info *VAR_1,
                      int VAR_2, void *VAR_3)
{
    struct ao *VAR_4 = VAR_3;
    struct priv *VAR_5 = VAR_4->priv;
    if (VAR_2 < 0) {
        FUNC_0("Failed to get sink input info");
        return;
    }
    if (!VAR_1)
        return;
    VAR_5->pi = *VAR_1;
    FUNC_1(VAR_5->mainloop, 0);
}
