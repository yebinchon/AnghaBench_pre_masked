
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long curlen; unsigned long length; unsigned char const* buf; } ;
struct hash_state {TYPE_1__ sha512; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_2 (struct hash_state*,unsigned char const*) ;

__attribute__((used)) static void FUNC_3(struct hash_state * VAR_1,
      const unsigned char *VAR_2,
      unsigned long VAR_3)
{
 unsigned long VAR_4;

 while (VAR_3 > 0) {
  if (VAR_1->sha512.curlen == 0 && VAR_3 >= VAR_0) {
   FUNC_2(VAR_1, VAR_2);
   VAR_1->sha512.length += VAR_0 * 8;
   VAR_2 += VAR_0;
   VAR_3 -= VAR_0;
  } else {
   VAR_4 = FUNC_0(VAR_3, (VAR_0 - VAR_1->sha512.curlen));
   FUNC_1(VAR_1->sha512.buf + VAR_1->sha512.curlen,
          VAR_2, (size_t)VAR_4);
   VAR_1->sha512.curlen += VAR_4;
   VAR_2 += VAR_4;
   VAR_3 -= VAR_4;
   if (VAR_1->sha512.curlen == VAR_0) {
    FUNC_2(VAR_1, VAR_1->sha512.buf);
    VAR_1->sha512.length += VAR_0 * 8;
    VAR_1->sha512.curlen = 0;
   }
  }
 }
}
