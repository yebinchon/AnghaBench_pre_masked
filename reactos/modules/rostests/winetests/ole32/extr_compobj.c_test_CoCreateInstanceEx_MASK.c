
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pIID; int * member_0; } ;
typedef TYPE_1__ MULTI_QI ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (scalar_t__,char*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void)
{
    MULTI_QI VAR_8 = { VAR_3 };
    DWORD VAR_9;
    HRESULT VAR_10;

    FUNC_1(((void*)0));

    VAR_10 = FUNC_2(&VAR_1, (IUnknown *)&VAR_6,
                               VAR_0, VAR_5, &VAR_9);
    FUNC_7(VAR_10, "CoRegisterClassObject");

    VAR_7 = VAR_4;
    VAR_10 = FUNC_0(&VAR_1, ((void*)0), VAR_0, ((void*)0), 1, &VAR_8);
    FUNC_6(VAR_10 == VAR_2, "CoCreateInstanceEx failed: %08x\n", VAR_10);
    FUNC_6(FUNC_5(&VAR_7, VAR_8.pIID), "Unexpected CreateInstance iid %s\n",
       FUNC_8(&VAR_7));

    VAR_10 = FUNC_3(VAR_9);
    FUNC_7(VAR_10, "CoRevokeClassObject");

    FUNC_4();
}
