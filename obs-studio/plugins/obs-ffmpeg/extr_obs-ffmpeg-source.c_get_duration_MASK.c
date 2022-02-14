
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fmt; } ;
struct ffmpeg_source {TYPE_2__ media; } ;
typedef int int64_t ;
typedef int calldata_t ;
struct TYPE_3__ {int duration; } ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, calldata_t *VAR_1)
{
 struct ffmpeg_source *VAR_2 = VAR_0;
 int64_t VAR_3 = 0;
 if (VAR_2->media.fmt)
  VAR_3 = VAR_2->media.fmt->duration;

 FUNC_0(VAR_1, "duration", VAR_3 * 1000);
}
