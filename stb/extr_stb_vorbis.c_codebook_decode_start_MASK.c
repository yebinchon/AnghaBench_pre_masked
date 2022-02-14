
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ last_seg; int bytes_in_seg; } ;
typedef TYPE_1__ vorb ;
struct TYPE_9__ {scalar_t__ lookup_type; int sorted_entries; scalar_t__ sparse; } ;
typedef TYPE_2__ Codebook ;


 int FUNC_0 (int,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(vorb *VAR_1, Codebook *VAR_2)
{
   int VAR_3 = -1;


   if (VAR_2->lookup_type == 0)
      FUNC_2(VAR_1, VAR_0);
   else {
      FUNC_0(VAR_3,VAR_1,VAR_2);
      if (VAR_2->sparse) FUNC_1(VAR_3 < VAR_2->sorted_entries);
      if (VAR_3 < 0) {
         if (!VAR_1->bytes_in_seg)
            if (VAR_1->last_seg)
               return VAR_3;
         FUNC_2(VAR_1, VAR_0);
      }
   }
   return VAR_3;
}
