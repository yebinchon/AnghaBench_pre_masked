
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_22__ {int default_flags; int * private_settings; } ;
typedef TYPE_1__ obs_source_t ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;
typedef scalar_t__ int64_t ;
typedef enum obs_monitoring_type { ____Placeholder_obs_monitoring_type } obs_monitoring_type ;
typedef enum obs_deinterlace_mode { ____Placeholder_obs_deinterlace_mode } obs_deinterlace_mode ;
typedef enum obs_deinterlace_field_order { ____Placeholder_obs_deinterlace_field_order } obs_deinterlace_field_order ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 double FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 void* FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,char*,double) ;
 int FUNC_14 (int *,char*,int) ;
 TYPE_1__* FUNC_15 (char const*,char const*,int *,int *,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int) ;
 int FUNC_22 (TYPE_1__*,float) ;
 int FUNC_23 (TYPE_1__*,int) ;
 int FUNC_24 (TYPE_1__*,int) ;
 int FUNC_25 (TYPE_1__*,int ) ;
 int FUNC_26 (TYPE_1__*,scalar_t__) ;
 int FUNC_27 (TYPE_1__*,int) ;
 int FUNC_28 (TYPE_1__*,int ) ;
 int FUNC_29 (TYPE_1__*,scalar_t__) ;
 int FUNC_30 (TYPE_1__*,scalar_t__) ;
 int FUNC_31 (TYPE_1__*,scalar_t__) ;
 int FUNC_32 (TYPE_1__*,float) ;

__attribute__((used)) static obs_source_t *FUNC_33(obs_data_t *VAR_2)
{
 obs_data_array_t *VAR_3 = FUNC_5(VAR_2, "filters");
 obs_source_t *VAR_4;
 const char *VAR_5 = FUNC_10(VAR_2, "name");
 const char *VAR_6 = FUNC_10(VAR_2, "id");
 obs_data_t *VAR_7 = FUNC_9(VAR_2, "settings");
 obs_data_t *VAR_8 = FUNC_9(VAR_2, "hotkeys");
 double VAR_9;
 double VAR_10;
 int64_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_12 = (uint32_t)FUNC_8(VAR_2, "prev_ver");

 VAR_4 = FUNC_15(VAR_6, VAR_5, VAR_7, VAR_8,
      VAR_12);

 FUNC_11(VAR_8);

 VAR_13 = FUNC_19(VAR_4);

 FUNC_13(VAR_2, "volume", 1.0);
 VAR_9 = FUNC_7(VAR_2, "volume");
 FUNC_32(VAR_4, (float)VAR_9);

 FUNC_13(VAR_2, "balance", 0.5);
 VAR_10 = FUNC_7(VAR_2, "balance");
 FUNC_22(VAR_4, (float)VAR_10);

 VAR_11 = FUNC_8(VAR_2, "sync");
 FUNC_31(VAR_4, VAR_11);

 FUNC_14(VAR_2, "mixers", 0x3F);
 VAR_15 = (uint32_t)FUNC_8(VAR_2, "mixers");
 FUNC_21(VAR_4, VAR_15);

 FUNC_14(VAR_2, "flags", VAR_4->default_flags);
 VAR_14 = (uint32_t)FUNC_8(VAR_2, "flags");
 FUNC_26(VAR_4, VAR_14);

 FUNC_12(VAR_2, "enabled", 1);
 FUNC_25(VAR_4,
          FUNC_6(VAR_2, "enabled"));

 FUNC_12(VAR_2, "muted", 0);
 FUNC_28(VAR_4, FUNC_6(VAR_2, "muted"));

 FUNC_12(VAR_2, "push-to-mute", 0);
 FUNC_16(
  VAR_4, FUNC_6(VAR_2, "push-to-mute"));

 FUNC_14(VAR_2, "push-to-mute-delay", 0);
 FUNC_29(
  VAR_4, FUNC_8(VAR_2, "push-to-mute-delay"));

 FUNC_12(VAR_2, "push-to-talk", 0);
 FUNC_17(
  VAR_4, FUNC_6(VAR_2, "push-to-talk"));

 FUNC_14(VAR_2, "push-to-talk-delay", 0);
 FUNC_30(
  VAR_4, FUNC_8(VAR_2, "push-to-talk-delay"));

 VAR_17 = (int)FUNC_8(VAR_2, "deinterlace_mode");
 FUNC_24(VAR_4,
     (enum obs_deinterlace_mode)VAR_17);

 VAR_16 =
  (int)FUNC_8(VAR_2, "deinterlace_field_order");
 FUNC_23(
  VAR_4, (enum obs_deinterlace_field_order)VAR_16);

 VAR_18 = (int)FUNC_8(VAR_2, "monitoring_type");
 if (VAR_12 < FUNC_0(23, 2, 2)) {
  if ((VAR_13 & VAR_1) != 0) {



   VAR_18 = VAR_0;
   FUNC_21(VAR_4, 0x3F);
  }
 }
 FUNC_27(
  VAR_4, (enum obs_monitoring_type)VAR_18);

 FUNC_11(VAR_4->private_settings);
 VAR_4->private_settings =
  FUNC_9(VAR_2, "private_settings");
 if (!VAR_4->private_settings)
  VAR_4->private_settings = FUNC_4();

 if (VAR_3) {
  size_t VAR_19 = FUNC_1(VAR_3);

  for (size_t VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
   obs_data_t *VAR_21 =
    FUNC_2(VAR_3, VAR_20);

   obs_source_t *VAR_22 =
    FUNC_33(VAR_21);
   if (VAR_22) {
    FUNC_18(VAR_4, VAR_22);
    FUNC_20(VAR_22);
   }

   FUNC_11(VAR_21);
  }

  FUNC_3(VAR_3);
 }

 FUNC_11(VAR_7);

 return VAR_4;
}
