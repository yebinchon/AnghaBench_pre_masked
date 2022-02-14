
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int flags; } ;
struct cmp_connection {int dummy; } ;
struct snd_bebob {int version; struct amdtp_stream tx_stream; scalar_t__ maudio_special_quirk; int unit; struct cmp_connection in_conn; struct cmp_connection out_conn; } ;
typedef enum cmp_direction { ____Placeholder_cmp_direction } cmp_direction ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct amdtp_stream*,int ,int,int ) ;
 int FUNC_1 (struct cmp_connection*) ;
 int FUNC_2 (struct cmp_connection*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_bebob *VAR_7, struct amdtp_stream *VAR_8)
{
 enum amdtp_stream_direction VAR_9;
 struct cmp_connection *VAR_10;
 enum cmp_direction VAR_11;
 int VAR_12;

 if (VAR_8 == &VAR_7->tx_stream) {
  VAR_9 = VAR_0;
  VAR_10 = &VAR_7->out_conn;
  VAR_11 = VAR_6;
 } else {
  VAR_9 = VAR_1;
  VAR_10 = &VAR_7->in_conn;
  VAR_11 = VAR_5;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_7->unit, VAR_11, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_7->unit, VAR_9, VAR_2);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10);
  return VAR_12;
 }

 if (VAR_8 == &VAR_7->tx_stream) {




  if (VAR_7->version > 2)
   VAR_7->tx_stream.flags |= VAR_3 |
        VAR_4;




  if (VAR_7->maudio_special_quirk)
   VAR_7->tx_stream.flags |= VAR_3;
 }

 return 0;
}
