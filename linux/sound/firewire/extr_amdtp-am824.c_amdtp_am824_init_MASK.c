
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct amdtp_am824 {int dummy; } ;
typedef enum cip_flags { ____Placeholder_cip_flags } cip_flags ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
typedef int amdtp_stream_process_ctx_payloads_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdtp_stream*,struct fw_unit*,int,int,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct amdtp_stream *VAR_4, struct fw_unit *VAR_5,
       enum amdtp_stream_direction VAR_6, enum cip_flags VAR_7)
{
 amdtp_stream_process_ctx_payloads_t VAR_8;

 if (VAR_6 == VAR_0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_1,
   VAR_8, sizeof(struct amdtp_am824));
}
