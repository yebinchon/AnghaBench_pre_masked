
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
struct TYPE_4__ {TYPE_1__ cx; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void){

  VAR_0.cx.state[0] = 0x67452301;
  VAR_0.cx.state[1] = 0xEFCDAB89;
  VAR_0.cx.state[2] = 0x98BADCFE;
  VAR_0.cx.state[3] = 0x10325476;
  VAR_0.cx.state[4] = 0xC3D2E1F0;
  VAR_0.cx.count[0] = VAR_0.cx.count[1] = 0;
}
