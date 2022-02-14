
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtmp_stream {int * output; } ;
struct encoder_packet {int timebase_den; int size; int data; int type; } ;
typedef int obs_output_t ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int **,int *) ;
 int * FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (struct rtmp_stream*,struct encoder_packet*,int,size_t) ;

__attribute__((used)) static bool FUNC_4(struct rtmp_stream *VAR_1, size_t VAR_2,
         bool *VAR_3)
{
 obs_output_t *VAR_4 = VAR_1->output;
 obs_encoder_t *VAR_5 = FUNC_2(VAR_4, VAR_2);
 uint8_t *VAR_6;

 struct encoder_packet VAR_7 = {.type = VAR_0,
     .timebase_den = 1};

 if (!VAR_5) {
  *VAR_3 = 0;
  return 1;
 }

 FUNC_1(VAR_5, &VAR_6, &VAR_7.size);
 VAR_7.data = FUNC_0(VAR_6, VAR_7.size);
 return FUNC_3(VAR_1, &VAR_7, 1, VAR_2) >= 0;
}
