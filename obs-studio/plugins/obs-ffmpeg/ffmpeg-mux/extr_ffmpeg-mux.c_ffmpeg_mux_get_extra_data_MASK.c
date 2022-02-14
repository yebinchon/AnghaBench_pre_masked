
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tracks; scalar_t__ has_video; } ;
struct ffmpeg_mux {TYPE_1__ params; } ;


 int FUNC_0 (struct ffmpeg_mux*) ;

__attribute__((used)) static inline bool FUNC_1(struct ffmpeg_mux *VAR_0)
{
 if (VAR_0->params.has_video) {
  if (!FUNC_0(VAR_0)) {
   return 0;
  }
 }

 for (int VAR_1 = 0; VAR_1 < VAR_0->params.tracks; VAR_1++) {
  if (!FUNC_0(VAR_0)) {
   return 0;
  }
 }

 return 1;
}
