
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ valid; TYPE_2__* fc; } ;
typedef TYPE_1__ cached_converted_chunk ;
struct TYPE_5__ {struct TYPE_5__* pointer_to_free; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(int VAR_2)
{
   int VAR_3,VAR_4;
   for (VAR_4=VAR_2; VAR_4 < VAR_0; ++VAR_4) {
      for (VAR_3=VAR_2; VAR_3 < VAR_0; ++VAR_3) {
         cached_converted_chunk *VAR_5 = &VAR_1[VAR_4][VAR_3];
         if (VAR_5->valid) {
            if (VAR_5->fc) {
               FUNC_0(VAR_5->fc->pointer_to_free);
               FUNC_0(VAR_5->fc);
               VAR_5->fc = ((void*)0);
            }
            VAR_5->valid = 0;
         }
      }
   }
   VAR_0 = VAR_2;
}
