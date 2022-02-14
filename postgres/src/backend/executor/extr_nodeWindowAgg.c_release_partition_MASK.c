
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* WindowStatePerFunc ;
struct TYPE_9__ {int numfuncs; scalar_t__ partcontext; scalar_t__ aggcontext; int numaggs; int partition_spooled; int * buffer; TYPE_2__* peragg; TYPE_3__* perfunc; } ;
typedef TYPE_4__ WindowAggState ;
struct TYPE_8__ {TYPE_1__* winobj; } ;
struct TYPE_7__ {scalar_t__ aggcontext; } ;
struct TYPE_6__ {int * localmem; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(WindowAggState *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->numfuncs; VAR_1++)
 {
  WindowStatePerFunc VAR_2 = &(VAR_0->perfunc[VAR_1]);


  if (VAR_2->winobj)
   VAR_2->winobj->localmem = ((void*)0);
 }







 FUNC_0(VAR_0->partcontext);
 FUNC_0(VAR_0->aggcontext);
 for (VAR_1 = 0; VAR_1 < VAR_0->numaggs; VAR_1++)
 {
  if (VAR_0->peragg[VAR_1].aggcontext != VAR_0->aggcontext)
   FUNC_0(VAR_0->peragg[VAR_1].aggcontext);
 }

 if (VAR_0->buffer)
  FUNC_1(VAR_0->buffer);
 VAR_0->buffer = ((void*)0);
 VAR_0->partition_spooled = 0;
}
