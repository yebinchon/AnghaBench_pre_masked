
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,char*,int ,int,int,int) ;
 int * FUNC_4 (int *,char*,int ,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static obs_properties_t *FUNC_10(void *VAR_19)
{
 FUNC_0(VAR_19);

 obs_properties_t *VAR_20 = FUNC_6();
 obs_property_t *VAR_21;
 obs_property_t *VAR_22;

 VAR_21 = FUNC_4(VAR_20, "rate_control", VAR_11,
           VAR_1,
           VAR_0);
 FUNC_8(VAR_21, "CBR", "CBR");
 FUNC_8(VAR_21, "ABR", "ABR");
 FUNC_8(VAR_21, "VBR", "VBR");
 FUNC_8(VAR_21, "CRF", "CRF");

 FUNC_9(VAR_21, VAR_15);

 VAR_22 = FUNC_3(VAR_20, "bitrate", VAR_3, 50, 10000000,
       50);
 FUNC_7(VAR_22, " Kbps");

 VAR_22 = FUNC_2(VAR_20, "use_bufsize", VAR_6);
 FUNC_9(VAR_22, VAR_16);
 FUNC_3(VAR_20, "buffer_size", VAR_4, 0, 10000000,
          1);

 FUNC_3(VAR_20, "crf", VAR_5, 0, 51, 1);

 FUNC_3(VAR_20, "keyint_sec", VAR_7, 0, 20, 1);

 VAR_21 = FUNC_4(VAR_20, "preset", VAR_9,
           VAR_1,
           VAR_0);
 FUNC_1(VAR_21, VAR_17);

 VAR_21 = FUNC_4(VAR_20, "profile", VAR_10,
           VAR_1,
           VAR_0);
 FUNC_8(VAR_21, VAR_8, "");
 FUNC_8(VAR_21, "baseline", "baseline");
 FUNC_8(VAR_21, "main", "main");
 FUNC_8(VAR_21, "high", "high");

 VAR_21 = FUNC_4(VAR_20, "tune", VAR_12,
           VAR_1,
           VAR_0);
 FUNC_8(VAR_21, VAR_8, "");
 FUNC_1(VAR_21, VAR_18);





 FUNC_5(VAR_20, "x264opts", VAR_14,
    VAR_2);

 return VAR_20;
}
