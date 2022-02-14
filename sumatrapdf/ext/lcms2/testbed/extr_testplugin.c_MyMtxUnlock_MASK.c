
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsContext ;
struct TYPE_2__ {int nlocks; } ;
typedef TYPE_1__ MyMtx ;



__attribute__((used)) static
void FUNC_0(cmsContext VAR_0, void* VAR_1)
{
    MyMtx* VAR_2 = (MyMtx*) VAR_1;
    VAR_2->nlocks--;

}
