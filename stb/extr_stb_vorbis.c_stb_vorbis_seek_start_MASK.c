
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int next_seg; int first_decode; scalar_t__ previous_length; int first_audio_page_offset; } ;
typedef TYPE_1__ stb_vorbis ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(stb_vorbis *VAR_2)
{
   if (FUNC_0(VAR_2)) { return FUNC_1(VAR_2, VAR_1); }
   FUNC_2(VAR_2, VAR_2->first_audio_page_offset);
   VAR_2->previous_length = 0;
   VAR_2->first_decode = VAR_0;
   VAR_2->next_seg = -1;
   return FUNC_3(VAR_2);
}
