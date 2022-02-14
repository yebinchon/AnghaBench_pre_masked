
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nnodes; int cnodes; TYPE_1__* nodes; } ;
struct TYPE_5__ {short x; short y; short width; } ;
typedef TYPE_1__ FONSatlasNode ;
typedef TYPE_2__ FONSatlas ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(FONSatlas* VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_0->nnodes+1 > VAR_0->cnodes) {
  VAR_0->cnodes = VAR_0->cnodes == 0 ? 8 : VAR_0->cnodes * 2;
  VAR_0->nodes = (FONSatlasNode*)FUNC_0(VAR_0->nodes, sizeof(FONSatlasNode) * VAR_0->cnodes);
  if (VAR_0->nodes == ((void*)0))
   return 0;
 }
 for (VAR_5 = VAR_0->nnodes; VAR_5 > VAR_1; VAR_5--)
  VAR_0->nodes[VAR_5] = VAR_0->nodes[VAR_5-1];
 VAR_0->nodes[VAR_1].x = (short)VAR_2;
 VAR_0->nodes[VAR_1].y = (short)VAR_3;
 VAR_0->nodes[VAR_1].width = (short)VAR_4;
 VAR_0->nnodes++;

 return 1;
}
