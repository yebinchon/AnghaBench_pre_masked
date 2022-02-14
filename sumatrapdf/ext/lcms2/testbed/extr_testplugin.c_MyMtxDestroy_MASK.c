
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsContext ;
struct TYPE_2__ {scalar_t__ nlocks; } ;
typedef TYPE_1__ MyMtx ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_0, void* VAR_1)
{
    MyMtx* VAR_2 = (MyMtx*) VAR_1;

    if (VAR_2->nlocks != 0)
        FUNC_0("Locks != 0 when setting free a mutex");

    FUNC_1(VAR_0, VAR_1);

}
