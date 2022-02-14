
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int log; } ;
struct ao {int log; struct wasapi_state* priv; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ao*,char*) ;
 int FUNC_3 (struct wasapi_state*,char*,int ) ;
 int FUNC_4 (struct ao*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ao*,int) ;

__attribute__((used)) static int FUNC_7(struct ao *VAR_1)
{
    FUNC_2(VAR_1, "Hotplug init\n");
    struct wasapi_state *VAR_2 = VAR_1->priv;
    VAR_2->log = VAR_1->log;
    FUNC_0(((void*)0), VAR_0);
    HRESULT VAR_3 = FUNC_6(VAR_1, 1);
    FUNC_1(VAR_3);

    return 0;
    exit_label:
    FUNC_3(VAR_2, "Error setting up audio hotplug: %s\n", FUNC_5(VAR_3));
    FUNC_4(VAR_1);
    return -1;
}
