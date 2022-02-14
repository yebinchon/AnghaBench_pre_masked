
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int flags ;
struct TYPE_3__ {int dwFlags; } ;
typedef TYPE_1__ USEROBJECTFLAGS ;
typedef int * HWINSTA ;
typedef int BOOL ;


 int FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_1__*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    HWINSTA VAR_2;
    USEROBJECTFLAGS VAR_3;
    BOOL VAR_4;

    VAR_2 = FUNC_1();
    FUNC_3(VAR_2 != ((void*)0), "winstation = NULL\n");

    VAR_4 = FUNC_2(VAR_2, VAR_0, &VAR_3, sizeof(VAR_3), ((void*)0));
    FUNC_3(VAR_4, "GetUserObjectInformation(UOI_NAME) failed: %u\n", FUNC_0());
    FUNC_3(!(VAR_3.dwFlags & VAR_1), "winstation has flags %x\n", VAR_3.dwFlags);
}
