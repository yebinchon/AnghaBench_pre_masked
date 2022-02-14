
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
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_0(AsnAny *VAR_5, void *VAR_6)
{
    VAR_5->asnType = VAR_0;



    switch (*(DWORD *)VAR_6)
    {
    case 128:
        VAR_5->asnValue.number = VAR_3;
        break;
    case 129:
    case 130:
        VAR_5->asnValue.number = VAR_2;
        break;
    default:
        VAR_5->asnValue.number = VAR_1;
    };
    return VAR_4;
}
