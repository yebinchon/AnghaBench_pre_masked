
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int* channel_map; char* capture_buffer; char* playback_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char *FUNC_1(struct snd_rme9652 *VAR_3,
          int VAR_4,
          int VAR_5)

{
 int VAR_6;

 if (FUNC_0(VAR_5 < 0 || VAR_5 >= VAR_1))
  return ((void*)0);

 if ((VAR_6 = VAR_3->channel_map[VAR_5]) < 0) {
  return ((void*)0);
 }

 if (VAR_4 == VAR_2) {
  return VAR_3->capture_buffer +
   (VAR_6 * VAR_0);
 } else {
  return VAR_3->playback_buffer +
   (VAR_6 * VAR_0);
 }
}
