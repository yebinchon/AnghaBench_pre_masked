
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct expander_data {int is_gate; float ratio; float threshold; size_t num_channels; size_t sample_rate; float slope; scalar_t__ envelope_buf_len; scalar_t__ runaverage_len; scalar_t__ env_in_len; scalar_t__ gaindB_len; int detector; int output_gain; void* release_gain; void* attack_gain; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (float const) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (size_t const,float const) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct expander_data*,size_t) ;
 int FUNC_12 (struct expander_data*,size_t) ;
 int FUNC_13 (struct expander_data*,size_t) ;
 int FUNC_14 (struct expander_data*,size_t) ;
 scalar_t__ FUNC_15 (char const*,char*) ;

__attribute__((used)) static void FUNC_16(void *VAR_12, obs_data_t *VAR_13)
{
 struct expander_data *VAR_14 = VAR_12;
 const char *VAR_15 = FUNC_8(VAR_13, VAR_8);
 if (FUNC_15(VAR_15, "expander") == 0 && VAR_14->is_gate) {
  FUNC_5(VAR_13);
  FUNC_9(VAR_13, VAR_8, "expander");
  FUNC_3(VAR_13);
  VAR_14->is_gate = 0;
 }
 if (FUNC_15(VAR_15, "gate") == 0 && !VAR_14->is_gate) {
  FUNC_5(VAR_13);
  FUNC_9(VAR_13, VAR_8, "gate");
  FUNC_3(VAR_13);
  VAR_14->is_gate = 1;
 }

 const uint32_t VAR_16 =
  FUNC_1(FUNC_10());
 const size_t VAR_17 = FUNC_0(FUNC_10());
 const float VAR_18 = (float)FUNC_7(VAR_13, VAR_5);
 const float VAR_19 =
  (float)FUNC_7(VAR_13, VAR_10);
 const float VAR_20 =
  (float)FUNC_6(VAR_13, VAR_7);

 VAR_14->ratio = (float)FUNC_6(VAR_13, VAR_9);

 VAR_14->threshold = (float)FUNC_6(VAR_13, VAR_11);
 VAR_14->attack_gain =
  FUNC_4(VAR_16, VAR_18 / VAR_2);
 VAR_14->release_gain =
  FUNC_4(VAR_16, VAR_19 / VAR_2);
 VAR_14->output_gain = FUNC_2(VAR_20);
 VAR_14->num_channels = VAR_17;
 VAR_14->sample_rate = VAR_16;
 VAR_14->slope = 1.0f - VAR_14->ratio;

 const char *VAR_21 = FUNC_8(VAR_13, VAR_6);
 if (FUNC_15(VAR_21, "RMS") == 0)
  VAR_14->detector = VAR_4;
 if (FUNC_15(VAR_21, "peak") == 0)
  VAR_14->detector = VAR_3;

 size_t VAR_22 = VAR_16 * VAR_0 / VAR_1;
 if (VAR_14->envelope_buf_len == 0)
  FUNC_11(VAR_14, VAR_22);
 if (VAR_14->runaverage_len == 0)
  FUNC_14(VAR_14, VAR_22);
 if (VAR_14->env_in_len == 0)
  FUNC_12(VAR_14, VAR_22);
 if (VAR_14->gaindB_len == 0)
  FUNC_13(VAR_14, VAR_22);
}
