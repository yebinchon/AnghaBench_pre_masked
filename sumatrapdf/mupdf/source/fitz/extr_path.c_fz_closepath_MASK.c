
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int cmd_len; int* cmds; int begin; int current; scalar_t__ packed; } ;
typedef TYPE_1__ fz_path ;
typedef int fz_context ;
 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*) ;

void
FUNC_3(fz_context *VAR_1, fz_path *VAR_2)
{
 uint8_t VAR_3;

 if (VAR_2->packed)
  FUNC_1(VAR_1, VAR_0, "Cannot modify a packed path");

 if (VAR_2->cmd_len == 0)
 {
  FUNC_2(VAR_1, "closepath with no current point");
  return;
 }

 switch(FUNC_0(VAR_2))
 {
 case 134:
  VAR_3 = 133;
  break;
 case 136:
  VAR_3 = 135;
  break;
 case 140:
  VAR_3 = 139;
  break;
 case 146:
  VAR_3 = 145;
  break;
 case 144:
  VAR_3 = 143;
  break;
 case 142:
  VAR_3 = 141;
  break;
 case 138:
  VAR_3 = 137;
  break;
 case 129:
  VAR_3 = 128;
  break;
 case 132:
  VAR_3 = 131;
  break;
 case 130:

  return;
 case 133:
 case 135:
 case 139:
 case 145:
 case 143:
 case 141:
 case 137:
 case 128:
 case 131:

  return;
 default:
 case 0:

  return;
 }

 VAR_2->cmds[VAR_2->cmd_len-1] = VAR_3;

 VAR_2->current = VAR_2->begin;
}
