
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flv_output {int * output; } ;
struct encoder_packet {int timebase_den; int size; int data; int type; } ;
typedef int obs_output_t ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (struct flv_output*,struct encoder_packet*,int) ;

__attribute__((used)) static void FUNC_3(struct flv_output *VAR_1)
{
 obs_output_t *VAR_2 = VAR_1->output;
 obs_encoder_t *VAR_3 = FUNC_1(VAR_2, 0);

 struct encoder_packet VAR_4 = {.type = VAR_0,
     .timebase_den = 1};

 FUNC_0(VAR_3, &VAR_4.data, &VAR_4.size);
 FUNC_2(VAR_1, &VAR_4, 1);
}
