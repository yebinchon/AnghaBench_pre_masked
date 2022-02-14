
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ winver; int dll; int (* unhook ) (int *) ;int second; int post; int pre; int reason; int name; scalar_t__ (* hook ) (int *) ;} ;
typedef int * HMODULE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int **,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_6 (char*,int ,int ,int *,void*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(size_t VAR_5, BOOL VAR_6)
{
    BOOL VAR_7;
    HMODULE VAR_8;

    if (!FUNC_3(VAR_4[VAR_5].dll, &VAR_8, &VAR_2))
        VAR_2 = ((void*)0);
    VAR_3 = (void*)FUNC_2(VAR_8, "NotifyShims");

    if (!VAR_2 || !VAR_3)
    {
        FUNC_6("%s not loaded, or does not export GetHookAPIs or pNotifyShims (%s, %p, %p)\n",
             FUNC_11(VAR_4[VAR_5].dll), VAR_4[VAR_5].name, VAR_2, VAR_3);
        return;
    }

    VAR_1 = FUNC_4(VAR_8);

    if (!VAR_1)
    {
        VAR_1 = VAR_0;
        FUNC_10("Module %s has no version, faking 2k3\n", FUNC_11(VAR_4[VAR_5].dll));
    }

    if (VAR_1 >= VAR_4[VAR_5].winver)
    {
        VAR_7 = VAR_4[VAR_5].hook(VAR_8);
        if (VAR_7)
        {
            FUNC_9(VAR_4[VAR_5].name, VAR_4[VAR_5].reason, VAR_4[VAR_5].pre, VAR_4[VAR_5].post, VAR_4[VAR_5].second);
            VAR_4[VAR_5].unhook(VAR_8);
        }
        else
        {
            FUNC_5(0, "Unable to redirect functions!\n");
        }
    }
    FUNC_0(VAR_8);
    if (VAR_6)
    {
        VAR_8 = FUNC_1(VAR_4[VAR_5].dll);
        FUNC_5(VAR_8 == ((void*)0), "Unable to unload %s\n", FUNC_11(VAR_4[VAR_5].dll));
    }
}
