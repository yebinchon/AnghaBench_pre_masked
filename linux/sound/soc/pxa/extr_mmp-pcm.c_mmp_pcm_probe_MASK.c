
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct mmp_audio_platdata* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mmp_audio_platdata {int period_max_capture; int buffer_max_capture; int period_max_playback; int buffer_max_playback; } ;
struct TYPE_3__ {int period_bytes_max; int buffer_bytes_max; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_4)
{
 struct mmp_audio_platdata *VAR_5 = VAR_4->dev.platform_data;

 if (VAR_5) {
  VAR_2[VAR_1].buffer_bytes_max =
      VAR_5->buffer_max_playback;
  VAR_2[VAR_1].period_bytes_max =
      VAR_5->period_max_playback;
  VAR_2[VAR_0].buffer_bytes_max =
      VAR_5->buffer_max_capture;
  VAR_2[VAR_0].period_bytes_max =
      VAR_5->period_max_capture;
 }
 return FUNC_0(&VAR_4->dev, &VAR_3,
            ((void*)0), 0);
}
