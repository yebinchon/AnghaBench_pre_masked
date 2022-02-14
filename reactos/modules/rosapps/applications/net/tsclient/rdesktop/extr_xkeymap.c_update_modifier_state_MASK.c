
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint16 ;
struct TYPE_4__ {scalar_t__ remote_modifier_state; } ;
struct TYPE_5__ {TYPE_1__ xkeymap; int numlock_sync; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
__attribute__((used)) static void
FUNC_3(RDPCLIENT * VAR_10, uint8 VAR_11, BOOL VAR_12)
{






 switch (VAR_11)
 {
  case 134:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_3, VAR_12);
   break;
  case 129:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_8, VAR_12);
   break;
  case 135:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_2, VAR_12);
   break;
  case 130:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_7, VAR_12);
   break;
  case 136:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_1, VAR_12);
   break;
  case 131:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_6, VAR_12);
   break;
  case 133:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_4, VAR_12);
   break;
  case 128:
   FUNC_1(VAR_10->xkeymap.remote_modifier_state, VAR_9, VAR_12);
   break;
  case 132:


   if (VAR_12 && !VAR_10->numlock_sync)
   {
    BOOL VAR_13;
    VAR_13 =
     (FUNC_2
      (VAR_10->xkeymap.remote_modifier_state, VAR_5) == VAR_0);
    FUNC_1(VAR_10->xkeymap.remote_modifier_state,
      VAR_5, VAR_13);
   }
 }
}
