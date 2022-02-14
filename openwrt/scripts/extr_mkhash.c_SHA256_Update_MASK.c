
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int count; unsigned char const* buf; int state; } ;
typedef TYPE_1__ SHA256_CTX ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static void
FUNC_2(SHA256_CTX * VAR_0, const void *VAR_1, size_t VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4;
 const unsigned char *VAR_5 = VAR_1;


 VAR_4 = (VAR_0->count >> 3) & 0x3f;


 VAR_3 = VAR_2 << 3;


 VAR_0->count += VAR_3;


 if (VAR_2 < 64 - VAR_4) {
  FUNC_1(&VAR_0->buf[VAR_4], VAR_5, VAR_2);
  return;
 }


 FUNC_1(&VAR_0->buf[VAR_4], VAR_5, 64 - VAR_4);
 FUNC_0(VAR_0->state, VAR_0->buf);
 VAR_5 += 64 - VAR_4;
 VAR_2 -= 64 - VAR_4;


 while (VAR_2 >= 64) {
  FUNC_0(VAR_0->state, VAR_5);
  VAR_5 += 64;
  VAR_2 -= 64;
 }


 FUNC_1(VAR_0->buf, VAR_5, VAR_2);
}
