
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hdmi_audio_data {int current_stream_lock; TYPE_1__* current_stream; } ;
struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ runtime; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct hdmi_audio_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_1)
{
 struct hdmi_audio_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->current_stream_lock);
 if (VAR_2->current_stream && VAR_2->current_stream->runtime &&
     FUNC_4(VAR_2->current_stream)) {
  FUNC_0(VAR_1, "HDMI display disabled, aborting playback\n");
  FUNC_6(VAR_2->current_stream);
  FUNC_5(VAR_2->current_stream, VAR_0);
  FUNC_7(VAR_2->current_stream);
 }
 FUNC_3(&VAR_2->current_stream_lock);
}
