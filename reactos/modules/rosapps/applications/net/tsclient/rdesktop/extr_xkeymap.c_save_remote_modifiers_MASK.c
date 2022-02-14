
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int remote_modifier_state; int saved_remote_modifier_state; } ;
struct TYPE_5__ {TYPE_1__ xkeymap; } ;
typedef TYPE_2__ RDPCLIENT ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(RDPCLIENT * VAR_0, uint8 VAR_1)
{
 if (FUNC_0(VAR_1))
  return;

 VAR_0->xkeymap.saved_remote_modifier_state = VAR_0->xkeymap.remote_modifier_state;
}
