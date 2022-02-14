
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int vs_initialized; } ;


 int FUNC_0 (struct priv*,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct priv *VAR_0)
{
    if (!FUNC_1()) {
        FUNC_0(VAR_0, "Could not initialize VapourSynth scripting.\n");
        return -1;
    }
    VAR_0->vs_initialized = 1;
    return 0;
}
