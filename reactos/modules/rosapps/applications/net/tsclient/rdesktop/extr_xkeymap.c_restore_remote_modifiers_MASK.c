
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_8__ {int modifiers; scalar_t__ scancode; } ;
typedef TYPE_2__ key_translation ;
struct TYPE_7__ {int saved_remote_modifier_state; } ;
struct TYPE_9__ {TYPE_1__ xkeymap; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (TYPE_3__*,int ,TYPE_2__) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(RDPCLIENT * VAR_0, uint32 VAR_1, uint8 VAR_2)
{
 key_translation VAR_3;

 if (FUNC_1(VAR_2))
  return;

 VAR_3.scancode = 0;
 VAR_3.modifiers = VAR_0->xkeymap.saved_remote_modifier_state;
 FUNC_0(VAR_0, VAR_1, VAR_3);
}
