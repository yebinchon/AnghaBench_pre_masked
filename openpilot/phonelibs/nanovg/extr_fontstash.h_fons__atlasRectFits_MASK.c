
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int nnodes; int height; TYPE_1__* nodes; } ;
struct TYPE_4__ {int x; int y; scalar_t__ width; } ;
typedef TYPE_2__ FONSatlas ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(FONSatlas* VAR_0, int VAR_1, int VAR_2, int VAR_3)
{



 int VAR_4 = VAR_0->nodes[VAR_1].x;
 int VAR_5 = VAR_0->nodes[VAR_1].y;
 int VAR_6;
 if (VAR_4 + VAR_2 > VAR_0->width)
  return -1;
 VAR_6 = VAR_2;
 while (VAR_6 > 0) {
  if (VAR_1 == VAR_0->nnodes) return -1;
  VAR_5 = FUNC_0(VAR_5, VAR_0->nodes[VAR_1].y);
  if (VAR_5 + VAR_3 > VAR_0->height) return -1;
  VAR_6 -= VAR_0->nodes[VAR_1].width;
  ++VAR_1;
 }
 return VAR_5;
}
