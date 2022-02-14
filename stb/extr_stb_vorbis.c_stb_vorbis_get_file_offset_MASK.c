
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ f_start; int f; scalar_t__ stream_start; scalar_t__ stream; scalar_t__ push_mode; } ;
typedef TYPE_1__ stb_vorbis ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;

unsigned int FUNC_2(stb_vorbis *VAR_0)
{

   if (VAR_0->push_mode) return 0;

   if (FUNC_0(VAR_0)) return (unsigned int) (VAR_0->stream - VAR_0->stream_start);

   return (unsigned int) (FUNC_1(VAR_0->f) - VAR_0->f_start);

}
