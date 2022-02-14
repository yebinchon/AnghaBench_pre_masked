
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,scalar_t__) ;

int FUNC_2(UNICODE_STRING* VAR_5)
{
    NTSTATUS VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_0);
    if (VAR_6 == VAR_2)
    {

        return 0;
    }
    FUNC_1(VAR_6 == VAR_4 || VAR_6 == VAR_3,
        "Wrong value for Status, expected: SUCCESS or NOT_FOUND, got: 0x%lx\n",
        VAR_6);
    return 1;
}
