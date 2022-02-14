
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ pos; int* key; } ;
typedef TYPE_1__ mt19937_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline uint32_t FUNC_1(mt19937_state *VAR_1) {
  uint32_t VAR_2;

  if (VAR_1->pos == VAR_0) {

    FUNC_0(VAR_1);
  }
  VAR_2 = VAR_1->key[VAR_1->pos++];


  VAR_2 ^= (VAR_2 >> 11);
  VAR_2 ^= (VAR_2 << 7) & 0x9d2c5680UL;
  VAR_2 ^= (VAR_2 << 15) & 0xefc60000UL;
  VAR_2 ^= (VAR_2 >> 18);

  return VAR_2;
}
