
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int palette_code_bits_; int * literal_; } ;
typedef TYPE_1__ VP8LHistogram ;


 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__* const,int ,int const) ;

__attribute__((used)) static void FUNC_2(VP8LHistogram* const VAR_0) {
  uint32_t* const VAR_1 = VAR_0->literal_;
  const int VAR_2 = VAR_0->palette_code_bits_;
  const int VAR_3 = FUNC_0(VAR_2);
  FUNC_1(VAR_0, 0, VAR_3);
  VAR_0->palette_code_bits_ = VAR_2;
  VAR_0->literal_ = VAR_1;
}
