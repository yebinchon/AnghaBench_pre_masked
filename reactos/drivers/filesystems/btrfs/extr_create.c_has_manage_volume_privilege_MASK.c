
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int SubjectSecurityContext; } ;
struct TYPE_7__ {int PrivilegeCount; TYPE_1__* Privilege; int Control; } ;
struct TYPE_6__ {scalar_t__ Attributes; int Luid; } ;
typedef TYPE_2__ PRIVILEGE_SET ;
typedef int KPROCESSOR_MODE ;
typedef TYPE_3__ ACCESS_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static bool FUNC_2(ACCESS_STATE* VAR_2, KPROCESSOR_MODE VAR_3) {
    PRIVILEGE_SET VAR_4;

    VAR_4.PrivilegeCount = 1;
    VAR_4.Control = VAR_0;
    VAR_4.Privilege[0].Luid = FUNC_0(VAR_1);
    VAR_4.Privilege[0].Attributes = 0;

    return FUNC_1(&VAR_4, &VAR_2->SubjectSecurityContext, VAR_3) ? 1 : 0;
}
