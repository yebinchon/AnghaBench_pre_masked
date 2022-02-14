
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct limiter_data {float threshold; size_t num_channels; size_t sample_rate; float slope; scalar_t__ envelope_buf_len; int output_gain; void* release_gain; void* attack_gain; } ;
typedef int obs_data_t ;


 float VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (float const) ;
 void* FUNC_3 (size_t const,float const) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct limiter_data*,size_t) ;

__attribute__((used)) static void FUNC_8(void *VAR_6, obs_data_t *VAR_7)
{
 struct limiter_data *VAR_8 = VAR_6;

 const uint32_t VAR_9 =
  FUNC_1(FUNC_6());
 const size_t VAR_10 = FUNC_0(FUNC_6());
 float VAR_11 = VAR_0;

 const float VAR_12 =
  (float)FUNC_5(VAR_7, VAR_4);
 const float VAR_13 = 0;

 VAR_8->threshold = (float)FUNC_4(VAR_7, VAR_5);

 VAR_8->attack_gain =
  FUNC_3(VAR_9, VAR_11 / VAR_3);
 VAR_8->release_gain =
  FUNC_3(VAR_9, VAR_12 / VAR_3);
 VAR_8->output_gain = FUNC_2(VAR_13);
 VAR_8->num_channels = VAR_10;
 VAR_8->sample_rate = VAR_9;
 VAR_8->slope = 1.0f;

 size_t VAR_14 = VAR_9 * VAR_1 / VAR_2;
 if (VAR_8->envelope_buf_len == 0)
  FUNC_7(VAR_8, VAR_14);
}
