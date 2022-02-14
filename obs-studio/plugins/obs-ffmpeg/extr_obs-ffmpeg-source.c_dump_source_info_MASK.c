
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {scalar_t__ close_when_inactive; scalar_t__ restart_on_activate; scalar_t__ is_clear_on_media_end; scalar_t__ is_hw_decoding; scalar_t__ is_looping; int speed_percent; } ;


 int FUNC_0 (int ,char*,char const*,char const*,int ,char*,char*,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ffmpeg_source *VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 FUNC_0(VAR_0,
  "settings:\n"
  "\tinput:                   %s\n"
  "\tinput_format:            %s\n"
  "\tspeed:                   %d\n"
  "\tis_looping:              %s\n"
  "\tis_hw_decoding:          %s\n"
  "\tis_clear_on_media_end:   %s\n"
  "\trestart_on_activate:     %s\n"
  "\tclose_when_inactive:     %s",
  VAR_2 ? VAR_2 : "(null)",
  VAR_3 ? VAR_3 : "(null)", VAR_1->speed_percent,
  VAR_1->is_looping ? "yes" : "no", VAR_1->is_hw_decoding ? "yes" : "no",
  VAR_1->is_clear_on_media_end ? "yes" : "no",
  VAR_1->restart_on_activate ? "yes" : "no",
  VAR_1->close_when_inactive ? "yes" : "no");
}
