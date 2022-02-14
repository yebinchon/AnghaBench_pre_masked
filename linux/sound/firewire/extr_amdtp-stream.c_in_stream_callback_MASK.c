
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fw_iso_packet {int member_0; } ;
struct fw_iso_context {int dummy; } ;
struct TYPE_3__ {size_t ctx_header_size; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct amdtp_stream {scalar_t__ packet_index; int context; int pkt_descs; TYPE_2__ ctx_data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdtp_stream*,int ,int *,unsigned int) ;
 int FUNC_3 (struct amdtp_stream*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct amdtp_stream*,struct fw_iso_packet*) ;

__attribute__((used)) static void FUNC_5(struct fw_iso_context *VAR_1, u32 VAR_2,
          size_t VAR_3, void *VAR_4,
          void *VAR_5)
{
 struct amdtp_stream *VAR_6 = VAR_5;
 unsigned int VAR_7;
 __be32 *VAR_8 = VAR_4;
 int VAR_9;
 int VAR_10;

 if (VAR_6->packet_index < 0)
  return;


 VAR_7 = VAR_3 / VAR_6->ctx_data.tx.ctx_header_size;

 VAR_10 = FUNC_2(VAR_6, VAR_6->pkt_descs, VAR_8, VAR_7);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_0) {
   FUNC_0(VAR_6);
   return;
  }
 } else {
  FUNC_3(VAR_6, VAR_6->pkt_descs, VAR_7);
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
  struct fw_iso_packet VAR_11 = {0};

  if (FUNC_4(VAR_6, &VAR_11) < 0) {
   FUNC_0(VAR_6);
   return;
  }
 }

 FUNC_1(VAR_6->context);
}
