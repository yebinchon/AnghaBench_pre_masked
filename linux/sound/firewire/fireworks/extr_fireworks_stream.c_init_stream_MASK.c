
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbc_interval; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct amdtp_stream {TYPE_2__ ctx_data; int flags; } ;
struct cmp_connection {int dummy; } ;
struct snd_efw {int firmware_version; struct amdtp_stream tx_stream; scalar_t__ is_af9; scalar_t__ is_fireworks3; int unit; struct cmp_connection in_conn; struct cmp_connection out_conn; } ;
typedef enum cmp_direction { ____Placeholder_cmp_direction } cmp_direction ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct amdtp_stream*,int ,int,int ) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct cmp_connection*) ;
 int FUNC_3 (struct cmp_connection*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_efw *VAR_10, struct amdtp_stream *VAR_11)
{
 struct cmp_connection *VAR_12;
 enum cmp_direction VAR_13;
 enum amdtp_stream_direction VAR_14;
 int VAR_15;

 if (VAR_11 == &VAR_10->tx_stream) {
  VAR_12 = &VAR_10->out_conn;
  VAR_13 = VAR_9;
  VAR_14 = VAR_0;
 } else {
  VAR_12 = &VAR_10->in_conn;
  VAR_13 = VAR_8;
  VAR_14 = VAR_1;
 }

 VAR_15 = FUNC_3(VAR_12, VAR_10->unit, VAR_13, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_11, VAR_10->unit, VAR_14, VAR_2);
 if (VAR_15 < 0) {
  FUNC_1(VAR_11);
  FUNC_2(VAR_12);
  return VAR_15;
 }

 if (VAR_11 == &VAR_10->tx_stream) {

  VAR_10->tx_stream.flags |= VAR_4;

  VAR_10->tx_stream.flags |= VAR_3;

  VAR_10->tx_stream.flags |= VAR_5;


  if (VAR_10->is_fireworks3 &&
      (VAR_10->firmware_version == 0x5070000 ||
       VAR_10->firmware_version == 0x5070300 ||
       VAR_10->firmware_version == 0x5080000))
   VAR_10->tx_stream.flags |= VAR_6;

  if (VAR_10->is_af9)
   VAR_10->tx_stream.flags |= VAR_7;

  if (VAR_10->firmware_version == 0x5050000)
   VAR_10->tx_stream.ctx_data.tx.dbc_interval = 8;
 }

 return VAR_15;
}
