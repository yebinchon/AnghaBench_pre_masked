
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bytecount; unsigned char* buf; } ;
typedef TYPE_1__ SUM_CONTEXT ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*) ;

__attribute__((used)) static void FUNC_3(SUM_CONTEXT *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->bytecount & 0x3f;


 VAR_0->bytecount += VAR_2;


 if (VAR_3) {
  unsigned char *VAR_4 = VAR_0->buf + VAR_3;

  VAR_3 = 64 - VAR_3;
  if (VAR_2 < VAR_3) {
   FUNC_1(VAR_4, VAR_1, VAR_2);
   return;
  }
  FUNC_1(VAR_4, VAR_1, VAR_3);
  FUNC_2(VAR_0, VAR_0->buf);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }


 while (VAR_2 >= 64) {
  FUNC_0(VAR_1 + 64);
  FUNC_2(VAR_0, VAR_1);
  VAR_1 += 64;
  VAR_2 -= 64;
 }


 FUNC_1(VAR_0->buf, VAR_1, VAR_2);
}
