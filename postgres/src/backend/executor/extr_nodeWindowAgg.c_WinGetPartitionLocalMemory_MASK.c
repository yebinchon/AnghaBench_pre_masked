
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* WindowObject ;
struct TYPE_6__ {void* localmem; TYPE_1__* winstate; } ;
struct TYPE_5__ {int partcontext; } ;
typedef int Size ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void *
FUNC_3(WindowObject VAR_0, Size VAR_1)
{
 FUNC_0(FUNC_2(VAR_0));
 if (VAR_0->localmem == ((void*)0))
  VAR_0->localmem =
   FUNC_1(VAR_0->winstate->partcontext, VAR_1);
 return VAR_0->localmem;
}
