
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vsid; scalar_t__* tree; } ;
typedef TYPE_1__ MmuVsidInfo ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(MmuVsidInfo *VAR_0)
{
    int VAR_1;

    FUNC_1("vsid %d (%x):\n", VAR_0->vsid>>4, VAR_0->vsid<<28);
    for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
    {
        if (VAR_0->tree[VAR_1])
        {
            FUNC_0((VAR_0->vsid<<28) | VAR_1 << 20, VAR_0->tree[VAR_1]);
        }
    }
}
