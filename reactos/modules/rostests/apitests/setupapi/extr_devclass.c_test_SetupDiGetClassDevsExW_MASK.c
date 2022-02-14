
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int info ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
struct TYPE_8__ {int cbSize; } ;
typedef TYPE_2__ SP_DEVINFO_DATA ;
typedef scalar_t__ HDEVINFO ;
typedef TYPE_3__ GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__ const*,int *,int *,int,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    const GUID VAR_4 = { 0xdeadbeef, 0xdead, 0xbeef, { 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff } };
    HDEVINFO VAR_5;
    BOOL VAR_6;
    SP_DEVINFO_DATA VAR_7;

    VAR_5 = FUNC_2(&VAR_4, ((void*)0), ((void*)0), VAR_1 | VAR_0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_5 != VAR_3, "Expected success\n");

    FUNC_3(&VAR_7, sizeof(VAR_7));
    VAR_7.cbSize = sizeof(VAR_7);
    VAR_6 = FUNC_1(VAR_5, 0, &VAR_7);
    FUNC_4 (!VAR_6, "Expected failure.\n");
    FUNC_5(VAR_2);

    FUNC_0(VAR_5);
}
