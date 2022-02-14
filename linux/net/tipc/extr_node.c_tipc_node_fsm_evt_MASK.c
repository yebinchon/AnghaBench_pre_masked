
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int state; int peer_id; } ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct tipc_node *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->state;

 switch (VAR_2) {
 case 134:
  switch (VAR_1) {
  case 132:
   VAR_2 = 129;
   break;
  case 137:
   VAR_2 = 135;
   break;
  case 130:
  case 136:
   break;
  case 138:
  case 139:
  case 142:
  case 141:
  default:
   goto illegal_evt;
  }
  break;
 case 128:
  switch (VAR_1) {
  case 130:
   VAR_2 = 133;
   break;
  case 136:
   VAR_2 = 131;
   break;
  case 139:
   VAR_2 = 140;
   break;
  case 142:
   VAR_2 = 143;
   break;
  case 132:
  case 137:
  case 138:
  case 141:
   break;
  default:
   goto illegal_evt;
  }
  break;
 case 133:
  switch (VAR_1) {
  case 136:
   VAR_2 = 134;
   break;
  case 132:
  case 137:
  case 130:
   break;
  case 138:
  case 139:
  case 142:
  case 141:
  default:
   goto illegal_evt;
  }
  break;
 case 129:
  switch (VAR_1) {
  case 137:
   VAR_2 = 128;
   break;
  case 130:
   VAR_2 = 134;
   break;
  case 132:
  case 136:
  case 138:
  case 142:
   break;
  case 139:
  case 141:
  default:
   goto illegal_evt;
  }
  break;
 case 135:
  switch (VAR_1) {
  case 132:
   VAR_2 = 128;
   break;
  case 136:
   VAR_2 = 134;
   break;
  case 130:
  case 137:
   break;
  case 138:
  case 139:
  case 142:
  case 141:
  default:
   goto illegal_evt;
  }
  break;
 case 131:
  switch (VAR_1) {
  case 130:
   VAR_2 = 134;
   break;
  case 132:
  case 137:
  case 136:
   break;
  case 138:
  case 139:
  case 142:
  case 141:
  default:
   goto illegal_evt;
  }
  break;
 case 143:
  switch (VAR_1) {
  case 130:
   VAR_2 = 133;
   break;
  case 136:
   VAR_2 = 131;
   break;
  case 141:
   VAR_2 = 128;
   break;
  case 142:
  case 132:
  case 137:
   break;
  case 139:
  case 138:
  default:
   goto illegal_evt;
  }
  break;
 case 140:
  switch (VAR_1) {
  case 130:
   VAR_2 = 133;
   break;
  case 136:
   VAR_2 = 131;
   break;
  case 138:
   VAR_2 = 128;
   break;
  case 142:
   VAR_2 = 143;
   break;
  case 139:
  case 132:
  case 137:
   break;
  case 141:
  default:
   goto illegal_evt;
  }
  break;
 default:
  FUNC_0("Unknown node fsm state %x\n", VAR_2);
  break;
 }
 FUNC_1(VAR_0->peer_id, VAR_0->state, VAR_2, VAR_1);
 VAR_0->state = VAR_2;
 return;

illegal_evt:
 FUNC_0("Illegal node fsm evt %x in state %x\n", VAR_1, VAR_2);
 FUNC_1(VAR_0->peer_id, VAR_0->state, VAR_2, VAR_1);
}
