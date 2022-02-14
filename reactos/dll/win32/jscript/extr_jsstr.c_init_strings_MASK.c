
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (char const*) ;
 void* FUNC_1 (int ,char**) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

BOOL FUNC_2(void)
{
    static const WCHAR VAR_6[] = { 'N','a','N',0 };
    static const WCHAR VAR_7[] = {'u','n','d','e','f','i','n','e','d',0};
    WCHAR *VAR_8;

    if(!(VAR_2 = FUNC_1(0, &VAR_8)))
        return VAR_0;
    if(!(VAR_3 = FUNC_0(VAR_6)))
        return VAR_0;
    if(!(VAR_5 = FUNC_0(VAR_7)))
        return VAR_0;
    if(!(VAR_4 = FUNC_1(0, &VAR_8)))
        return VAR_0;
     return VAR_1;
}
