
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ cmsStage ;
typedef int cmsContext ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, cmsStage** VAR_1)
{
    cmsStage* VAR_2 = *VAR_1;
    cmsStage* VAR_3 = VAR_2 ->Next;
    *VAR_1 = VAR_3;
    FUNC_0(VAR_0, VAR_2);
}
