
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ site; } ;
typedef TYPE_1__ VBScript ;
typedef scalar_t__ SCRIPTSTATE ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(VBScript *VAR_0, SCRIPTSTATE VAR_1)
{
    if(VAR_0->state == VAR_1)
        return;

    VAR_0->state = VAR_1;
    if(VAR_0->site)
        FUNC_0(VAR_0->site, VAR_1);
}
