
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pCurFrame; int * pPrevFrame; } ;
typedef int LRESULT ;
typedef TYPE_1__ CodecInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static LRESULT FUNC_4(CodecInfo *VAR_0)
{
  FUNC_2("(%p)\n", VAR_0);


  FUNC_3(VAR_0 != ((void*)0));

  if (VAR_0->pPrevFrame != ((void*)0) || VAR_0->pCurFrame != ((void*)0))
    FUNC_0(VAR_0);

  FUNC_1(VAR_0);
  return 1;
}
