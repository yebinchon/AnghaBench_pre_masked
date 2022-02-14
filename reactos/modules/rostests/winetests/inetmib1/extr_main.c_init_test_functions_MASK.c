
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static HMODULE FUNC_3(void)
{
    HMODULE VAR_2 = FUNC_1("inetmib1");

    FUNC_2(VAR_2 != ((void*)0), "failed to load inetmib1.dll\n");

    if (!VAR_2) return ((void*)0);

    VAR_0 = (void *)FUNC_0(VAR_2, "SnmpExtensionInit");
    VAR_1 = (void *)FUNC_0(VAR_2, "SnmpExtensionQuery");

    return VAR_2;
}
