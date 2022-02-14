
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nPrevFrame; int * palette_map; int bCompress; int * pCurFrame; int * pPrevFrame; } ;
typedef int LRESULT ;
typedef TYPE_1__ CodecInfo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_5(CodecInfo *VAR_2)
{
  FUNC_4("(%p)\n",VAR_2);

  if (VAR_2 != ((void*)0)) {
    if (VAR_2->pPrevFrame != ((void*)0))
    {
      FUNC_2(FUNC_1(VAR_2->pPrevFrame));
      FUNC_0(FUNC_1(VAR_2->pPrevFrame));
    }
    if (VAR_2->pCurFrame != ((void*)0))
    {
      FUNC_2(FUNC_1(VAR_2->pCurFrame));
      FUNC_0(FUNC_1(VAR_2->pCurFrame));
    }
    VAR_2->pPrevFrame = ((void*)0);
    VAR_2->pCurFrame = ((void*)0);
    VAR_2->nPrevFrame = -1;
    VAR_2->bCompress = VAR_0;

    if (VAR_2->palette_map != ((void*)0)) {
        FUNC_3(VAR_2->palette_map);
        VAR_2->palette_map = ((void*)0);
    }
  }

  return VAR_1;
}
