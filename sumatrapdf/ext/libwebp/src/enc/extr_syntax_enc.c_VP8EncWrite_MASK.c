
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {scalar_t__ (* writer ) (int const* const,size_t const,TYPE_1__* const) ;} ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_15__ {int const num_parts_; int percent_; int alpha_data_size_; int coded_size_; int * const parts_; scalar_t__ has_alpha_; int bw_; TYPE_1__* pic_; } ;
typedef TYPE_2__ VP8Encoder ;
typedef int VP8BitWriter ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__* const,TYPE_1__* const) ;
 int FUNC_1 (TYPE_2__* const) ;
 scalar_t__ FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (TYPE_1__* const) ;
 scalar_t__ FUNC_4 (TYPE_2__* const,size_t const,size_t,size_t) ;
 size_t VAR_1 ;
 int * FUNC_5 (int * const) ;
 size_t FUNC_6 (int * const) ;
 int FUNC_7 (int * const) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__* const,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__* const,int const,int const*) ;
 scalar_t__ FUNC_10 (int const* const,size_t const,TYPE_1__* const) ;
 scalar_t__ FUNC_11 (int const* const,size_t const,TYPE_1__* const) ;

int FUNC_12(VP8Encoder* const VAR_5) {
  WebPPicture* const VAR_6 = VAR_5->pic_;
  VP8BitWriter* const VAR_7 = &VAR_5->bw_;
  const int VAR_8 = 19;
  const int VAR_9 = VAR_8 / VAR_5->num_parts_;
  const int VAR_10 = VAR_5->percent_ + VAR_8;
  int VAR_11 = 0;
  size_t VAR_12, VAR_13, VAR_14;
  int VAR_15;


  VAR_11 = FUNC_1(VAR_5);
  if (!VAR_11) return 0;


  VAR_12 = VAR_4 +
             FUNC_6(VAR_7) +
             3 * (VAR_5->num_parts_ - 1);
  for (VAR_15 = 0; VAR_15 < VAR_5->num_parts_; ++VAR_15) {
    VAR_12 += FUNC_6(VAR_5->parts_ + VAR_15);
  }
  VAR_13 = VAR_12 & 1;
  VAR_12 += VAR_13;



  VAR_14 = VAR_1 + VAR_0 + VAR_12;
  if (FUNC_2(VAR_5)) {
    VAR_14 += VAR_0 + VAR_2;
  }
  if (VAR_5->has_alpha_) {
    const uint32_t VAR_16 = VAR_5->alpha_data_size_ +
                                       (VAR_5->alpha_data_size_ & 1);
    VAR_14 += VAR_0 + VAR_16;
  }

  if (VAR_14 > 0xfffffffeU) {
    return FUNC_8(VAR_6, VAR_3);
  }


  {
    const uint8_t* const VAR_17 = FUNC_5(VAR_7);
    const size_t VAR_18 = FUNC_6(VAR_7);
    VAR_11 = VAR_11 && FUNC_4(VAR_5, VAR_18, VAR_12, VAR_14)
            && VAR_6->writer(VAR_17, VAR_18, VAR_6)
            && FUNC_0(VAR_5, VAR_6);
    FUNC_7(VAR_7);
  }


  for (VAR_15 = 0; VAR_15 < VAR_5->num_parts_; ++VAR_15) {
    const uint8_t* const VAR_19 = FUNC_5(VAR_5->parts_ + VAR_15);
    const size_t VAR_20 = FUNC_6(VAR_5->parts_ + VAR_15);
    if (VAR_20) VAR_11 = VAR_11 && VAR_6->writer(VAR_19, VAR_20, VAR_6);
    FUNC_7(VAR_5->parts_ + VAR_15);
    VAR_11 = VAR_11 && FUNC_9(VAR_6, VAR_5->percent_ + VAR_9,
                                  &VAR_5->percent_);
  }


  if (VAR_11 && VAR_13) {
    VAR_11 = FUNC_3(VAR_6);
  }

  VAR_5->coded_size_ = (int)(VAR_0 + VAR_14);
  VAR_11 = VAR_11 && FUNC_9(VAR_6, VAR_10, &VAR_5->percent_);
  return VAR_11;
}
