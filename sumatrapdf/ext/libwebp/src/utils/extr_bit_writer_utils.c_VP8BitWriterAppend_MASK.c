
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int nb_bits_; scalar_t__ pos_; scalar_t__ buf_; } ;
typedef TYPE_1__ VP8BitWriter ;


 int FUNC_0 (TYPE_1__* const,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int const*,size_t) ;

int FUNC_3(VP8BitWriter* const VAR_0,
                       const uint8_t* VAR_1, size_t VAR_2) {
  FUNC_1(VAR_1 != ((void*)0));
  if (VAR_0->nb_bits_ != -8) return 0;
  if (!FUNC_0(VAR_0, VAR_2)) return 0;
  FUNC_2(VAR_0->buf_ + VAR_0->pos_, VAR_1, VAR_2);
  VAR_0->pos_ += VAR_2;
  return 1;
}
