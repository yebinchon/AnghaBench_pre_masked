
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * raw_mem; int * frames; scalar_t__ num_frames; } ;
typedef TYPE_1__ AnimatedImage ;


 int FUNC_0 (int *) ;

void FUNC_1(AnimatedImage* const VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_0(VAR_0->raw_mem);
    FUNC_0(VAR_0->frames);
    VAR_0->num_frames = 0;
    VAR_0->frames = ((void*)0);
    VAR_0->raw_mem = ((void*)0);
  }
}
