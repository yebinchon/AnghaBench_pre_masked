
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {float x; float y; float width; } ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_10__ {scalar_t__ nverts; TYPE_2__* atlas; TYPE_1__ params; } ;
struct TYPE_9__ {int nnodes; TYPE_4__* nodes; } ;
typedef TYPE_3__ FONScontext ;
typedef TYPE_4__ FONSatlasNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,float,float,float,float,int) ;

void FUNC_2(FONScontext* VAR_1, float VAR_2, float VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_1->params.width;
 int VAR_6 = VAR_1->params.height;
 float VAR_7 = VAR_5 == 0 ? 0 : (1.0f / VAR_5);
 float VAR_8 = VAR_6 == 0 ? 0 : (1.0f / VAR_6);

 if (VAR_1->nverts+6+6 > VAR_0)
  FUNC_0(VAR_1);


 FUNC_1(VAR_1, VAR_2+0, VAR_3+0, VAR_7, VAR_8, 0x0fffffff);
 FUNC_1(VAR_1, VAR_2+VAR_5, VAR_3+VAR_6, VAR_7, VAR_8, 0x0fffffff);
 FUNC_1(VAR_1, VAR_2+VAR_5, VAR_3+0, VAR_7, VAR_8, 0x0fffffff);

 FUNC_1(VAR_1, VAR_2+0, VAR_3+0, VAR_7, VAR_8, 0x0fffffff);
 FUNC_1(VAR_1, VAR_2+0, VAR_3+VAR_6, VAR_7, VAR_8, 0x0fffffff);
 FUNC_1(VAR_1, VAR_2+VAR_5, VAR_3+VAR_6, VAR_7, VAR_8, 0x0fffffff);


 FUNC_1(VAR_1, VAR_2+0, VAR_3+0, 0, 0, 0xffffffff);
 FUNC_1(VAR_1, VAR_2+VAR_5, VAR_3+VAR_6, 1, 1, 0xffffffff);
 FUNC_1(VAR_1, VAR_2+VAR_5, VAR_3+0, 1, 0, 0xffffffff);

 FUNC_1(VAR_1, VAR_2+0, VAR_3+0, 0, 0, 0xffffffff);
 FUNC_1(VAR_1, VAR_2+0, VAR_3+VAR_6, 0, 1, 0xffffffff);
 FUNC_1(VAR_1, VAR_2+VAR_5, VAR_3+VAR_6, 1, 1, 0xffffffff);


 for (VAR_4 = 0; VAR_4 < VAR_1->atlas->nnodes; VAR_4++) {
  FONSatlasNode* VAR_9 = &VAR_1->atlas->nodes[VAR_4];

  if (VAR_1->nverts+6 > VAR_0)
   FUNC_0(VAR_1);

  FUNC_1(VAR_1, VAR_2+VAR_9->x+0, VAR_3+VAR_9->y+0, VAR_7, VAR_8, 0xc00000ff);
  FUNC_1(VAR_1, VAR_2+VAR_9->x+VAR_9->width, VAR_3+VAR_9->y+1, VAR_7, VAR_8, 0xc00000ff);
  FUNC_1(VAR_1, VAR_2+VAR_9->x+VAR_9->width, VAR_3+VAR_9->y+0, VAR_7, VAR_8, 0xc00000ff);

  FUNC_1(VAR_1, VAR_2+VAR_9->x+0, VAR_3+VAR_9->y+0, VAR_7, VAR_8, 0xc00000ff);
  FUNC_1(VAR_1, VAR_2+VAR_9->x+0, VAR_3+VAR_9->y+1, VAR_7, VAR_8, 0xc00000ff);
  FUNC_1(VAR_1, VAR_2+VAR_9->x+VAR_9->width, VAR_3+VAR_9->y+1, VAR_7, VAR_8, 0xc00000ff);
 }

 FUNC_0(VAR_1);
}
