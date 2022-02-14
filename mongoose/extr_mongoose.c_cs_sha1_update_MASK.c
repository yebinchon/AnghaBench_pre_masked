
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ cs_sha1_ctx ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,int) ;

void FUNC_2(cs_sha1_ctx *VAR_0, const unsigned char *VAR_1,
                    uint32_t VAR_2) {
  uint32_t VAR_3, VAR_4;

  VAR_4 = VAR_0->count[0];
  if ((VAR_0->count[0] += VAR_2 << 3) < VAR_4) VAR_0->count[1]++;
  VAR_0->count[1] += (VAR_2 >> 29);
  VAR_4 = (VAR_4 >> 3) & 63;
  if ((VAR_4 + VAR_2) > 63) {
    FUNC_1(&VAR_0->buffer[VAR_4], VAR_1, (VAR_3 = 64 - VAR_4));
    FUNC_0(VAR_0->state, VAR_0->buffer);
    for (; VAR_3 + 63 < VAR_2; VAR_3 += 64) {
      FUNC_0(VAR_0->state, &VAR_1[VAR_3]);
    }
    VAR_4 = 0;
  } else
    VAR_3 = 0;
  FUNC_1(&VAR_0->buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
