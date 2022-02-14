
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ transfer_delay; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {unsigned int sfc; unsigned int data_block_quadlets; unsigned int syt_interval; scalar_t__ direction; int flags; TYPE_2__ ctx_data; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;

int FUNC_1(struct amdtp_stream *VAR_8, unsigned int VAR_9,
    unsigned int VAR_10)
{
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); ++VAR_11) {
  if (VAR_6[VAR_11] == VAR_9)
   break;
 }
 if (VAR_11 == FUNC_0(VAR_6))
  return -VAR_2;

 VAR_8->sfc = VAR_11;
 VAR_8->data_block_quadlets = VAR_10;
 VAR_8->syt_interval = VAR_7[VAR_11];


 if (VAR_8->direction == VAR_0) {
  VAR_8->ctx_data.rx.transfer_delay =
     VAR_5 - VAR_3;

  if (VAR_8->flags & VAR_1) {


   VAR_8->ctx_data.rx.transfer_delay +=
    VAR_4 * VAR_8->syt_interval / VAR_9;
  }
 }

 return 0;
}
