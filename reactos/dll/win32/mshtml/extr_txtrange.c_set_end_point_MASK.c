
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int off; int node; } ;
typedef TYPE_1__ rangepoint_t ;
typedef int nsresult ;
struct TYPE_6__ {int nsrange; } ;
typedef TYPE_2__ HTMLTxtRange ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(HTMLTxtRange *VAR_0, const rangepoint_t *VAR_1)
{
    nsresult VAR_2 = FUNC_2(VAR_0->nsrange, VAR_1->node, VAR_1->off);
    if(FUNC_1(VAR_2))
        FUNC_0("failed: %08x\n", VAR_2);
}
