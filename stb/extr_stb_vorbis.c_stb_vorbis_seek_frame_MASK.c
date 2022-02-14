
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int current_loc_valid; unsigned int current_loc; int blocksize_1; int blocksize_0; scalar_t__ previous_length; } ;
typedef TYPE_1__ stb_vorbis ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int*,int*,int*,int*,int*) ;
 int FUNC_6 (TYPE_1__*,unsigned int) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(stb_vorbis *VAR_2, unsigned int VAR_3)
{
   uint32 VAR_4;

   if (FUNC_0(VAR_2)) return FUNC_2(VAR_2, VAR_0);


   if (!FUNC_6(VAR_2, VAR_3))
      return 0;

   FUNC_1(VAR_2->current_loc_valid);
   FUNC_1(VAR_2->current_loc <= VAR_3);


   VAR_4 = (VAR_2->blocksize_1*3 - VAR_2->blocksize_0) >> 2;
   while (VAR_2->current_loc < VAR_3) {
      int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
      if (!FUNC_5(VAR_2, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9))
         return FUNC_2(VAR_2, VAR_1);

      VAR_10 = VAR_7 - VAR_5;
      if (VAR_2->current_loc + VAR_10 > VAR_3) {
         return 1;
      } else if (VAR_2->current_loc + VAR_10 + VAR_4 > VAR_3) {

         FUNC_7(VAR_2);
      } else {

         VAR_2->current_loc += VAR_10;
         VAR_2->previous_length = 0;
         FUNC_4(VAR_2);
         FUNC_3(VAR_2);
      }
   }

   FUNC_1(VAR_2->current_loc == VAR_3);
   return 1;
}
