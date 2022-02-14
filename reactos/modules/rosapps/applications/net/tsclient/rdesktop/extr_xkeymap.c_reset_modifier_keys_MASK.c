
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int remote_modifier_state; } ;
struct TYPE_11__ {scalar_t__ numlock_sync; TYPE_1__ xkeymap; } ;
typedef TYPE_2__ RDPCLIENT ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (TYPE_2__*,unsigned int,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 unsigned int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,unsigned int) ;

void
FUNC_8(RDPCLIENT * VAR_22)
{
 unsigned int VAR_23 = FUNC_4(VAR_22);


 uint32 VAR_24;
 VAR_24 = FUNC_6(((void*)0));

 if (FUNC_0(VAR_22->xkeymap.remote_modifier_state, VAR_2)
     && !FUNC_1(VAR_22, VAR_23, VAR_20))
  FUNC_3(VAR_22, VAR_24, VAR_7, VAR_10);

 if (FUNC_0(VAR_22->xkeymap.remote_modifier_state, VAR_5)
     && !FUNC_1(VAR_22, VAR_23, VAR_21))
  FUNC_3(VAR_22, VAR_24, VAR_7, VAR_13);

 if (FUNC_0(VAR_22->xkeymap.remote_modifier_state, VAR_1)
     && !FUNC_1(VAR_22, VAR_23, VAR_16))
  FUNC_3(VAR_22, VAR_24, VAR_7, VAR_9);

 if (FUNC_0(VAR_22->xkeymap.remote_modifier_state, VAR_4)
     && !FUNC_1(VAR_22, VAR_23, VAR_17))
  FUNC_3(VAR_22, VAR_24, VAR_7, VAR_12);

 if (FUNC_0(VAR_22->xkeymap.remote_modifier_state, VAR_0) && !FUNC_1(VAR_22, VAR_23, VAR_14))
  FUNC_3(VAR_22, VAR_24, VAR_7, VAR_8);

 if (FUNC_0(VAR_22->xkeymap.remote_modifier_state, VAR_3) &&
     !FUNC_1(VAR_22, VAR_23, VAR_15) && !FUNC_1(VAR_22, VAR_23, VAR_19)
     && !FUNC_1(VAR_22, VAR_23, VAR_18))
  FUNC_3(VAR_22, VAR_24, VAR_7, VAR_11);

 FUNC_5(VAR_22, VAR_24);

 if (VAR_22->numlock_sync)
  FUNC_2(VAR_22, VAR_24, VAR_6, 0, FUNC_7(VAR_22, VAR_23), 0);
}
