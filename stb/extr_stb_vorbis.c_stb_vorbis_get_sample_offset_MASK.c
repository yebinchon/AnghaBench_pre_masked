
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_loc; scalar_t__ current_loc_valid; } ;
typedef TYPE_1__ stb_vorbis ;



int FUNC_0(stb_vorbis *VAR_0)
{
   if (VAR_0->current_loc_valid)
      return VAR_0->current_loc;
   else
      return -1;
}
