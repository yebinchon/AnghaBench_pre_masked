
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_unit {int dummy; } ;
struct amdtp_tscm {unsigned int pcm_channels; } ;
struct TYPE_3__ {int fdf; int syt_override; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {struct amdtp_tscm* protocol; TYPE_2__ ctx_data; } ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
typedef int amdtp_stream_process_ctx_payloads_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdtp_stream*,struct fw_unit*,int,int,unsigned int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(struct amdtp_stream *VAR_8, struct fw_unit *VAR_9,
      enum amdtp_stream_direction VAR_10, unsigned int VAR_11)
{
 amdtp_stream_process_ctx_payloads_t VAR_12;
 struct amdtp_tscm *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 if (VAR_10 == VAR_2) {
  VAR_14 = VAR_1;
  VAR_12 = VAR_6;
 } else {
  VAR_14 = VAR_0;
  VAR_12 = VAR_7;
 }

 VAR_15 = FUNC_0(VAR_8, VAR_9, VAR_10,
   VAR_4 | VAR_5, VAR_14,
   VAR_12, sizeof(struct amdtp_tscm));
 if (VAR_15 < 0)
  return 0;

 if (VAR_10 == VAR_3) {

  VAR_8->ctx_data.rx.fdf = 0x00;

  VAR_8->ctx_data.rx.syt_override = 0x0000;
 }


 VAR_13 = VAR_8->protocol;
 VAR_13->pcm_channels = VAR_11;

 return 0;
}
