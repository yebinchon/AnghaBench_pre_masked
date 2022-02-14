
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nnodes; int * nodes; } ;
typedef TYPE_1__ FONSatlas ;



__attribute__((used)) static void FUNC_0(FONSatlas* VAR_0, int VAR_1)
{
 int VAR_2;
 if (VAR_0->nnodes == 0) return;
 for (VAR_2 = VAR_1; VAR_2 < VAR_0->nnodes-1; VAR_2++)
  VAR_0->nodes[VAR_2] = VAR_0->nodes[VAR_2+1];
 VAR_0->nnodes--;
}
