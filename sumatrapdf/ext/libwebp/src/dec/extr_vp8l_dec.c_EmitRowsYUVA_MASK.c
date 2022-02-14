
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int last_out_row_; int output_; } ;
typedef TYPE_1__ VP8LDecoder ;


 int FUNC_0 (int const*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(const VP8LDecoder* const VAR_0,
                        const uint8_t* VAR_1, int VAR_2,
                        int VAR_3, int VAR_4) {
  int VAR_5 = VAR_0->last_out_row_;
  while (VAR_4-- > 0) {
    FUNC_0((const uint32_t*)VAR_1, VAR_3, VAR_5, VAR_0->output_);
    VAR_1 += VAR_2;
    ++VAR_5;
  }
  return VAR_5;
}
