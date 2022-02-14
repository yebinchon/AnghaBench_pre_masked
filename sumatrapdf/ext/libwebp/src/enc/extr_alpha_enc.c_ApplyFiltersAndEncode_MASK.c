
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int lossless_data_size; int lossless_hdr_size; int lossless_size; int palette_size; int cache_bits; int transform_bits; int histogram_bits; int lossless_features; } ;
typedef TYPE_2__ WebPAuxStats ;
struct TYPE_7__ {int lossless_data_size; int lossless_hdr_size; int lossless_size; int palette_size; int cache_bits; int transform_bits; int histogram_bits; int lossless_features; } ;
struct TYPE_9__ {scalar_t__ score; int bw; TYPE_1__ stats; } ;
typedef TYPE_3__ FilterTrial ;


 int FUNC_0 (int const*,int,int,int,int,int,int,int *,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int const*,int,int,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned long long,size_t) ;

__attribute__((used)) static int FUNC_8(const uint8_t* VAR_2, int VAR_3, int VAR_4,
                                 size_t VAR_5, int VAR_6, int VAR_7,
                                 int VAR_8, int VAR_9,
                                 uint8_t** const VAR_10,
                                 size_t* const VAR_11,
                                 WebPAuxStats* const VAR_12) {
  int VAR_13 = 1;
  FilterTrial VAR_14;
  uint32_t VAR_15 =
      FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_9);
  FUNC_2(&VAR_14);

  if (VAR_15 != VAR_0) {
    uint8_t* VAR_16 = (uint8_t*)FUNC_7(1ULL, VAR_5);
    if (VAR_16 == ((void*)0)) return 0;

    for (VAR_7 = VAR_1; VAR_13 && VAR_15; ++VAR_7, VAR_15 >>= 1) {
      if (VAR_15 & 1) {
        FilterTrial VAR_17;
        VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7,
                                 VAR_8, VAR_9, VAR_16,
                                 &VAR_17);
        if (VAR_13 && VAR_17.score < VAR_14.score) {
          FUNC_5(&VAR_14.bw);
          VAR_14 = VAR_17;
        } else {
          FUNC_5(&VAR_17.bw);
        }
      }
    }
    FUNC_6(VAR_16);
  } else {
    VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_1,
                             VAR_8, VAR_9, ((void*)0), &VAR_14);
  }
  if (VAR_13) {

    if (VAR_12 != ((void*)0)) {
      VAR_12->lossless_features = VAR_14.stats.lossless_features;
      VAR_12->histogram_bits = VAR_14.stats.histogram_bits;
      VAR_12->transform_bits = VAR_14.stats.transform_bits;
      VAR_12->cache_bits = VAR_14.stats.cache_bits;
      VAR_12->palette_size = VAR_14.stats.palette_size;
      VAR_12->lossless_size = VAR_14.stats.lossless_size;
      VAR_12->lossless_hdr_size = VAR_14.stats.lossless_hdr_size;
      VAR_12->lossless_data_size = VAR_14.stats.lossless_data_size;
    }



    *VAR_11 = FUNC_4(&VAR_14.bw);
    *VAR_10 = FUNC_3(&VAR_14.bw);
  } else {
    FUNC_5(&VAR_14.bw);
  }
  return VAR_13;
}
