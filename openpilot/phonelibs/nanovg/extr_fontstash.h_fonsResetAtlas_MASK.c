
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* renderResize ) (int ,int,int) ;int width; int height; int userPtr; } ;
struct TYPE_9__ {unsigned char* texData; int* dirtyRect; int nfonts; float itw; float ith; TYPE_1__ params; TYPE_2__** fonts; int atlas; } ;
struct TYPE_8__ {int* lut; scalar_t__ nglyphs; } ;
typedef TYPE_2__ FONSfont ;
typedef TYPE_3__ FONScontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;

int FUNC_6(FONScontext* VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 if (VAR_1 == ((void*)0)) return 0;


 FUNC_2(VAR_1);


 if (VAR_1->params.renderResize != ((void*)0)) {
  if (VAR_1->params.renderResize(VAR_1->params.userPtr, VAR_2, VAR_3) == 0)
   return 0;
 }


 FUNC_1(VAR_1->atlas, VAR_2, VAR_3);


 VAR_1->texData = (unsigned char*)FUNC_4(VAR_1->texData, VAR_2 * VAR_3);
 if (VAR_1->texData == ((void*)0)) return 0;
 FUNC_3(VAR_1->texData, 0, VAR_2 * VAR_3);


 VAR_1->dirtyRect[0] = VAR_2;
 VAR_1->dirtyRect[1] = VAR_3;
 VAR_1->dirtyRect[2] = 0;
 VAR_1->dirtyRect[3] = 0;


 for (VAR_4 = 0; VAR_4 < VAR_1->nfonts; VAR_4++) {
  FONSfont* VAR_6 = VAR_1->fonts[VAR_4];
  VAR_6->nglyphs = 0;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_6->lut[VAR_5] = -1;
 }

 VAR_1->params.width = VAR_2;
 VAR_1->params.height = VAR_3;
 VAR_1->itw = 1.0f/VAR_1->params.width;
 VAR_1->ith = 1.0f/VAR_1->params.height;


 FUNC_0(VAR_1, 2,2);

 return 1;
}
