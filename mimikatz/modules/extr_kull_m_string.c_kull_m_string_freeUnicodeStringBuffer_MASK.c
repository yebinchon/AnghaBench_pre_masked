
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Buffer; } ;
typedef scalar_t__ PWSTR ;
typedef TYPE_1__* PUNICODE_STRING ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1(PUNICODE_STRING VAR_0)
{
 if(VAR_0 && VAR_0->Buffer)
  VAR_0->Buffer = (PWSTR) FUNC_0(VAR_0->Buffer);
}
