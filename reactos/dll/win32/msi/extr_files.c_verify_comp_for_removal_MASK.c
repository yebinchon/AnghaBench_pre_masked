
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Action; int Attributes; } ;
typedef TYPE_1__ MSICOMPONENT ;
typedef int BOOL ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static BOOL FUNC_0(MSICOMPONENT *VAR_6, UINT VAR_7)
{

    if (VAR_6->Action != 128 &&
        VAR_6->Attributes & VAR_2 &&
        (VAR_7 == VAR_5 ||
         VAR_7 == VAR_3)) return VAR_1;

    switch (VAR_6->Action)
    {
    case 129:
    case 128:
        if (VAR_7 == VAR_4 ||
            VAR_7 == VAR_3) return VAR_1;
        break;
    case 130:
        if (VAR_7 == VAR_5 ||
            VAR_7 == VAR_3) return VAR_1;
        break;
    default: break;
    }
    return VAR_0;
}
