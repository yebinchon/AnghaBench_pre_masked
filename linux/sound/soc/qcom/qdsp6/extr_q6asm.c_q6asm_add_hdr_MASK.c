
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct audio_client {int session; } ;
struct apr_hdr {int src_port; int dest_port; int pkt_size; int token; int hdr_field; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct audio_client *VAR_1, struct apr_hdr *VAR_2,
     uint32_t VAR_3, bool VAR_4,
     uint32_t VAR_5)
{
 VAR_2->hdr_field = VAR_0;
 VAR_2->src_port = ((VAR_1->session << 8) & 0xFF00) | (VAR_5);
 VAR_2->dest_port = ((VAR_1->session << 8) & 0xFF00) | (VAR_5);
 VAR_2->pkt_size = VAR_3;
 if (VAR_4)
  VAR_2->token = VAR_1->session;
}
