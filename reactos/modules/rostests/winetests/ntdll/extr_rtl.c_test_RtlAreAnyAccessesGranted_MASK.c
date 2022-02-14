
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ result; int DesiredAccess; int GrantedAccess; } ;
typedef scalar_t__ BOOLEAN ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,char*,unsigned int,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    unsigned int VAR_2;
    BOOLEAN VAR_3;

    if (!&FUNC_1)
    {
        FUNC_2("RtlAreAnyAccessesGranted is not available\n");
        return;
    }

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 VAR_3 = FUNC_1(VAR_1[VAR_2].GrantedAccess,
        VAR_1[VAR_2].DesiredAccess);
 FUNC_0(VAR_1[VAR_2].result == VAR_3,
           "(test %d): RtlAreAnyAccessesGranted(%08x, %08x) returns %d, expected %d\n",
    VAR_2, VAR_1[VAR_2].GrantedAccess,
    VAR_1[VAR_2].DesiredAccess,
    VAR_3, VAR_1[VAR_2].result);
    }
}
