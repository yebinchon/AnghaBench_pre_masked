
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,char*,char*,int,int,int) ;
 int * FUNC_5 (int *,char*,char*,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ) ;
 int VAR_2 ;

obs_properties_t *FUNC_11(bool VAR_3)
{
 obs_properties_t *VAR_4 = FUNC_6();
 obs_property_t *VAR_5;

 VAR_5 = FUNC_5(VAR_4, "rate_control",
        FUNC_2("RateControl"),
        VAR_1,
        VAR_0);
 FUNC_8(VAR_5, "CBR", "CBR");
 FUNC_8(VAR_5, "CQP", "CQP");
 FUNC_8(VAR_5, "VBR", "VBR");
 FUNC_8(VAR_5, FUNC_2("Lossless"),
         "lossless");

 FUNC_10(VAR_5, VAR_2);

 VAR_5 = FUNC_4(VAR_4, "bitrate", FUNC_2("Bitrate"),
       50, 300000, 50);
 FUNC_7(VAR_5, " Kbps");
 VAR_5 = FUNC_4(VAR_4, "max_bitrate",
       FUNC_2("MaxBitrate"), 50, 300000,
       50);
 FUNC_7(VAR_5, " Kbps");

 FUNC_4(VAR_4, "cqp", FUNC_2("NVENC.CQLevel"),
          1, 30, 1);

 FUNC_4(VAR_4, "keyint_sec",
          FUNC_2("KeyframeIntervalSec"), 0, 10,
          1);

 VAR_5 = FUNC_5(VAR_4, "preset", FUNC_2("Preset"),
        VAR_1,
        VAR_0);




 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "mq"), "mq");
 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "hq"), "hq");
 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "default"), "default");
 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "hp"), "hp");
 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "ll"), "ll");
 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "llhq"), "llhq");
 FUNC_8(VAR_5, FUNC_2("NVENC.Preset." "llhp"), "llhp");


 VAR_5 = FUNC_5(VAR_4, "profile",
        FUNC_2("Profile"),
        VAR_1,
        VAR_0);


 FUNC_8(VAR_5, "high", "high");
 FUNC_8(VAR_5, "main", "main");
 FUNC_8(VAR_5, "baseline", "baseline");


 if (!VAR_3) {
  VAR_5 = FUNC_3(VAR_4, "lookahead",
         FUNC_2("NVENC.LookAhead"));
  FUNC_9(
   VAR_5, FUNC_2("NVENC.LookAhead.ToolTip"));

  VAR_5 = FUNC_3(
   VAR_4, "psycho_aq",
   FUNC_2("NVENC.PsychoVisualTuning"));
  FUNC_9(
   VAR_5, FUNC_2("NVENC.PsychoVisualTuning.ToolTip"));
 }

 FUNC_4(VAR_4, "gpu", FUNC_2("GPU"), 0, 8, 1);

 FUNC_4(VAR_4, "bf", FUNC_2("BFrames"), 0, 4,
          1);

 return VAR_4;
}
