
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vaddr_t ;
struct TYPE_3__ {scalar_t__* leaves; } ;
typedef TYPE_1__ MmuVsidTree ;


 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(vaddr_t VAR_0, MmuVsidTree *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
    {
        if (VAR_1->leaves[VAR_2])
        {
            FUNC_0(VAR_0 | (VAR_2 << 12), VAR_1->leaves[VAR_2]);
        }
    }
}
