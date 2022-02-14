
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;
struct TYPE_2__ {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (int *,char*,int ,int ,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int ) ;
 int VAR_10 ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static obs_properties_t *FUNC_11(void *VAR_11)
{
 FUNC_0(VAR_11);

 obs_properties_t *VAR_12 = FUNC_5();

 obs_property_t *VAR_13 = FUNC_4(
  VAR_12, "device_id", FUNC_2("Device"),
  VAR_2, VAR_1);

 obs_property_t *VAR_14 = FUNC_4(
  VAR_12, "input", FUNC_2("Input"), VAR_2,
  VAR_0);

 obs_property_t *VAR_15 = FUNC_4(
  VAR_12, "pixelformat", FUNC_2("VideoFormat"),
  VAR_2, VAR_0);

 obs_property_t *VAR_16 = FUNC_4(
  VAR_12, "standard", FUNC_2("VideoStandard"),
  VAR_2, VAR_0);
 FUNC_8(VAR_16, 0);

 obs_property_t *VAR_17 = FUNC_4(
  VAR_12, "dv_timing", FUNC_2("DVTiming"),
  VAR_2, VAR_0);
 FUNC_8(VAR_17, 0);

 obs_property_t *VAR_18 = FUNC_4(
  VAR_12, "resolution", FUNC_2("Resolution"),
  VAR_2, VAR_0);

 FUNC_4(VAR_12, "framerate",
    FUNC_2("FrameRate"),
    VAR_2, VAR_0);

 obs_property_t *VAR_19 = FUNC_4(
  VAR_12, "color_range", FUNC_2("ColorRange"),
  VAR_2, VAR_0);
 FUNC_6(VAR_19,
      FUNC_2("ColorRange.Default"),
      VAR_3);
 FUNC_6(VAR_19,
      FUNC_2("ColorRange.Partial"),
      VAR_5);
 FUNC_6(VAR_19,
      FUNC_2("ColorRange.Full"),
      VAR_4);

 FUNC_3(VAR_12, "buffering",
    FUNC_2("UseBuffering"));

 obs_data_t *VAR_20 = FUNC_9(VAR_6->source);
 FUNC_10(VAR_13, VAR_20);
 FUNC_1(VAR_20);

 FUNC_7(VAR_13, VAR_7);
 FUNC_7(VAR_14, VAR_9);
 FUNC_7(VAR_15, VAR_8);
 FUNC_7(VAR_18,
        VAR_10);

 return VAR_12;
}
