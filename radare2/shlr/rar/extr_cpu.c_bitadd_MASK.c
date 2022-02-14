
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int* out; } ;
typedef TYPE_1__ Bitbuf ;



__attribute__((used)) static void FUNC_0(Bitbuf *VAR_0, unsigned int VAR_1, int VAR_2) {
 int VAR_3, VAR_4, VAR_5;
 for (VAR_3=0; VAR_3<VAR_2; VAR_3++, VAR_0->bits++) {
  VAR_4 = (VAR_0->bits+VAR_3)/8;
  VAR_5 = (VAR_0->bits+VAR_3)%8;

  if (!VAR_5) VAR_0->out[VAR_4] = 0;


  if (VAR_1&(1<<(VAR_2-VAR_3-1))) VAR_0->out[VAR_4] |= 1<<VAR_5;

 }

}
