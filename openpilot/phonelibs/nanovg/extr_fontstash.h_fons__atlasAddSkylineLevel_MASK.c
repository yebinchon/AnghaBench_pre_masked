
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nnodes; TYPE_1__* nodes; } ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; } ;
typedef TYPE_2__ FONSatlas ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(FONSatlas* VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;


 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3+VAR_5, VAR_4) == 0)
  return 0;


 for (VAR_6 = VAR_1+1; VAR_6 < VAR_0->nnodes; VAR_6++) {
  if (VAR_0->nodes[VAR_6].x < VAR_0->nodes[VAR_6-1].x + VAR_0->nodes[VAR_6-1].width) {
   int VAR_7 = VAR_0->nodes[VAR_6-1].x + VAR_0->nodes[VAR_6-1].width - VAR_0->nodes[VAR_6].x;
   VAR_0->nodes[VAR_6].x += (short)VAR_7;
   VAR_0->nodes[VAR_6].width -= (short)VAR_7;
   if (VAR_0->nodes[VAR_6].width <= 0) {
    FUNC_1(VAR_0, VAR_6);
    VAR_6--;
   } else {
    break;
   }
  } else {
   break;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_0->nnodes-1; VAR_6++) {
  if (VAR_0->nodes[VAR_6].y == VAR_0->nodes[VAR_6+1].y) {
   VAR_0->nodes[VAR_6].width += VAR_0->nodes[VAR_6+1].width;
   FUNC_1(VAR_0, VAR_6+1);
   VAR_6--;
  }
 }

 return 1;
}
