
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HMODULE ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
    HMODULE VAR_5 = FUNC_0("usp10.dll");

    FUNC_2(VAR_5 != 0, "Expected usp10.dll to be loaded.\n");

    VAR_3 = (void *)FUNC_1(VAR_5, "ScriptItemizeOpenType");
    VAR_4 = (void *)FUNC_1(VAR_5, "ScriptShapeOpenType");
    VAR_2 = (void *)FUNC_1(VAR_5, "ScriptGetFontScriptTags");
    VAR_1 = (void *)FUNC_1(VAR_5, "ScriptGetFontLanguageTags");
    VAR_0 = (void *)FUNC_1(VAR_5, "ScriptGetFontFeatureTags");
}
