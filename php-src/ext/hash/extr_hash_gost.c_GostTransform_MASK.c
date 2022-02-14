
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* state; } ;
typedef TYPE_1__ PHP_GOST_CTX ;


 int FUNC_0 (TYPE_1__*,int*) ;

__attribute__((used)) static inline void FUNC_1(PHP_GOST_CTX *VAR_0, const unsigned char VAR_1[32])
{
 int VAR_2, VAR_3;
 uint32_t VAR_4[8], VAR_5 = 0;

 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 8; ++VAR_2, VAR_3 += 4) {
  VAR_4[VAR_2] = ((uint32_t) VAR_1[VAR_3]) | (((uint32_t) VAR_1[VAR_3 + 1]) << 8) |
     (((uint32_t) VAR_1[VAR_3 + 2]) << 16) | (((uint32_t) VAR_1[VAR_3 + 3]) << 24);
  VAR_0->state[VAR_2 + 8] += VAR_4[VAR_2] + VAR_5;
  VAR_5 = VAR_0->state[VAR_2 + 8] < VAR_4[VAR_2] ? 1 : (VAR_0->state[VAR_2 + 8] == VAR_4[VAR_2] ? VAR_5 : 0);
 }

 FUNC_0(VAR_0, VAR_4);
}
