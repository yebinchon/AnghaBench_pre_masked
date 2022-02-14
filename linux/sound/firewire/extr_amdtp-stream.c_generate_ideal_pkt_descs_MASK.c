
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pkt_desc {unsigned int data_blocks; unsigned int data_block_counter; int ctx_payload; int syt; int cycle; } ;
struct TYPE_4__ {TYPE_1__* packets; } ;
struct amdtp_stream {unsigned int data_block_counter; int packet_index; int flags; TYPE_2__ buffer; } ;
typedef int __be32 ;
struct TYPE_3__ {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct amdtp_stream*,int ) ;
 int FUNC_1 (struct amdtp_stream*,int ) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static void FUNC_3(struct amdtp_stream *VAR_2,
         struct pkt_desc *VAR_3,
         const __be32 *VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_2->data_block_counter;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  struct pkt_desc *VAR_8 = VAR_3 + VAR_7;
  unsigned int VAR_9 = (VAR_2->packet_index + VAR_7) % VAR_1;

  VAR_8->cycle = FUNC_2(*VAR_4);
  VAR_8->syt = FUNC_1(VAR_2, VAR_8->cycle);
  VAR_8->data_blocks = FUNC_0(VAR_2, VAR_8->syt);

  if (VAR_2->flags & VAR_0)
   VAR_6 = (VAR_6 + VAR_8->data_blocks) & 0xff;

  VAR_8->data_block_counter = VAR_6;

  if (!(VAR_2->flags & VAR_0))
   VAR_6 = (VAR_6 + VAR_8->data_blocks) & 0xff;

  VAR_8->ctx_payload = VAR_2->buffer.packets[VAR_9].buffer;

  ++VAR_4;
 }

 VAR_2->data_block_counter = VAR_6;
}
