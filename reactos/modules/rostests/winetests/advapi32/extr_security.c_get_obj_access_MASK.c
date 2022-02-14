
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
struct TYPE_3__ {int GrantedAccess; } ;
typedef TYPE_1__ OBJECT_BASIC_INFORMATION ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int ACCESS_MASK ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int,int *) ;

__attribute__((used)) static ACCESS_MASK FUNC_2(HANDLE VAR_1)
{
    OBJECT_BASIC_INFORMATION VAR_2;
    NTSTATUS VAR_3;

    if (!&FUNC_1) return 0;

    VAR_3 = FUNC_1(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2), ((void*)0));
    FUNC_0(!VAR_3, "NtQueryObject error %#x\n", VAR_3);

    return VAR_2.GrantedAccess;
}
