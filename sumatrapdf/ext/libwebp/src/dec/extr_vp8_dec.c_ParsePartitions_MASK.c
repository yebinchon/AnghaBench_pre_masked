
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VP8StatusCode ;
struct TYPE_3__ {int num_parts_minus_one_; scalar_t__ parts_; int br_; } ;
typedef TYPE_1__ VP8Decoder ;
typedef int VP8BitReader ;


 int FUNC_0 (int * const,int,char*) ;
 int FUNC_1 (scalar_t__,int const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VP8StatusCode FUNC_2(VP8Decoder* const VAR_3,
                                     const uint8_t* VAR_4, size_t VAR_5) {
  VP8BitReader* const VAR_6 = &VAR_3->br_;
  const uint8_t* VAR_7 = VAR_4;
  const uint8_t* VAR_8 = VAR_4 + VAR_5;
  const uint8_t* VAR_9;
  size_t VAR_10 = VAR_5;
  size_t VAR_11;
  size_t VAR_12;

  VAR_3->num_parts_minus_one_ = (1 << FUNC_0(VAR_6, 2, "global-header")) - 1;
  VAR_11 = VAR_3->num_parts_minus_one_;
  if (VAR_5 < 3 * VAR_11) {

    return VAR_0;
  }
  VAR_9 = VAR_4 + VAR_11 * 3;
  VAR_10 -= VAR_11 * 3;
  for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
    size_t VAR_13 = VAR_7[0] | (VAR_7[1] << 8) | (VAR_7[2] << 16);
    if (VAR_13 > VAR_10) VAR_13 = VAR_10;
    FUNC_1(VAR_3->parts_ + VAR_12, VAR_9, VAR_13);
    VAR_9 += VAR_13;
    VAR_10 -= VAR_13;
    VAR_7 += 3;
  }
  FUNC_1(VAR_3->parts_ + VAR_11, VAR_9, VAR_10);
  return (VAR_9 < VAR_8) ? VAR_1 :
           VAR_2;
}
