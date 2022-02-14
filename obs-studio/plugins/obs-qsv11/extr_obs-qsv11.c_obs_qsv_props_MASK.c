
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;
 int * FUNC_5 (int *,char*,char*,int,int,int) ;
 int * FUNC_6 (int *,char*,int ,int ,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static obs_properties_t *FUNC_10(void *VAR_19)
{
 FUNC_0(VAR_19);

 obs_properties_t *VAR_20 = FUNC_7();
 obs_property_t *VAR_21;

 VAR_21 = FUNC_6(VAR_20, "target_usage", VAR_13,
           VAR_1,
           VAR_0);
 FUNC_2(VAR_21, VAR_17);

 VAR_21 = FUNC_6(VAR_20, "profile", VAR_11,
           VAR_1,
           VAR_0);
 FUNC_2(VAR_21, VAR_15);

 FUNC_5(VAR_20, "keyint_sec", VAR_7, 1, 20, 1);
 FUNC_5(VAR_20, "async_depth", VAR_3, 1, 7, 1);

 VAR_21 = FUNC_6(VAR_20, "rate_control", VAR_12,
           VAR_1,
           VAR_0);
 FUNC_1(VAR_21, VAR_16);
 FUNC_9(VAR_21, VAR_18);

 obs_property_t *VAR_22;
 VAR_22 = FUNC_5(VAR_20, "bitrate", VAR_14, 50,
       10000000, 50);
 FUNC_8(VAR_22, " Kbps");

 VAR_22 = FUNC_5(VAR_20, "max_bitrate", VAR_9, 50,
       10000000, 50);
 FUNC_8(VAR_22, " Kbps");

 FUNC_5(VAR_20, "accuracy", VAR_2, 0, 10000, 1);
 FUNC_5(VAR_20, "convergence", VAR_5, 0, 10,
          1);
 FUNC_5(VAR_20, "qpi", "QPI", 1, 51, 1);
 FUNC_5(VAR_20, "qpp", "QPP", 1, 51, 1);
 FUNC_5(VAR_20, "qpb", "QPB", 1, 51, 1);
 FUNC_5(VAR_20, "icq_quality", VAR_6, 1, 51,
          1);
 FUNC_5(VAR_20, "la_depth", VAR_8, 10, 100, 1);
 FUNC_5(VAR_20, "bframes", VAR_4, 0, 3, 1);

 if (FUNC_3())
  FUNC_4(VAR_20, "mbbrc", VAR_10);

 return VAR_20;
}
