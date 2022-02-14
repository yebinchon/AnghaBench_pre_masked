
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {size_t distance; int pos; scalar_t__* history; } ;
typedef TYPE_1__ lzma_coder ;



__attribute__((used)) static void
FUNC_0(lzma_coder *VAR_0,
  const uint8_t *restrict VAR_1, uint8_t *restrict VAR_2, size_t VAR_3)
{
 const size_t VAR_4 = VAR_0->distance;

 for (size_t VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  const uint8_t VAR_6 = VAR_0->history[
    (VAR_4 + VAR_0->pos) & 0xFF];
  VAR_0->history[VAR_0->pos-- & 0xFF] = VAR_1[VAR_5];
  VAR_2[VAR_5] = VAR_1[VAR_5] - VAR_6;
 }
}
