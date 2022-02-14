
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int number; } ;
struct TYPE_5__ {TYPE_1__ asnValue; int asnType; } ;
typedef int DWORD ;
typedef TYPE_2__ AsnAny ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static DWORD FUNC_0(AsnAny *VAR_2, void *VAR_3)
{
    VAR_2->asnType = VAR_0;
    VAR_2->asnValue.number = *(DWORD *)VAR_3;
    return VAR_1;
}
