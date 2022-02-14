
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int last_syt_offset; unsigned int syt_offset_state; scalar_t__ transfer_delay; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {TYPE_2__ ctx_data; int sfc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct amdtp_stream *VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_3->ctx_data.rx.last_syt_offset < VAR_2) {
  if (!FUNC_0(VAR_3->sfc))
   VAR_5 = VAR_3->ctx_data.rx.last_syt_offset +
         VAR_3->ctx_data.rx.syt_offset_state;
  else {
   VAR_6 = VAR_3->ctx_data.rx.syt_offset_state;
   VAR_7 = VAR_6 % 13;
   VAR_5 = VAR_3->ctx_data.rx.last_syt_offset;
   VAR_5 += 1386 + ((VAR_7 && !(VAR_7 & 3)) ||
           VAR_6 == 146);
   if (++VAR_6 >= 147)
    VAR_6 = 0;
   VAR_3->ctx_data.rx.syt_offset_state = VAR_6;
  }
 } else
  VAR_5 = VAR_3->ctx_data.rx.last_syt_offset - VAR_2;
 VAR_3->ctx_data.rx.last_syt_offset = VAR_5;

 if (VAR_5 < VAR_2) {
  VAR_5 += VAR_3->ctx_data.rx.transfer_delay;
  VAR_8 = (VAR_4 + VAR_5 / VAR_2) << 12;
  VAR_8 += VAR_5 % VAR_2;

  return VAR_8 & VAR_0;
 } else {
  return VAR_1;
 }
}
