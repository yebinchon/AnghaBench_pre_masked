
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wow64_ptr ;
typedef scalar_t__ ULONG_PTR ;
typedef int NTSTATUS ;
typedef int ACCESS_MASK ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

ACCESS_MASK FUNC_3(void)
{
    if (VAR_2 == 0xffffffff)
    {
        ULONG_PTR VAR_3 = 0;
        NTSTATUS VAR_4 = FUNC_2(FUNC_1(), VAR_1, &VAR_3, sizeof(VAR_3), ((void*)0));
        VAR_2 = (FUNC_0(VAR_4) && VAR_3 != 0) ? VAR_0 : 0;
    }
    return VAR_2;
}
