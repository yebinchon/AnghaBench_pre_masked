
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_iso_packet {int skip; int payload_length; int header_length; } ;
struct TYPE_3__ {int max_ctx_payload_length; int ctx_header_size; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct amdtp_stream {TYPE_2__ ctx_data; } ;


 int FUNC_0 (struct amdtp_stream*,struct fw_iso_packet*) ;

__attribute__((used)) static inline int FUNC_1(struct amdtp_stream *VAR_0,
      struct fw_iso_packet *VAR_1)
{

 VAR_1->header_length = VAR_0->ctx_data.tx.ctx_header_size;
 VAR_1->payload_length = VAR_0->ctx_data.tx.max_ctx_payload_length;
 VAR_1->skip = 0;
 return FUNC_0(VAR_0, VAR_1);
}
