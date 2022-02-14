
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {unsigned char* in; } ;
struct TYPE_5__ {int* bits; TYPE_1__ u; int buf; } ;
typedef TYPE_2__ MD5Context ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned int) ;

__attribute__((used)) static
void FUNC_3(MD5Context *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2){
  uint32 VAR_3;



  VAR_3 = VAR_0->bits[0];
  if ((VAR_0->bits[0] = VAR_3 + ((uint32)VAR_2 << 3)) < VAR_3)
    VAR_0->bits[1]++;
  VAR_0->bits[1] += VAR_2 >> 29;

  VAR_3 = (VAR_3 >> 3) & 0x3f;



  if ( VAR_3 ) {
    unsigned char *VAR_4 = (unsigned char *)VAR_0->u.in + VAR_3;

    VAR_3 = 64-VAR_3;
    if (VAR_2 < VAR_3) {
      FUNC_2(VAR_4, VAR_1, VAR_2);
      return;
    }
    FUNC_2(VAR_4, VAR_1, VAR_3);
    FUNC_1(VAR_0->u.in, 16);
    FUNC_0(VAR_0->buf, (uint32 *)VAR_0->u.in);
    VAR_1 += VAR_3;
    VAR_2 -= VAR_3;
  }



  while (VAR_2 >= 64) {
    FUNC_2(VAR_0->u.in, VAR_1, 64);
    FUNC_1(VAR_0->u.in, 16);
    FUNC_0(VAR_0->buf, (uint32 *)VAR_0->u.in);
    VAR_1 += 64;
    VAR_2 -= 64;
  }



  FUNC_2(VAR_0->u.in, VAR_1, VAR_2);
}
