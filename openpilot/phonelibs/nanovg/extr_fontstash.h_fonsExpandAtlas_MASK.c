
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nnodes; TYPE_1__* nodes; } ;
struct TYPE_8__ {int width; int height; scalar_t__ (* renderResize ) (int ,int,int) ;int userPtr; } ;
struct TYPE_9__ {unsigned char* texData; int* dirtyRect; float itw; float ith; TYPE_2__ params; TYPE_5__* atlas; } ;
struct TYPE_7__ {int y; } ;
typedef TYPE_3__ FONScontext ;


 int FUNC_0 (TYPE_5__*,int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int,int) ;

int FUNC_8(FONScontext* VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 unsigned char* VAR_5 = ((void*)0);
 if (VAR_0 == ((void*)0)) return 0;

 VAR_1 = FUNC_2(VAR_1, VAR_0->params.width);
 VAR_2 = FUNC_2(VAR_2, VAR_0->params.height);

 if (VAR_1 == VAR_0->params.width && VAR_2 == VAR_0->params.height)
  return 1;


 FUNC_1(VAR_0);


 if (VAR_0->params.renderResize != ((void*)0)) {
  if (VAR_0->params.renderResize(VAR_0->params.userPtr, VAR_1, VAR_2) == 0)
   return 0;
 }

 VAR_5 = (unsigned char*)FUNC_4(VAR_1 * VAR_2);
 if (VAR_5 == ((void*)0))
  return 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->params.height; VAR_3++) {
  unsigned char* VAR_6 = &VAR_5[VAR_3*VAR_1];
  unsigned char* VAR_7 = &VAR_0->texData[VAR_3*VAR_0->params.width];
  FUNC_5(VAR_6, VAR_7, VAR_0->params.width);
  if (VAR_1 > VAR_0->params.width)
   FUNC_6(VAR_6+VAR_0->params.width, 0, VAR_1 - VAR_0->params.width);
 }
 if (VAR_2 > VAR_0->params.height)
  FUNC_6(&VAR_5[VAR_0->params.height * VAR_1], 0, (VAR_2 - VAR_0->params.height) * VAR_1);

 FUNC_3(VAR_0->texData);
 VAR_0->texData = VAR_5;


 FUNC_0(VAR_0->atlas, VAR_1, VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_0->atlas->nnodes; VAR_3++)
  VAR_4 = FUNC_2(VAR_4, VAR_0->atlas->nodes[VAR_3].y);
 VAR_0->dirtyRect[0] = 0;
 VAR_0->dirtyRect[1] = 0;
 VAR_0->dirtyRect[2] = VAR_0->params.width;
 VAR_0->dirtyRect[3] = VAR_4;

 VAR_0->params.width = VAR_1;
 VAR_0->params.height = VAR_2;
 VAR_0->itw = 1.0f/VAR_0->params.width;
 VAR_0->ith = 1.0f/VAR_0->params.height;

 return 1;
}
