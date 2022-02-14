
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int scrollbar_T ;
struct TYPE_5__ {TYPE_1__* cbdata; } ;
struct TYPE_4__ {int position; int action; } ;
typedef int PtWidget_t ;
typedef TYPE_1__ PtScrollbarCallback_t ;
typedef TYPE_2__ PtCallbackInfo_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static int
FUNC_1(PtWidget_t *VAR_3, void *VAR_4, PtCallbackInfo_t *VAR_5)
{
    PtScrollbarCallback_t *VAR_6;
    scrollbar_T *VAR_7;
    int VAR_8, VAR_9 = VAR_0;

    VAR_6 = VAR_5->cbdata;

    VAR_7 = (scrollbar_T *) VAR_4;
    if (VAR_7 != ((void*)0))
    {
 VAR_8 = VAR_6->position;
 switch (VAR_6->action)
 {
     case 129:
  VAR_9 = VAR_2;
  break;

     case 128:

  return VAR_1;
  break;
 }

 FUNC_0(VAR_7, VAR_8, VAR_9);
    }
    return VAR_1;
}
