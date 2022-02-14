
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sa ;
typedef int WCHAR ;
struct TYPE_3__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef int HDESK ;
typedef int DWORD ;
typedef int BOOL ;
typedef int ACCESS_MASK ;


 int FUNC_0 (int *,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

HDESK FUNC_3(WCHAR* VAR_0, ACCESS_MASK VAR_1, BOOL VAR_2, DWORD *VAR_3)
{
    HDESK VAR_4;
    SECURITY_ATTRIBUTES VAR_5;
    VAR_5.nLength = sizeof(VAR_5);
    VAR_5.lpSecurityDescriptor = ((void*)0);
    VAR_5.bInheritHandle = VAR_2;
    FUNC_2(0xfeedf00d);
    VAR_4 = FUNC_0(VAR_0, ((void*)0), ((void*)0), 0, VAR_1, &VAR_5);
    *VAR_3 = FUNC_1();
    return VAR_4;
}
