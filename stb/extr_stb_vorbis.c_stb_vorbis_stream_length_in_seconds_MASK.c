
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sample_rate; } ;
typedef TYPE_1__ stb_vorbis ;


 float FUNC_0 (TYPE_1__*) ;

float FUNC_1(stb_vorbis *VAR_0)
{
   return FUNC_0(VAR_0) / (float) VAR_0->sample_rate;
}
