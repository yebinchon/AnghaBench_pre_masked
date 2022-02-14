
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int* out; } ;
typedef TYPE_1__ Bitbuf ;



__attribute__((used)) static int FUNC_0(Bitbuf *VAR_0, int VAR_1) {
 if (VAR_1>=VAR_0->bits) return -1;
 return (VAR_0->out[VAR_1/8] & (1<<((VAR_1%8))))? 1: 0;
}
