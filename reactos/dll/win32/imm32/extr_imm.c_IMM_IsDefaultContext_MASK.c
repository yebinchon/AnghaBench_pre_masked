
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int threadDefault; } ;
typedef TYPE_1__ InputContextData ;
typedef int HIMC ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static BOOL FUNC_1(HIMC VAR_1)
{
    InputContextData *VAR_2 = FUNC_0(VAR_1);

    if (!VAR_2)
        return VAR_0;

    return VAR_2->threadDefault;
}
