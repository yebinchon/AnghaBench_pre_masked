
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rtmp_stream {int dbr_data_size; long dbr_est_bitrate; scalar_t__ audio_bitrate; int dbr_frames; } ;
struct dbr_frame {int send_end; int send_beg; scalar_t__ size; } ;
typedef int front ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dbr_frame*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,struct dbr_frame*,int) ;

__attribute__((used)) static void FUNC_3(struct rtmp_stream *VAR_2, struct dbr_frame *VAR_3)
{
 struct dbr_frame VAR_4;
 uint64_t VAR_5;

 FUNC_2(&VAR_2->dbr_frames, VAR_3, sizeof(*VAR_3));
 FUNC_0(&VAR_2->dbr_frames, &VAR_4, sizeof(VAR_4));

 VAR_2->dbr_data_size += VAR_3->size;

 VAR_5 = (VAR_3->send_end - VAR_4.send_beg) / 1000000;

 if (VAR_5 >= VAR_0) {
  VAR_2->dbr_data_size -= VAR_4.size;
  FUNC_1(&VAR_2->dbr_frames, ((void*)0), sizeof(VAR_4));
 }

 VAR_2->dbr_est_bitrate =
  (VAR_5 >= VAR_1)
   ? (long)(VAR_2->dbr_data_size * 1000 / VAR_5)
   : 0;
 VAR_2->dbr_est_bitrate *= 8;
 VAR_2->dbr_est_bitrate /= 1000;

 if (VAR_2->dbr_est_bitrate) {
  VAR_2->dbr_est_bitrate -= VAR_2->audio_bitrate;
  if (VAR_2->dbr_est_bitrate < 50)
   VAR_2->dbr_est_bitrate = 50;
 }
}
