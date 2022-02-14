
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int curlen; unsigned char* buf; int* state; } ;
struct hash_state {TYPE_1__ sha512; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (struct hash_state*,unsigned char*) ;

__attribute__((used)) static void FUNC_3(struct hash_state * VAR_0, unsigned char *VAR_1)
{
 int VAR_2;


 VAR_0->sha512.length += VAR_0->sha512.curlen * FUNC_0(8);


 VAR_0->sha512.buf[VAR_0->sha512.curlen++] = (unsigned char)0x80;




 if (VAR_0->sha512.curlen > 112) {
  while (VAR_0->sha512.curlen < 128) {
   VAR_0->sha512.buf[VAR_0->sha512.curlen++] = (unsigned char)0;
  }
  FUNC_2(VAR_0, VAR_0->sha512.buf);
  VAR_0->sha512.curlen = 0;
 }



 while (VAR_0->sha512.curlen < 120) {
  VAR_0->sha512.buf[VAR_0->sha512.curlen++] = (unsigned char)0;
 }


 FUNC_1(VAR_0->sha512.length, VAR_0->sha512.buf + 120);
 FUNC_2(VAR_0, VAR_0->sha512.buf);


 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  FUNC_1(VAR_0->sha512.state[VAR_2], VAR_1+(8 * VAR_2));
 }
}
