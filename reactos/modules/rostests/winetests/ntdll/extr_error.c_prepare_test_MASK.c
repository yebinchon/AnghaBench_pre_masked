
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char***) ;

__attribute__((used)) static BOOL FUNC_5(void)
{
    HMODULE VAR_4;
    int VAR_5;
    char** VAR_6;

    VAR_4 = FUNC_1("ntdll.dll");
    VAR_2 = (void*)FUNC_0(VAR_4, "RtlNtStatusToDosError");
    if (!VAR_2)
    {
        FUNC_3("RtlNtStatusToDosError is not available\n");
        return VAR_0;
    }

    VAR_5 = FUNC_4(&VAR_6);
    VAR_3=(VAR_5 >= 3 && FUNC_2(VAR_6[2],"strict")==0);
    return VAR_1;
}
