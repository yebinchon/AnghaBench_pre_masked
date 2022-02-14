
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct compressor_data {float ratio; float threshold; size_t num_channels; size_t sample_rate; float slope; char const* sidechain_name; scalar_t__ envelope_buf_len; int sidechain_update_mutex; scalar_t__ sidechain_check_time; int * weak_sidechain; int output_gain; void* release_gain; void* attack_gain; } ;
typedef int obs_weak_source_t ;
typedef int obs_source_t ;
typedef int obs_data_t ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 float const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 char const* FUNC_3 (char const*) ;
 int FUNC_4 (float const) ;
 void* FUNC_5 (size_t const,float const) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,struct compressor_data*) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct compressor_data*,size_t) ;
 int VAR_9 ;
 scalar_t__ FUNC_18 (char const*,char const*) ;

__attribute__((used)) static void FUNC_19(void *VAR_10, obs_data_t *VAR_11)
{
 struct compressor_data *VAR_12 = VAR_10;

 const uint32_t VAR_13 =
  FUNC_1(FUNC_9());
 const size_t VAR_14 = FUNC_0(FUNC_9());
 const float VAR_15 = (float)FUNC_7(VAR_11, VAR_3);
 const float VAR_16 =
  (float)FUNC_7(VAR_11, VAR_6);
 const float VAR_17 =
  (float)FUNC_6(VAR_11, VAR_4);
 const char *VAR_18 = FUNC_8(VAR_11, VAR_7);

 VAR_12->ratio = (float)FUNC_6(VAR_11, VAR_5);
 VAR_12->threshold = (float)FUNC_6(VAR_11, VAR_8);
 VAR_12->attack_gain =
  FUNC_5(VAR_13, VAR_15 / VAR_2);
 VAR_12->release_gain =
  FUNC_5(VAR_13, VAR_16 / VAR_2);
 VAR_12->output_gain = FUNC_4(VAR_17);
 VAR_12->num_channels = VAR_14;
 VAR_12->sample_rate = VAR_13;
 VAR_12->slope = 1.0f - (1.0f / VAR_12->ratio);

 bool VAR_19 = *VAR_18 &&
          FUNC_18(VAR_18, "none") != 0;
 obs_weak_source_t *VAR_20 = ((void*)0);

 FUNC_15(&VAR_12->sidechain_update_mutex);

 if (!VAR_19) {
  if (VAR_12->weak_sidechain) {
   VAR_20 = VAR_12->weak_sidechain;
   VAR_12->weak_sidechain = ((void*)0);
  }

  FUNC_2(VAR_12->sidechain_name);
  VAR_12->sidechain_name = ((void*)0);

 } else {
  if (!VAR_12->sidechain_name ||
      FUNC_18(VAR_12->sidechain_name, VAR_18) != 0) {
   if (VAR_12->weak_sidechain) {
    VAR_20 = VAR_12->weak_sidechain;
    VAR_12->weak_sidechain = ((void*)0);
   }

   FUNC_2(VAR_12->sidechain_name);
   VAR_12->sidechain_name = FUNC_3(VAR_18);
   VAR_12->sidechain_check_time = FUNC_14() - 3000000000;
  }
 }

 FUNC_16(&VAR_12->sidechain_update_mutex);

 if (VAR_20) {
  obs_source_t *VAR_21 =
   FUNC_12(VAR_20);

  if (VAR_21) {
   FUNC_11(
    VAR_21, VAR_9, VAR_12);
   FUNC_10(VAR_21);
  }

  FUNC_13(VAR_20);
 }

 size_t VAR_22 = VAR_13 * VAR_0 / VAR_1;
 if (VAR_12->envelope_buf_len == 0)
  FUNC_17(VAR_12, VAR_22);
}
