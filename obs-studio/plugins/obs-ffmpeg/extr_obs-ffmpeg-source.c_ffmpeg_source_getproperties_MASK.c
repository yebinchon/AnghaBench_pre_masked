
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {char* input; } ;
struct dstr {char const* array; int member_0; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*,char*,char*) ;
 int FUNC_5 (struct dstr*,int) ;
 int VAR_9 ;
 char* VAR_10 ;
 char* FUNC_6 (char*) ;
 int * FUNC_7 (int *,char*,char*) ;
 int * FUNC_8 (int *,char*,char*,int,int,int) ;
 int * FUNC_9 (int *,char*,char*,int ,int ) ;
 int FUNC_10 (int *,char*,char*,int ,char const*,char const*) ;
 int FUNC_11 (int *,char*,char*,int ) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*,int ) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,int ) ;
 char* FUNC_18 (char const*,char) ;
 char* VAR_11 ;

__attribute__((used)) static obs_properties_t *FUNC_19(void *VAR_12)
{
 struct ffmpeg_source *VAR_13 = VAR_12;
 struct dstr VAR_14 = {0};
 struct dstr VAR_15 = {0};
 FUNC_0(VAR_12);

 obs_properties_t *VAR_16 = FUNC_12();

 FUNC_13(VAR_16, VAR_3);

 obs_property_t *VAR_17;

 VAR_17 = FUNC_7(VAR_16, "is_local_file",
           FUNC_6("LocalFile"));

 FUNC_17(VAR_17, VAR_9);

 FUNC_2(&VAR_14, FUNC_6("MediaFileFilter.AllMediaFiles"));
 FUNC_1(&VAR_14, VAR_10);
 FUNC_1(&VAR_14, FUNC_6("MediaFileFilter.VideoFiles"));
 FUNC_1(&VAR_14, VAR_11);
 FUNC_1(&VAR_14, FUNC_6("MediaFileFilter.AudioFiles"));
 FUNC_1(&VAR_14, VAR_8);
 FUNC_1(&VAR_14, FUNC_6("MediaFileFilter.AllFiles"));
 FUNC_1(&VAR_14, " (*.*)");

 if (VAR_13 && VAR_13->input && *VAR_13->input) {
  const char *VAR_18;

  FUNC_2(&VAR_15, VAR_13->input);
  FUNC_4(&VAR_15, "\\", "/");
  VAR_18 = FUNC_18(VAR_15.array, '/');
  if (VAR_18)
   FUNC_5(&VAR_15, VAR_18 - VAR_15.array + 1);
 }

 FUNC_10(VAR_16, "local_file",
    FUNC_6("LocalFile"), VAR_2,
    VAR_14.array, VAR_15.array);
 FUNC_3(&VAR_14);
 FUNC_3(&VAR_15);

 VAR_17 = FUNC_7(VAR_16, "looping",
           FUNC_6("Looping"));

 FUNC_7(VAR_16, "restart_on_activate",
    FUNC_6("RestartWhenActivated"));

 VAR_17 = FUNC_8(VAR_16, "buffering_mb",
          FUNC_6("BufferingMB"), 1,
          16, 1);
 FUNC_14(VAR_17, " MB");

 FUNC_11(VAR_16, "input", FUNC_6("Input"),
    VAR_4);

 FUNC_11(VAR_16, "input_format",
    FUNC_6("InputFormat"),
    VAR_4);


 FUNC_7(VAR_16, "hw_decode",
    FUNC_6("HardwareDecode"));


 FUNC_7(VAR_16, "clear_on_media_end",
    FUNC_6("ClearOnMediaEnd"));

 VAR_17 = FUNC_7(
  VAR_16, "close_when_inactive",
  FUNC_6("CloseFileWhenInactive"));

 FUNC_16(
  VAR_17, FUNC_6("CloseFileWhenInactive.ToolTip"));

 VAR_17 = FUNC_8(VAR_16, "speed_percent",
          FUNC_6("SpeedPercentage"),
          1, 200, 1);
 FUNC_14(VAR_17, "%");

 VAR_17 = FUNC_9(VAR_16, "color_range",
           FUNC_6("ColorRange"),
           VAR_1,
           VAR_0);
 FUNC_15(VAR_17, FUNC_6("ColorRange.Auto"),
      VAR_5);
 FUNC_15(VAR_17, FUNC_6("ColorRange.Partial"),
      VAR_7);
 FUNC_15(VAR_17, FUNC_6("ColorRange.Full"),
      VAR_6);

 FUNC_7(VAR_16, "seekable", FUNC_6("Seekable"));

 return VAR_16;
}
