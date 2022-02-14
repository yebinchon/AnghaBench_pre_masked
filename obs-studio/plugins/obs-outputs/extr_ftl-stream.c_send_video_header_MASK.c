
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ftl_stream {int * output; } ;
struct encoder_packet {int timebase_den; int keyframe; int data; int size; int dts_usec; int type; } ;
typedef int obs_output_t ;
typedef int obs_encoder_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int **,size_t*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ FUNC_3 (struct ftl_stream*,struct encoder_packet*,int) ;

__attribute__((used)) static bool FUNC_4(struct ftl_stream *VAR_1, int64_t VAR_2)
{
 obs_output_t *VAR_3 = VAR_1->output;
 obs_encoder_t *VAR_4 = FUNC_1(VAR_3);
 uint8_t *VAR_5;
 size_t VAR_6;

 struct encoder_packet VAR_7 = {.type = VAR_0,
     .timebase_den = 1,
     .keyframe = 1,
     .dts_usec = VAR_2};

 FUNC_0(VAR_4, &VAR_5, &VAR_6);
 VAR_7.size = FUNC_2(&VAR_7.data, VAR_5, VAR_6);
 return FUNC_3(VAR_1, &VAR_7, 1) >= 0;
}
