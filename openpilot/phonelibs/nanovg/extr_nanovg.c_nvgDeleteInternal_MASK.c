
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int userPtr; int (* renderDelete ) (int ) ;} ;
struct TYPE_7__ {scalar_t__* fontImages; TYPE_1__ params; scalar_t__ fs; int * cache; struct TYPE_7__* commands; } ;
typedef TYPE_2__ NVGcontext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(NVGcontext* VAR_1)
{
 int VAR_2;
 if (VAR_1 == ((void*)0)) return;
 if (VAR_1->commands != ((void*)0)) FUNC_1(VAR_1->commands);
 if (VAR_1->cache != ((void*)0)) FUNC_3(VAR_1->cache);

 if (VAR_1->fs)
  FUNC_0(VAR_1->fs);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->fontImages[VAR_2] != 0) {
   FUNC_2(VAR_1, VAR_1->fontImages[VAR_2]);
   VAR_1->fontImages[VAR_2] = 0;
  }
 }

 if (VAR_1->params.renderDelete != ((void*)0))
  VAR_1->params.renderDelete(VAR_1->params.userPtr);

 FUNC_1(VAR_1);
}
