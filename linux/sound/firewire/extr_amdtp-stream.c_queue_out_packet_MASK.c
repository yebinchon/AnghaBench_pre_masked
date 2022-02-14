
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_packet {int skip; scalar_t__ header_length; scalar_t__ payload_length; } ;
struct amdtp_stream {int dummy; } ;


 int FUNC_0 (struct amdtp_stream*,struct fw_iso_packet*) ;

__attribute__((used)) static inline int FUNC_1(struct amdtp_stream *VAR_0,
       struct fw_iso_packet *VAR_1)
{
 VAR_1->skip =
  !!(VAR_1->header_length == 0 && VAR_1->payload_length == 0);
 return FUNC_0(VAR_0, VAR_1);
}
