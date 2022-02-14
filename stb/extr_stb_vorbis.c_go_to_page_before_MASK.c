
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int first_audio_page_offset; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int*,int *) ;

__attribute__((used)) static int FUNC_3(stb_vorbis *VAR_0, unsigned int VAR_1)
{
   unsigned int VAR_2, VAR_3;


   if (VAR_1 >= 65536 && VAR_1-65536 >= VAR_0->first_audio_page_offset)
      VAR_2 = VAR_1 - 65536;
   else
      VAR_2 = VAR_0->first_audio_page_offset;

   FUNC_0(VAR_0, VAR_2);

   while (FUNC_2(VAR_0, &VAR_3, ((void*)0))) {
      if (VAR_3 >= VAR_1 && FUNC_1(VAR_0) < VAR_1)
         return 1;
      FUNC_0(VAR_0, VAR_3);
   }

   return 0;
}
