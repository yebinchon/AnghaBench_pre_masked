
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blocksize_0; float** window; int blocksize_1; } ;
typedef TYPE_1__ vorb ;



__attribute__((used)) static float *FUNC_0(vorb *VAR_0, int VAR_1)
{
   VAR_1 <<= 1;
   if (VAR_1 == VAR_0->blocksize_0) return VAR_0->window[0];
   if (VAR_1 == VAR_0->blocksize_1) return VAR_0->window[1];
   return ((void*)0);
}
