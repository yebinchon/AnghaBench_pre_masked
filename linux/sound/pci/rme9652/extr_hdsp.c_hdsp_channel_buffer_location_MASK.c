
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int max_channels; int* channel_map; char* capture_buffer; char* playback_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char *FUNC_1(struct hdsp *VAR_2,
          int VAR_3,
          int VAR_4)

{
 int VAR_5;

        if (FUNC_0(VAR_4 < 0 || VAR_4 >= VAR_2->max_channels))
  return ((void*)0);

 if ((VAR_5 = VAR_2->channel_map[VAR_4]) < 0)
  return ((void*)0);

 if (VAR_3 == VAR_1)
  return VAR_2->capture_buffer + (VAR_5 * VAR_0);
 else
  return VAR_2->playback_buffer + (VAR_5 * VAR_0);
}
