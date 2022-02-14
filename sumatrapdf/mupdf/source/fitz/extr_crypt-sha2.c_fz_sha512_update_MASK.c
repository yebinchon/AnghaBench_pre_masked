
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int u64; scalar_t__ u8; } ;
struct TYPE_5__ {int* count; TYPE_1__ buffer; int state; } ;
typedef TYPE_2__ fz_sha512 ;


 int FUNC_0 (scalar_t__,unsigned char const*,unsigned int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(fz_sha512 *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{




 while (VAR_2 > 0)
 {
  const unsigned int VAR_3 = VAR_0->count[0] & 0x7F;
  unsigned int VAR_4 = 128 - VAR_3;
  if (VAR_4 > VAR_2)
   VAR_4 = (unsigned int)VAR_2;

  FUNC_0(VAR_0->buffer.u8 + VAR_3, VAR_1, VAR_4);

  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
  VAR_0->count[0] += VAR_4;

  if (VAR_0->count[0] < VAR_4)
   VAR_0->count[1]++;

  if ((VAR_0->count[0] & 0x7F) == 0)
   FUNC_1(VAR_0->state, VAR_0->buffer.u64);
 }
}
