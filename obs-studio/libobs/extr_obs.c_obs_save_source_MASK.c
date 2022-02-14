
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_28__ {size_t num; TYPE_4__** array; } ;
struct TYPE_27__ {scalar_t__ type; } ;
struct TYPE_26__ {int * hotkey_data; } ;
struct TYPE_29__ {int filter_mutex; TYPE_3__ filters; TYPE_2__ info; int * private_settings; TYPE_1__ context; } ;
typedef TYPE_4__ obs_source_t ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,float) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int *,char*,char const*) ;
 int * FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 float FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 char* FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (TYPE_4__*) ;
 char* FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (TYPE_4__*) ;
 int * FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (TYPE_4__*) ;
 float FUNC_25 (TYPE_4__*) ;
 int FUNC_26 (TYPE_4__*) ;
 int FUNC_27 (TYPE_4__*) ;
 int FUNC_28 (TYPE_4__*) ;
 int FUNC_29 (TYPE_4__*) ;
 int FUNC_30 (TYPE_4__*,int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;

obs_data_t *FUNC_33(obs_source_t *VAR_2)
{
 obs_data_array_t *VAR_3 = FUNC_0();
 obs_data_t *VAR_4 = FUNC_3();
 obs_data_t *VAR_5 = FUNC_23(VAR_2);
 obs_data_t *VAR_6 = VAR_2->context.hotkey_data;
 obs_data_t *VAR_7;
 float VAR_8 = FUNC_25(VAR_2);
 float VAR_9 = FUNC_14(VAR_2);
 uint32_t VAR_10 = FUNC_13(VAR_2);
 int64_t VAR_11 = FUNC_24(VAR_2);
 uint32_t VAR_12 = FUNC_17(VAR_2);
 const char *VAR_13 = FUNC_20(VAR_2);
 const char *VAR_14 = FUNC_18(VAR_2);
 bool VAR_15 = FUNC_12(VAR_2);
 bool VAR_16 = FUNC_26(VAR_2);
 bool VAR_17 = FUNC_27(VAR_2);
 uint64_t VAR_18 = FUNC_21(VAR_2);
 bool VAR_19 = FUNC_28(VAR_2);
 uint64_t VAR_20 = FUNC_22(VAR_2);
 int VAR_21 = (int)FUNC_19(VAR_2);
 int VAR_22 = (int)FUNC_16(VAR_2);
 int VAR_23 = (int)FUNC_15(VAR_2);

 FUNC_29(VAR_2);
 VAR_7 = FUNC_11(VAR_2);

 if (VAR_7) {
  FUNC_4(VAR_6);
  VAR_2->context.hotkey_data = VAR_7;
  VAR_6 = VAR_7;
 }

 FUNC_8(VAR_4, "prev_ver", VAR_0);

 FUNC_10(VAR_4, "name", VAR_13);
 FUNC_10(VAR_4, "id", VAR_14);
 FUNC_9(VAR_4, "settings", VAR_5);
 FUNC_8(VAR_4, "mixers", VAR_10);
 FUNC_8(VAR_4, "sync", VAR_11);
 FUNC_8(VAR_4, "flags", VAR_12);
 FUNC_7(VAR_4, "volume", VAR_8);
 FUNC_7(VAR_4, "balance", VAR_9);
 FUNC_6(VAR_4, "enabled", VAR_15);
 FUNC_6(VAR_4, "muted", VAR_16);
 FUNC_6(VAR_4, "push-to-mute", VAR_17);
 FUNC_8(VAR_4, "push-to-mute-delay", VAR_18);
 FUNC_6(VAR_4, "push-to-talk", VAR_19);
 FUNC_8(VAR_4, "push-to-talk-delay", VAR_20);
 FUNC_9(VAR_4, "hotkeys", VAR_6);
 FUNC_8(VAR_4, "deinterlace_mode", VAR_22);
 FUNC_8(VAR_4, "deinterlace_field_order", VAR_23);
 FUNC_8(VAR_4, "monitoring_type", VAR_21);

 FUNC_9(VAR_4, "private_settings",
    VAR_2->private_settings);

 if (VAR_2->info.type == VAR_1)
  FUNC_30(VAR_2, VAR_4);

 FUNC_31(&VAR_2->filter_mutex);

 if (VAR_2->filters.num) {
  for (size_t VAR_24 = VAR_2->filters.num; VAR_24 > 0; VAR_24--) {
   obs_source_t *VAR_25 = VAR_2->filters.array[VAR_24 - 1];
   obs_data_t *VAR_26 = FUNC_33(VAR_25);
   FUNC_1(VAR_3, VAR_26);
   FUNC_4(VAR_26);
  }

  FUNC_5(VAR_4, "filters", VAR_3);
 }

 FUNC_32(&VAR_2->filter_mutex);

 FUNC_4(VAR_5);
 FUNC_2(VAR_3);

 return VAR_4;
}
