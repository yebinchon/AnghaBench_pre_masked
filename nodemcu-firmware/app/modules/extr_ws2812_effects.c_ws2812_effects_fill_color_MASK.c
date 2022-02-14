
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* color; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1() {

  uint8_t VAR_1 = VAR_0->color[0];
  uint8_t VAR_2 = VAR_0->color[1];
  uint8_t VAR_3 = VAR_0->color[2];
  uint8_t VAR_4 = VAR_0->color[3];

  uint32_t VAR_5 = (VAR_4 << 24) | (VAR_1 << 16) | (VAR_2 << 8) | VAR_3;

  FUNC_0(VAR_5);

  return 0;
}
