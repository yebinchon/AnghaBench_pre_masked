
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdtp_stream {struct amdtp_dot* protocol; } ;
struct TYPE_2__ {int carry; int idx; scalar_t__ off; } ;
struct amdtp_dot {TYPE_1__ state; } ;



void FUNC_0(struct amdtp_stream *VAR_0)
{
 struct amdtp_dot *VAR_1 = VAR_0->protocol;

 VAR_1->state.carry = 0x00;
 VAR_1->state.idx = 0x00;
 VAR_1->state.off = 0;
}
