
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffmpeg_mux {TYPE_1__* output; } ;
struct TYPE_2__ {int ** streams; } ;
typedef int AVStream ;



__attribute__((used)) static inline AVStream *FUNC_0(struct ffmpeg_mux *VAR_0, int VAR_1)
{
 return VAR_0->output->streams[VAR_1];
}
