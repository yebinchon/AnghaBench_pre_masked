
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_2(HANDLE VAR_3)
{
    NTSTATUS VAR_4;
    ULONG VAR_5;


    if (!VAR_3)
        return VAR_0;







    VAR_4 = FUNC_1(VAR_3,
                                       VAR_1,
                                       &VAR_5,
                                       sizeof(ULONG),
                                       ((void*)0));

    if (FUNC_0(VAR_4) && VAR_5)
        return VAR_2;

    return VAR_0;
}
