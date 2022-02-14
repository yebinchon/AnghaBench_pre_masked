
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {int got_first_video; int send_sem; int packets_mutex; int start_dts_offset; int encode_error; } ;
struct encoder_packet {scalar_t__ type; int dts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtmp_stream*) ;
 int FUNC_1 (struct rtmp_stream*,struct encoder_packet*) ;
 int FUNC_2 (struct rtmp_stream*,struct encoder_packet*) ;
 scalar_t__ FUNC_3 (struct rtmp_stream*) ;
 int FUNC_4 (struct encoder_packet*,int ) ;
 int FUNC_5 (struct encoder_packet*,struct encoder_packet*) ;
 int FUNC_6 (struct encoder_packet*) ;
 int FUNC_7 (struct encoder_packet*,struct encoder_packet*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void *VAR_1, struct encoder_packet *VAR_2)
{
 struct rtmp_stream *VAR_3 = VAR_1;
 struct encoder_packet VAR_4;
 bool VAR_5 = 0;

 if (FUNC_3(VAR_3) || !FUNC_0(VAR_3))
  return;


 if (!VAR_2) {
  FUNC_8(&VAR_3->encode_error, 1);
  FUNC_9(VAR_3->send_sem);
  return;
 }

 if (VAR_2->type == VAR_0) {
  if (!VAR_3->got_first_video) {
   VAR_3->start_dts_offset =
    FUNC_4(VAR_2, VAR_2->dts);
   VAR_3->got_first_video = 1;
  }

  FUNC_7(&VAR_4, VAR_2);
 } else {
  FUNC_5(&VAR_4, VAR_2);
 }

 FUNC_10(&VAR_3->packets_mutex);

 if (!FUNC_3(VAR_3)) {
  VAR_5 = (VAR_2->type == VAR_0)
           ? FUNC_2(VAR_3, &VAR_4)
           : FUNC_1(VAR_3, &VAR_4);
 }

 FUNC_11(&VAR_3->packets_mutex);

 if (VAR_5)
  FUNC_9(VAR_3->send_sem);
 else
  FUNC_6(&VAR_4);
}
