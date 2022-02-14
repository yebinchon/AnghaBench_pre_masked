
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int PHANDLE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static NTSTATUS
FUNC_4 (PHANDLE VAR_2)
{
    OBJECT_ATTRIBUTES VAR_3;
    UNICODE_STRING VAR_4 =
        FUNC_2(L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current");

    FUNC_3("OpenCurrentConfigKey()\n");

    FUNC_0(&VAR_3,
                               &VAR_4,
                               VAR_1,
                               ((void*)0),
                               ((void*)0));
    return FUNC_1(VAR_2,
                     VAR_0,
                     &VAR_3);
}
