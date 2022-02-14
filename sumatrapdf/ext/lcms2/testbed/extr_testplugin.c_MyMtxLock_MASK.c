
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_2__ {int nlocks; } ;
typedef TYPE_1__ MyMtx ;


 int VAR_0 ;

__attribute__((used)) static
cmsBool FUNC_0(cmsContext VAR_1, void* VAR_2)
{
    MyMtx* VAR_3 = (MyMtx*) VAR_2;
    VAR_3->nlocks++;

    return VAR_0;
}
