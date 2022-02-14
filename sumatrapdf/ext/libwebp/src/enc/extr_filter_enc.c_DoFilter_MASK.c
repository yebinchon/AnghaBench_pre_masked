
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int simple_; } ;
struct TYPE_8__ {TYPE_2__ filter_hdr_; TYPE_1__* config_; } ;
typedef TYPE_3__ VP8Encoder ;
struct TYPE_9__ {int yuv_out_; int * yuv_out2_; TYPE_3__* enc_; } ;
typedef TYPE_4__ VP8EncIterator ;
struct TYPE_6__ {int filter_sharpness; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int * const,int ,int const,int const,int const) ;
 int FUNC_2 (int * const,int * const,int ,int const,int const,int const) ;
 int FUNC_3 (int * const,int ,int const) ;
 int FUNC_4 (int * const,int ,int const) ;
 int FUNC_5 (int * const,int ,int const,int const,int const) ;
 int FUNC_6 (int * const,int * const,int ,int const,int const,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int * const,int ,int) ;

__attribute__((used)) static void FUNC_8(const VP8EncIterator* const VAR_5, int VAR_6) {
  const VP8Encoder* const VAR_7 = VAR_5->enc_;
  const int VAR_8 = FUNC_0(VAR_7->config_->filter_sharpness, VAR_6);
  const int VAR_9 = 2 * VAR_6 + VAR_8;

  uint8_t* const VAR_10 = VAR_5->yuv_out2_ + VAR_4;
  uint8_t* const VAR_11 = VAR_5->yuv_out2_ + VAR_1;
  uint8_t* const VAR_12 = VAR_5->yuv_out2_ + VAR_2;


  FUNC_7(VAR_10, VAR_5->yuv_out_, VAR_3 * sizeof(uint8_t));

  if (VAR_7->filter_hdr_.simple_ == 1) {
    FUNC_3(VAR_10, VAR_0, VAR_9);
    FUNC_4(VAR_10, VAR_0, VAR_9);
  } else {
    const int VAR_13 = (VAR_6 >= 40) ? 2 : (VAR_6 >= 15) ? 1 : 0;
    FUNC_1(VAR_10, VAR_0, VAR_9, VAR_8, VAR_13);
    FUNC_2(VAR_11, VAR_12, VAR_0, VAR_9, VAR_8, VAR_13);
    FUNC_5(VAR_10, VAR_0, VAR_9, VAR_8, VAR_13);
    FUNC_6(VAR_11, VAR_12, VAR_0, VAR_9, VAR_8, VAR_13);
  }
}
