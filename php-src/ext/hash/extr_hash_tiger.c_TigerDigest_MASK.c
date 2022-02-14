
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ PHP_TIGER_CTX ;



__attribute__((used)) static inline void FUNC_0(unsigned char *VAR_0, unsigned int VAR_1, PHP_TIGER_CTX *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_0[VAR_3] = (unsigned char) ((VAR_2->state[VAR_3/8] >> (8 * (VAR_3%8))) & 0xff);
 }
}
