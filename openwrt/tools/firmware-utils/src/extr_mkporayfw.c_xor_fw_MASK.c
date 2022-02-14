
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t key; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int ** VAR_2 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++) {
  VAR_3[VAR_5] ^= VAR_2[VAR_1->key][VAR_5 % VAR_0];
 }
}
