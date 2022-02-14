
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flv_output {int sent_headers; int got_first_video; int mutex; int start_dts_offset; scalar_t__ stop_ts; } ;
struct encoder_packet {scalar_t__ sys_dts_usec; scalar_t__ type; int dts; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct flv_output*) ;
 int FUNC_1 (struct flv_output*,int ) ;
 int FUNC_2 (struct encoder_packet*,int ) ;
 int FUNC_3 (struct encoder_packet*) ;
 int FUNC_4 (struct encoder_packet*,struct encoder_packet*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct flv_output*) ;
 int FUNC_8 (struct flv_output*) ;
 int FUNC_9 (struct flv_output*,struct encoder_packet*,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, struct encoder_packet *VAR_3)
{
 struct flv_output *VAR_4 = VAR_2;
 struct encoder_packet VAR_5;

 FUNC_5(&VAR_4->mutex);

 if (!FUNC_0(VAR_4))
  goto unlock;

 if (!VAR_3) {
  FUNC_1(VAR_4, VAR_1);
  goto unlock;
 }

 if (FUNC_7(VAR_4)) {
  if (VAR_3->sys_dts_usec >= (int64_t)VAR_4->stop_ts) {
   FUNC_1(VAR_4, 0);
   goto unlock;
  }
 }

 if (!VAR_4->sent_headers) {
  FUNC_8(VAR_4);
  VAR_4->sent_headers = 1;
 }

 if (VAR_3->type == VAR_0) {
  if (!VAR_4->got_first_video) {
   VAR_4->start_dts_offset =
    FUNC_2(VAR_3, VAR_3->dts);
   VAR_4->got_first_video = 1;
  }

  FUNC_4(&VAR_5, VAR_3);
  FUNC_9(VAR_4, &VAR_5, 0);
  FUNC_3(&VAR_5);
 } else {
  FUNC_9(VAR_4, VAR_3, 0);
 }

unlock:
 FUNC_6(&VAR_4->mutex);
}
