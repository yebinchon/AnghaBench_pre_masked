
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ width; scalar_t__ height; int userPtr; int (* renderDraw ) (int ,int ,int ,int ,scalar_t__) ;int (* renderUpdate ) (int ,scalar_t__*,int ) ;} ;
struct TYPE_5__ {scalar_t__* dirtyRect; scalar_t__ nverts; int colors; int tcoords; int verts; TYPE_1__ params; int texData; } ;
typedef TYPE_2__ FONScontext ;


 int FUNC_0 (int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(FONScontext* VAR_0)
{

 if (VAR_0->dirtyRect[0] < VAR_0->dirtyRect[2] && VAR_0->dirtyRect[1] < VAR_0->dirtyRect[3]) {
  if (VAR_0->params.renderUpdate != ((void*)0))
   VAR_0->params.renderUpdate(VAR_0->params.userPtr, VAR_0->dirtyRect, VAR_0->texData);

  VAR_0->dirtyRect[0] = VAR_0->params.width;
  VAR_0->dirtyRect[1] = VAR_0->params.height;
  VAR_0->dirtyRect[2] = 0;
  VAR_0->dirtyRect[3] = 0;
 }


 if (VAR_0->nverts > 0) {
  if (VAR_0->params.renderDraw != ((void*)0))
   VAR_0->params.renderDraw(VAR_0->params.userPtr, VAR_0->verts, VAR_0->tcoords, VAR_0->colors, VAR_0->nverts);
  VAR_0->nverts = 0;
 }
}
