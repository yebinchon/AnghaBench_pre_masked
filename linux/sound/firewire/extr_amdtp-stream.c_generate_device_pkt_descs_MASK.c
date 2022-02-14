
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pkt_desc {unsigned int cycle; unsigned int syt; unsigned int data_blocks; unsigned int data_block_counter; int ctx_payload; } ;
struct TYPE_7__ {int ctx_header_size; } ;
struct TYPE_8__ {TYPE_3__ tx; } ;
struct TYPE_6__ {TYPE_1__* packets; } ;
struct amdtp_stream {unsigned int data_block_counter; int packet_index; int flags; TYPE_4__ ctx_data; TYPE_2__ buffer; } ;
typedef int __be32 ;
struct TYPE_5__ {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int const) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,int const*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct amdtp_stream *VAR_2,
         struct pkt_desc *VAR_3,
         const __be32 *VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_2->data_block_counter;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  struct pkt_desc *VAR_9 = VAR_3 + VAR_7;
  unsigned int VAR_10 = (VAR_2->packet_index + VAR_7) % VAR_1;
  unsigned int VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  unsigned int VAR_14;

  VAR_11 = FUNC_0(VAR_4[1]);

  VAR_8 = FUNC_1(VAR_2, VAR_11, VAR_4, &VAR_12,
       &VAR_13, &VAR_6, &VAR_14, VAR_7);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9->cycle = VAR_11;
  VAR_9->syt = VAR_14;
  VAR_9->data_blocks = VAR_13;
  VAR_9->data_block_counter = VAR_6;
  VAR_9->ctx_payload = VAR_2->buffer.packets[VAR_10].buffer;

  if (!(VAR_2->flags & VAR_0))
   VAR_6 = (VAR_6 + VAR_9->data_blocks) & 0xff;

  VAR_4 +=
   VAR_2->ctx_data.tx.ctx_header_size / sizeof(*VAR_4);
 }

 VAR_2->data_block_counter = VAR_6;

 return 0;
}
