
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_3__ {scalar_t__ Buffer; } ;
typedef scalar_t__ PWSTR ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PLSA_UNICODE_STRING ;
typedef scalar_t__ BOOL ;



void FUNC_0(PVOID VAR_0, PLSA_UNICODE_STRING VAR_1, BOOL VAR_2)
{
 if(VAR_1->Buffer)
  VAR_1->Buffer = (PWSTR) ((ULONG_PTR)(VAR_1->Buffer) + ((VAR_2 ? -1 : 1) * (ULONG_PTR)(VAR_0)));
}
