
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; scalar_t__ nnodes; TYPE_1__* nodes; } ;
struct TYPE_4__ {short width; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ FONSatlas ;



__attribute__((used)) static void FUNC_0(FONSatlas* VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->width = VAR_1;
 VAR_0->height = VAR_2;
 VAR_0->nnodes = 0;


 VAR_0->nodes[0].x = 0;
 VAR_0->nodes[0].y = 0;
 VAR_0->nodes[0].width = (short)VAR_1;
 VAR_0->nnodes++;
}
