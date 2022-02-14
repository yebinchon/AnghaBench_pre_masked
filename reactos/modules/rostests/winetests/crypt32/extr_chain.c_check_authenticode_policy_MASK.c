
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int policyPara ;
struct TYPE_8__ {int cbSize; int dwFlags; int member_0; } ;
struct TYPE_7__ {int wDay; int wMonth; int wYear; int member_0; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ CERT_CHAIN_POLICY_PARA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ,TYPE_1__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_2(void)
{
    CERT_CHAIN_POLICY_PARA VAR_7 = { 0 };
    SYSTEMTIME VAR_8 = { 0 };





    FUNC_1(VAR_1, ((void*)0),
     VAR_3, &VAR_6, ((void*)0));
    VAR_7.cbSize = sizeof(VAR_7);
    VAR_7.dwFlags = VAR_0;
    FUNC_0(VAR_1, ((void*)0),
     VAR_5, &VAR_6, &VAR_7);
    VAR_8.wDay = VAR_8.wMonth = 1;
    VAR_8.wYear = 1601;
    FUNC_0(VAR_1, ((void*)0),
     VAR_5, &VAR_8, &VAR_7);
    VAR_7.dwFlags = VAR_2;
    FUNC_0(VAR_1, ((void*)0),
     VAR_4, &VAR_6, &VAR_7);
}
