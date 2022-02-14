
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int valid; int cx; int cz; TYPE_2__* fc; } ;
typedef TYPE_1__ decoded_buffer ;
struct TYPE_7__ {struct TYPE_7__* pointer_to_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;

decoded_buffer *FUNC_2(int VAR_3, int VAR_4)
{
   decoded_buffer *VAR_5 = &VAR_2[VAR_4&(VAR_1-1)][VAR_3&(VAR_0-1)];
   if (VAR_5->valid) {
      if (VAR_5->cx == VAR_3 && VAR_5->cz == VAR_4)
         return VAR_5;
      if (VAR_5->fc) {
         FUNC_0(VAR_5->fc->pointer_to_free);
         FUNC_0(VAR_5->fc);
      }
   }

   VAR_5->cx = VAR_3;
   VAR_5->cz = VAR_4;
   VAR_5->valid = 1;
   VAR_5->fc = 0;

   {
      VAR_5->fc = FUNC_1(VAR_3, VAR_4);
      return VAR_5;
   }
}
