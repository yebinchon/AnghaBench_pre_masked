
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {int state; int name; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int ,int,int,int) ;

int FUNC_2(struct tipc_link *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_1->state;

 switch (VAR_1->state) {
 case 132:
  switch (VAR_2) {
  case 134:
   VAR_1->state = 135;
   break;
  case 131:
   VAR_1->state = 133;
   break;
  case 136:
  case 138:
  case 140:
  case 137:
  case 129:
  case 128:
  default:
   goto illegal_evt;
  }
  break;
 case 133:
  switch (VAR_2) {
  case 134:
   VAR_1->state = 141;
   break;
  case 138:
   VAR_1->state = 139;
  case 136:
  case 131:
  case 140:
  case 137:
   break;
  case 129:
  case 128:
  default:
   goto illegal_evt;
  }
  break;
 case 135:
  switch (VAR_2) {
  case 131:
   VAR_1->state = 141;
   break;
  case 134:
  case 140:
  case 136:
   break;
  case 129:
  case 128:
  case 138:
  case 137:
  default:
   goto illegal_evt;
  }
  break;
 case 139:
  switch (VAR_2) {
  case 137:
   VAR_1->state = 133;
   break;
  case 134:
  case 131:
  case 140:
  case 136:
   break;
  case 138:
  case 129:
  case 128:
  default:
   goto illegal_evt;
  }
  break;
 case 141:
  switch (VAR_2) {
  case 140:
   VAR_1->state = 142;
   break;
  case 138:
   VAR_1->state = 139;
   break;
  case 131:
   VAR_1->state = 133;
   break;
  case 136:
  case 134:
  case 129:
  case 137:
   break;
  case 128:
  default:
   goto illegal_evt;
  }
  break;
 case 142:
  switch (VAR_2) {
  case 134:
   VAR_1->state = 135;
   VAR_3 |= VAR_0;
   break;
  case 136:
   VAR_1->state = 132;
   VAR_3 |= VAR_0;
   break;
  case 131:
   VAR_1->state = 133;
   break;
  case 140:
  case 128:
   break;
  case 129:
   VAR_1->state = 130;
   break;
  case 138:
  case 137:
  default:
   goto illegal_evt;
  }
  break;
 case 130:
  switch (VAR_2) {
  case 134:
   VAR_1->state = 135;
   VAR_3 |= VAR_0;
   break;
  case 136:
   VAR_1->state = 132;
   VAR_3 |= VAR_0;
   break;
  case 131:
   VAR_1->state = 133;
   break;
  case 140:
  case 129:
   break;
  case 128:
   VAR_1->state = 142;
   break;
  case 138:
  case 137:
  default:
   goto illegal_evt;
  }
  break;
 default:
  FUNC_0("Unknown FSM state %x in %s\n", VAR_1->state, VAR_1->name);
 }
 FUNC_1(VAR_1->name, VAR_4, VAR_1->state, VAR_2);
 return VAR_3;
illegal_evt:
 FUNC_0("Illegal FSM event %x in state %x on link %s\n",
        VAR_2, VAR_1->state, VAR_1->name);
 FUNC_1(VAR_1->name, VAR_4, VAR_1->state, VAR_2);
 return VAR_3;
}
