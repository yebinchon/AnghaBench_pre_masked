
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {unsigned int* state; } ;
typedef TYPE_1__ PHP_SNEFRU_CTX ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int*,int) ;

__attribute__((used)) static inline void FUNC_2(PHP_SNEFRU_CTX *VAR_0, const unsigned char VAR_1[32])
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 32; VAR_2 += 4, ++VAR_3) {
  VAR_0->state[8+VAR_3] = ((unsigned)VAR_1[VAR_2] << 24) | ((unsigned)VAR_1[VAR_2+1] << 16) |
        ((unsigned)VAR_1[VAR_2+2] << 8) | (unsigned)VAR_1[VAR_2+3];
 }
 FUNC_0(VAR_0->state);
 FUNC_1(&VAR_0->state[8], sizeof(uint32_t) * 8);
}
