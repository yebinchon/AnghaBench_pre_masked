
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int data_block_state; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {int flags; unsigned int syt_interval; int sfc; TYPE_2__ ctx_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct amdtp_stream *VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;


 if (VAR_3->flags & VAR_0) {

  if (VAR_4 == VAR_2)
   VAR_6 = 0;
  else
   VAR_6 = VAR_3->syt_interval;

 } else {
  if (!FUNC_0(VAR_3->sfc)) {

   VAR_6 = VAR_3->ctx_data.rx.data_block_state;
  } else {
   VAR_5 = VAR_3->ctx_data.rx.data_block_state;
   if (VAR_3->sfc == VAR_1)

    VAR_6 = 5 + ((VAR_5 & 1) ^
         (VAR_5 == 0 || VAR_5 >= 40));
   else

    VAR_6 = 11 * (VAR_3->sfc >> 1) + (VAR_5 == 0);
   if (++VAR_5 >= (80 >> (VAR_3->sfc >> 1)))
    VAR_5 = 0;
   VAR_3->ctx_data.rx.data_block_state = VAR_5;
  }
 }

 return VAR_6;
}
