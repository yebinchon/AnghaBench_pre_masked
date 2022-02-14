
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int range_; int bits_; scalar_t__ eof_; scalar_t__ value_; } ;
typedef TYPE_1__ VP8BitReader ;


 int FUNC_0 (TYPE_1__* const,int const* const,size_t) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (int) ;

void FUNC_3(VP8BitReader* const VAR_0,
                      const uint8_t* const VAR_1, size_t VAR_2) {
  FUNC_2(VAR_0 != ((void*)0));
  FUNC_2(VAR_1 != ((void*)0));
  FUNC_2(VAR_2 < (1u << 31));
  VAR_0->range_ = 255 - 1;
  VAR_0->value_ = 0;
  VAR_0->bits_ = -8;
  VAR_0->eof_ = 0;
  FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_1(VAR_0);
}
