
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {int* dirtyRect; TYPE_1__ params; } ;
typedef TYPE_2__ FONScontext ;



int FUNC_0(FONScontext* VAR_0, int* VAR_1)
{
 if (VAR_0->dirtyRect[0] < VAR_0->dirtyRect[2] && VAR_0->dirtyRect[1] < VAR_0->dirtyRect[3]) {
  VAR_1[0] = VAR_0->dirtyRect[0];
  VAR_1[1] = VAR_0->dirtyRect[1];
  VAR_1[2] = VAR_0->dirtyRect[2];
  VAR_1[3] = VAR_0->dirtyRect[3];

  VAR_0->dirtyRect[0] = VAR_0->params.width;
  VAR_0->dirtyRect[1] = VAR_0->params.height;
  VAR_0->dirtyRect[2] = 0;
  VAR_0->dirtyRect[3] = 0;
  return 1;
 }
 return 0;
}
