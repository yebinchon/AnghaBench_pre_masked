
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    VAR_2 = FUNC_1("advpack.dll");
    if (!VAR_2)
        return VAR_0;

    VAR_5 = (void *)FUNC_0(VAR_2, "RunSetupCommand");
    VAR_3 = (void *)FUNC_0(VAR_2, "LaunchINFSection");
    VAR_4 = (void *)FUNC_0(VAR_2, "LaunchINFSectionEx");

    if (!VAR_5 || !VAR_3 || !VAR_4)
        return VAR_0;

    return VAR_1;
}
