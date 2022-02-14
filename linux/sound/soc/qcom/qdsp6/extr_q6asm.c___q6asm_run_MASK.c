
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct audio_client {int adev; int stream_id; } ;
struct asm_session_cmd_run_v2 {void* time_msw; void* time_lsw; void* flags; } ;
struct TYPE_2__ {int opcode; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (struct apr_pkt*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct audio_client*,struct apr_pkt*) ;
 int FUNC_4 (struct audio_client*,TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct audio_client *VAR_4, uint32_t VAR_5,
       uint32_t VAR_6, uint32_t VAR_7, bool VAR_8)
{
 struct asm_session_cmd_run_v2 *VAR_9;
 struct apr_pkt *VAR_10;
 int VAR_11, VAR_12;
 void *VAR_13;

 VAR_11 = VAR_0 + sizeof(*VAR_9);
 VAR_13 = FUNC_2(VAR_11, VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_10 = VAR_13;
 VAR_9 = VAR_13 + VAR_0;

 FUNC_4(VAR_4, &VAR_10->hdr, VAR_11, 1, VAR_4->stream_id);

 VAR_10->hdr.opcode = VAR_1;
 VAR_9->flags = VAR_5;
 VAR_9->time_lsw = VAR_7;
 VAR_9->time_msw = VAR_6;
 if (VAR_8) {
  VAR_12 = FUNC_3(VAR_4, VAR_10);
 } else {
  VAR_12 = FUNC_0(VAR_4->adev, VAR_10);
  if (VAR_12 == VAR_11)
   VAR_12 = 0;
 }

 FUNC_1(VAR_10);
 return VAR_12;
}
