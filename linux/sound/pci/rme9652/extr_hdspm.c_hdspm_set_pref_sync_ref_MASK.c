
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; int control_register; int settings_register; int tco; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (struct hdspm*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hdspm * VAR_9, int VAR_10)
{
 int VAR_11 = 0;

 switch (VAR_9->io_type) {
 case 132:
  VAR_9->control_register &= ~VAR_4;
  switch (VAR_10) {
  case 0:
   break;
  case 1:
   VAR_9->control_register |= VAR_0;
   break;
  case 2:
   VAR_9->control_register |= VAR_1;
   break;
  case 3:
   VAR_9->control_register |=
    VAR_1+VAR_0;
   break;
  case 4:
   VAR_9->control_register |= VAR_2;
   break;
  case 5:
   VAR_9->control_register |=
    VAR_2+VAR_0;
   break;
  case 6:
   VAR_9->control_register |=
    VAR_2+VAR_1;
   break;
  case 7:
   VAR_9->control_register |=
    VAR_2+VAR_1+VAR_0;
   break;
  case 8:
   VAR_9->control_register |= VAR_3;
   break;
  case 9:
   VAR_9->control_register |=
    VAR_3+VAR_0;
   break;
  default:
   return -1;
  }

  break;

 case 130:
 case 129:
  VAR_9->control_register &= ~VAR_4;
  if (VAR_9->tco) {
   switch (VAR_10) {
   case 0:
    break;
   case 1:
    VAR_9->control_register |= VAR_0;
    break;
   case 2:
    VAR_9->control_register |= VAR_1;
    break;
   case 3:
    VAR_9->control_register |=
     VAR_0+VAR_1;
    break;
   default:
    return -1;
   }
  } else {
   switch (VAR_10) {
   case 0:
    break;
   case 1:
    VAR_9->control_register |= VAR_0;
    break;
   case 2:
    VAR_9->control_register |=
     VAR_0+VAR_1;
    break;
   default:
    return -1;
   }
  }

  break;

 case 128:
  if (VAR_9->tco) {
   switch (VAR_10) {
   case 0: VAR_11 = 0; break;
   case 1: VAR_11 = 3; break;
   case 2: VAR_11 = 4; break;
   case 3: VAR_11 = 5; break;
   case 4: VAR_11 = 6; break;
   case 5: VAR_11 = 1; break;
   case 6: VAR_11 = 2; break;
   case 7: VAR_11 = 9; break;
   case 8: VAR_11 = 10; break;
   default: return -1;
   }
  } else {
   switch (VAR_10) {
   case 0: VAR_11 = 0; break;
   case 1: VAR_11 = 3; break;
   case 2: VAR_11 = 4; break;
   case 3: VAR_11 = 5; break;
   case 4: VAR_11 = 6; break;
   case 5: VAR_11 = 1; break;
   case 6: VAR_11 = 2; break;
   case 7: VAR_11 = 10; break;
   default: return -1;
   }
  }
  break;

 case 131:
  if (VAR_9->tco) {
   switch (VAR_10) {
   case 0: VAR_11 = 0; break;
   case 1: VAR_11 = 3; break;
   case 2: VAR_11 = 1; break;
   case 3: VAR_11 = 2; break;
   case 4: VAR_11 = 9; break;
   case 5: VAR_11 = 10; break;
   default: return -1;
   }
  } else {
   switch (VAR_10) {
   case 0: VAR_11 = 0; break;
   case 1: VAR_11 = 3; break;
   case 2: VAR_11 = 1; break;
   case 3: VAR_11 = 2; break;
   case 4: VAR_11 = 10; break;
   default: return -1;
   }
  }
  break;
 }

 switch (VAR_9->io_type) {
 case 128:
 case 131:
  VAR_9->settings_register &= ~VAR_7;
  VAR_9->settings_register |= VAR_6 * VAR_11;
  FUNC_0(VAR_9, VAR_5, VAR_9->settings_register);
  break;

 case 130:
 case 129:
 case 132:
  FUNC_0(VAR_9, VAR_8,
    VAR_9->control_register);
 }

 return 0;
}
