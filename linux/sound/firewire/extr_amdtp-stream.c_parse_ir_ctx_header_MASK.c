
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ctx_header_size; unsigned int max_ctx_payload_length; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;
struct amdtp_stream {int flags; unsigned int data_block_quadlets; TYPE_3__ ctx_data; TYPE_1__* unit; } ;
typedef int __be32 ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int const) ;
 int FUNC_1 (struct amdtp_stream*,int const*,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct amdtp_stream*,unsigned int,int const*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct amdtp_stream *VAR_4, unsigned int VAR_5,
          const __be32 *VAR_6,
          unsigned int *VAR_7,
          unsigned int *VAR_8,
          unsigned int *VAR_9,
          unsigned int *VAR_10, unsigned int VAR_11)
{
 const __be32 *VAR_12;
 int VAR_13;

 *VAR_7 = FUNC_0(VAR_6[0]) >> VAR_2;
 if (*VAR_7 > VAR_4->ctx_data.tx.ctx_header_size +
     VAR_4->ctx_data.tx.max_ctx_payload_length) {
  FUNC_2(&VAR_4->unit->device,
   "Detect jumbo payload: %04x %04x\n",
   *VAR_7, VAR_4->ctx_data.tx.max_ctx_payload_length);
  return -VAR_1;
 }

 if (!(VAR_4->flags & VAR_0)) {
  VAR_12 = VAR_6 + 2;
  VAR_13 = FUNC_1(VAR_4, VAR_12, *VAR_7,
           VAR_8, VAR_9, VAR_10);
  if (VAR_13 < 0)
   return VAR_13;
 } else {
  VAR_12 = ((void*)0);
  VAR_13 = 0;
  *VAR_8 = *VAR_7 / sizeof(__be32) /
          VAR_4->data_block_quadlets;
  *VAR_10 = 0;

  if (*VAR_9 == VAR_3)
   *VAR_9 = 0;
 }

 FUNC_3(VAR_4, VAR_5, VAR_12, *VAR_7, *VAR_8,
      *VAR_9, VAR_11);

 return VAR_13;
}
