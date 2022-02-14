
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    VAR_2 = FUNC_2("mscoree.dll");

    if (!VAR_2)
    {
        FUNC_3("mscoree.dll not available\n");
        return VAR_0;
    }

    VAR_5 = (void *)FUNC_1(VAR_2, "GetCORVersion");
    VAR_4 = (void *)FUNC_1(VAR_2, "GetCORSystemDirectory");
    VAR_6 = (void *)FUNC_1(VAR_2, "GetRequestedRuntimeInfo");
    VAR_7 = (void *)FUNC_1(VAR_2, "LoadLibraryShim");
    VAR_3 = (void *)FUNC_1(VAR_2, "CreateConfigStream");

    if (!VAR_5 || !VAR_4 || !VAR_6 || !VAR_7)
    {
        FUNC_3("functions not available\n");
        FUNC_0(VAR_2);
        return VAR_0;
    }

    return VAR_1;
}
