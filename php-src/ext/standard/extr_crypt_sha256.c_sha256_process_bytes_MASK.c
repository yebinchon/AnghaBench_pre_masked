
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct sha256_ctx {size_t buflen; void const* buffer; } ;


 scalar_t__ FUNC_0 (void const*) ;
 void const* FUNC_1 (void const*,void const*,size_t) ;
 int FUNC_2 (void const*,int,struct sha256_ctx*) ;

__attribute__((used)) static void FUNC_3(const void *VAR_0, size_t VAR_1, struct sha256_ctx *VAR_2) {


 if (VAR_2->buflen != 0) {
  size_t VAR_3 = VAR_2->buflen;
  size_t VAR_4 = 128 - VAR_3 > VAR_1 ? VAR_1 : 128 - VAR_3;

    FUNC_1(&VAR_2->buffer[VAR_3], VAR_0, VAR_4);
    VAR_2->buflen += (uint32_t)VAR_4;

  if (VAR_2->buflen > 64) {
   FUNC_2(VAR_2->buffer, VAR_2->buflen & ~63, VAR_2);
   VAR_2->buflen &= 63;

   FUNC_1(VAR_2->buffer, &VAR_2->buffer[(VAR_3 + VAR_4) & ~63], VAR_2->buflen);
  }

  VAR_0 = (const char *) VAR_0 + VAR_4;
  VAR_1 -= VAR_4;
 }


 if (VAR_1 >= 64) {







  if ((((uintptr_t) VAR_0) % __alignof__ (uint32_t) != 0))
   while (VAR_1 > 64) {
    FUNC_2(FUNC_1(VAR_2->buffer, VAR_0, 64), 64, VAR_2);
    VAR_0 = (const char *) VAR_0 + 64;
    VAR_1 -= 64;
   } else {
    FUNC_2(VAR_0, VAR_1 & ~63, VAR_2);
    VAR_0 = (const char *) VAR_0 + (VAR_1 & ~63);
    VAR_1 &= 63;
   }
 }


 if (VAR_1 > 0) {
  size_t VAR_5 = VAR_2->buflen;

  FUNC_1(&VAR_2->buffer[VAR_5], VAR_0, VAR_1);
  VAR_5 += VAR_1;
  if (VAR_5 >= 64) {
   FUNC_2(VAR_2->buffer, 64, VAR_2);
   VAR_5 -= 64;
   FUNC_1(VAR_2->buffer, &VAR_2->buffer[64], VAR_5);
  }
  VAR_2->buflen = (uint32_t)VAR_5;
 }
}
