
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; int nnodes; TYPE_1__* nodes; } ;
struct TYPE_6__ {int width; int x; } ;
typedef TYPE_2__ FONSatlas ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_2(FONSatlas* VAR_0, int VAR_1, int VAR_2, int* VAR_3, int* VAR_4)
{
 int VAR_5 = VAR_0->height, VAR_6 = VAR_0->width, VAR_7 = -1;
 int VAR_8 = -1, VAR_9 = -1, VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_0->nnodes; VAR_10++) {
  int VAR_11 = FUNC_1(VAR_0, VAR_10, VAR_1, VAR_2);
  if (VAR_11 != -1) {
   if (VAR_11 + VAR_2 < VAR_5 || (VAR_11 + VAR_2 == VAR_5 && VAR_0->nodes[VAR_10].width < VAR_6)) {
    VAR_7 = VAR_10;
    VAR_6 = VAR_0->nodes[VAR_10].width;
    VAR_5 = VAR_11 + VAR_2;
    VAR_8 = VAR_0->nodes[VAR_10].x;
    VAR_9 = VAR_11;
   }
  }
 }

 if (VAR_7 == -1)
  return 0;


 if (FUNC_0(VAR_0, VAR_7, VAR_8, VAR_9, VAR_1, VAR_2) == 0)
  return 0;

 *VAR_3 = VAR_8;
 *VAR_4 = VAR_9;

 return 1;
}
