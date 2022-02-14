
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_packet {unsigned int payload_length; int header_length; scalar_t__ header; } ;
struct amdtp_stream {unsigned int data_block_quadlets; int flags; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct amdtp_stream*,int *,unsigned int,unsigned int) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,int *,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct amdtp_stream *VAR_1, unsigned int VAR_2,
    struct fw_iso_packet *VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;
 __be32 *VAR_9;

 VAR_8 = VAR_4 * sizeof(__be32) * VAR_1->data_block_quadlets;
 VAR_3->payload_length = VAR_8;

 if (!(VAR_1->flags & VAR_0)) {
  VAR_9 = (__be32 *)VAR_3->header;
  FUNC_0(VAR_1, VAR_9, VAR_5, VAR_6);
  VAR_3->header_length = 2 * sizeof(__be32);
  VAR_8 += VAR_3->header_length;
 } else {
  VAR_9 = ((void*)0);
 }

 FUNC_1(VAR_1, VAR_2, VAR_9, VAR_8, VAR_4,
      VAR_5, VAR_7);
}
