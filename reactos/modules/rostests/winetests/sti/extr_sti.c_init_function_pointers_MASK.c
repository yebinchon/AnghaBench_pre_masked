
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    VAR_5 = FUNC_1("sti.dll");
    if (VAR_5)
    {
        VAR_2 = (void*)
            FUNC_0(VAR_5, "StiCreateInstance");
        VAR_3 = (void*)
            FUNC_0(VAR_5, "StiCreateInstanceA");
        VAR_4 = (void*)
            FUNC_0(VAR_5, "StiCreateInstanceW");
        return VAR_1;
    }
    return VAR_0;
}
