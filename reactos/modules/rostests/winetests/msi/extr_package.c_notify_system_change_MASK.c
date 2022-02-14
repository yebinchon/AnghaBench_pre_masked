
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int szDescription; int llSequenceNumber; int dwRestorePtType; int dwEventType; } ;
struct TYPE_6__ {int llSequenceNumber; } ;
typedef TYPE_1__ STATEMGRSTATUS ;
typedef TYPE_2__ RESTOREPOINTINFOA ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_2(DWORD VAR_1, STATEMGRSTATUS *VAR_2)
{
    RESTOREPOINTINFOA VAR_3;

    VAR_3.dwEventType = VAR_1;
    VAR_3.dwRestorePtType = VAR_0;
    VAR_3.llSequenceNumber = VAR_2->llSequenceNumber;
    FUNC_0(VAR_3.szDescription, "msitest restore point");

    return FUNC_1(&VAR_3, VAR_2);
}
