
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int fontParams ;
struct TYPE_12__ {scalar_t__ (* renderCreate ) (int ) ;scalar_t__ (* renderCreateTexture ) (int ,int ,void*,void*,int ,int *) ;int userPtr; } ;
struct TYPE_13__ {scalar_t__* fontImages; float* commands; int ccommands; scalar_t__ fontImageIdx; void* height; void* width; TYPE_1__ params; int * fs; int * userPtr; int * renderDelete; int * renderDraw; int * renderUpdate; int * renderCreate; int flags; int * cache; scalar_t__ ncommands; } ;
typedef TYPE_1__ NVGparams ;
typedef TYPE_2__ NVGcontext ;
typedef TYPE_2__ FONSparams ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,float) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,void*,void*,int ,int *) ;

NVGcontext* FUNC_10(NVGparams* VAR_5)
{
 FONSparams VAR_6;
 NVGcontext* VAR_7 = (NVGcontext*)FUNC_1(sizeof(NVGcontext));
 int VAR_8;
 if (VAR_7 == ((void*)0)) goto error;
 FUNC_2(VAR_7, 0, sizeof(NVGcontext));

 VAR_7->params = *VAR_5;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_7->fontImages[VAR_8] = 0;

 VAR_7->commands = (float*)FUNC_1(sizeof(float)*VAR_1);
 if (!VAR_7->commands) goto error;
 VAR_7->ncommands = 0;
 VAR_7->ccommands = VAR_1;

 VAR_7->cache = FUNC_6();
 if (VAR_7->cache == ((void*)0)) goto error;

 FUNC_5(VAR_7);
 FUNC_4(VAR_7);

 FUNC_7(VAR_7, 1.0f);

 if (VAR_7->params.renderCreate(VAR_7->params.userPtr) == 0) goto error;


 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.width = VAR_2;
 VAR_6.height = VAR_2;
 VAR_6.flags = VAR_0;
 VAR_6.renderCreate = ((void*)0);
 VAR_6.renderUpdate = ((void*)0);
 VAR_6.renderDraw = ((void*)0);
 VAR_6.renderDelete = ((void*)0);
 VAR_6.userPtr = ((void*)0);
 VAR_7->fs = FUNC_0(&VAR_6);
 if (VAR_7->fs == ((void*)0)) goto error;


 VAR_7->fontImages[0] = VAR_7->params.renderCreateTexture(VAR_7->params.userPtr, VAR_4, VAR_6.width, VAR_6.height, 0, ((void*)0));
 if (VAR_7->fontImages[0] == 0) goto error;
 VAR_7->fontImageIdx = 0;

 return VAR_7;

error:
 FUNC_3(VAR_7);
 return 0;
}
