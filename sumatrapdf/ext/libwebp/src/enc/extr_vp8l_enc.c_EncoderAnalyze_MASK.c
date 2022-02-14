
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; int argb_stride; int * argb; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_9__ {int method; int quality; } ;
typedef TYPE_2__ WebPConfig ;
struct TYPE_10__ {int palette_size_; int transform_bits_; int histo_bits_; int palette_; TYPE_2__* config_; TYPE_1__* pic_; } ;
typedef TYPE_3__ VP8LEncoder ;
struct TYPE_11__ {int entropy_idx_; int* lz77s_types_to_try_; int lz77s_types_to_try_size_; } ;
typedef int EntropyIx ;
typedef TYPE_4__ CrunchConfig ;


 int FUNC_0 (TYPE_1__ const* const,int const,int ,int*) ;
 int FUNC_1 (int *,int const,int const,int ,int,int,int ,int*,int* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const,int,int,int) ;
 int FUNC_3 (int const,int ) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(VP8LEncoder* const VAR_8,
                          CrunchConfig VAR_9[VAR_1],
                          int* const VAR_10,
                          int* const VAR_11) {
  const WebPPicture* const VAR_12 = VAR_8->pic_;
  const int VAR_13 = VAR_12->width;
  const int VAR_14 = VAR_12->height;
  const WebPConfig* const VAR_15 = VAR_8->config_;
  const int VAR_16 = VAR_15->method;
  const int VAR_17 = (VAR_15->method == 0);
  int VAR_18;
  int VAR_19;
  int VAR_20;
  FUNC_4(VAR_12 != ((void*)0) && VAR_12->argb != ((void*)0));

  VAR_19 =
      FUNC_0(VAR_12, VAR_17,
                              VAR_8->palette_, &VAR_8->palette_size_);


  VAR_8->histo_bits_ = FUNC_2(VAR_16, VAR_19,
                                  VAR_12->width, VAR_12->height);
  VAR_8->transform_bits_ = FUNC_3(VAR_16, VAR_8->histo_bits_);

  if (VAR_17) {

    VAR_9[0].entropy_idx_ = VAR_19 ? VAR_6 : VAR_7;
    VAR_20 = 1;
    *VAR_10 = 1;
  } else {
    EntropyIx VAR_21;

    VAR_20 = (VAR_8->palette_size_ > 0 && VAR_8->palette_size_ <= 16) ? 2 : 1;
    if (!FUNC_1(VAR_12->argb, VAR_13, VAR_14, VAR_12->argb_stride, VAR_19,
                        VAR_8->palette_size_, VAR_8->transform_bits_,
                        &VAR_21, VAR_11)) {
      return 0;
    }
    if (VAR_16 == 6 && VAR_15->quality == 100) {

      *VAR_10 = 0;
      for (VAR_18 = 0; VAR_18 < VAR_5; ++VAR_18) {
        if (VAR_18 != VAR_6 || VAR_19) {
          FUNC_4(*VAR_10 < VAR_1);
          VAR_9[(*VAR_10)++].entropy_idx_ = VAR_18;
        }
      }
    } else {

      *VAR_10 = 1;
      VAR_9[0].entropy_idx_ = VAR_21;
    }
  }

  FUNC_4(VAR_20 <= VAR_0);
  for (VAR_18 = 0; VAR_18 < *VAR_10; ++VAR_18) {
    int VAR_22;
    for (VAR_22 = 0; VAR_22 < VAR_20; ++VAR_22) {
      VAR_9[VAR_18].lz77s_types_to_try_[VAR_22] =
          (VAR_22 == 0) ? VAR_4 | VAR_3 : VAR_2;
    }
    VAR_9[VAR_18].lz77s_types_to_try_size_ = VAR_20;
  }
  return 1;
}
