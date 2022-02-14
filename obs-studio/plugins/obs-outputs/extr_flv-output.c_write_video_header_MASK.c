
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct flv_output {int * output; } ;
struct encoder_packet {int timebase_den; int keyframe; int data; int size; int type; } ;
typedef int obs_output_t ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int **,size_t*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (struct flv_output*,struct encoder_packet*,int) ;

__attribute__((used)) static void FUNC_5(struct flv_output *VAR_1)
{
 obs_output_t *VAR_2 = VAR_1->output;
 obs_encoder_t *VAR_3 = FUNC_2(VAR_2);
 uint8_t *VAR_4;
 size_t VAR_5;

 struct encoder_packet VAR_6 = {
  .type = VAR_0, .timebase_den = 1, .keyframe = 1};

 FUNC_1(VAR_3, &VAR_4, &VAR_5);
 VAR_6.size = FUNC_3(&VAR_6.data, VAR_4, VAR_5);
 FUNC_4(VAR_1, &VAR_6, 1);
 FUNC_0(VAR_6.data);
}
