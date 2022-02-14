
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int sse_count_; int * sse_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_5__ {int * yuv_out_; int * yuv_in_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const* const,int const* const) ;
 scalar_t__ FUNC_1 (int const* const,int const* const) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(const VP8EncIterator* const VAR_3) {
  VP8Encoder* const VAR_4 = VAR_3->enc_;
  const uint8_t* const VAR_5 = VAR_3->yuv_in_;
  const uint8_t* const VAR_6 = VAR_3->yuv_out_;

  VAR_4->sse_[0] += FUNC_0(VAR_5 + VAR_2, VAR_6 + VAR_2);
  VAR_4->sse_[1] += FUNC_1(VAR_5 + VAR_0, VAR_6 + VAR_0);
  VAR_4->sse_[2] += FUNC_1(VAR_5 + VAR_1, VAR_6 + VAR_1);
  VAR_4->sse_count_ += 16 * 16;
}
