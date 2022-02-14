
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int ULONG ;
typedef int NTSTATUS ;
typedef int LPWSTR ;
typedef int LPVOID ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ) ;

NTSTATUS
FUNC_2(HANDLE VAR_0,
                LPWSTR VAR_1,
                ULONG VAR_2,
                LPVOID VAR_3,
                ULONG VAR_4)
{
    UNICODE_STRING VAR_5;

    FUNC_0(&VAR_5,
                         VAR_1);

    return FUNC_1(VAR_0,
                         &VAR_5,
                         0,
                         VAR_2,
                         VAR_3,
                         VAR_4);
}
