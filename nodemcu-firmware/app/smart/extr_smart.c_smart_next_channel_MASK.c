
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int password; int ssid; } ;


 int VAR_0 ;

 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_7 (int) ;

void FUNC_8(){
  FUNC_5();
  switch(VAR_7){
    case 1:
      VAR_7 = 128;
      break;
    case 2:
    case 3:
    case 4:
      VAR_7++;
      break;
    case 5:
      VAR_7 = 7;
      break;
    case 6:
      VAR_7 = 1;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      VAR_7++;
      break;
    case 13:
      VAR_7 = 6;
      break;
    case 128:
      VAR_7 = 2;
      break;
    default:
      VAR_7 = 6;
      break;
  }

  FUNC_0("switch to channel %d\n", VAR_7);
  FUNC_7(VAR_7);
  FUNC_4(VAR_6, VAR_0);
  FUNC_1(VAR_13->ssid, 0, sizeof(VAR_13->ssid));
  FUNC_1(VAR_13->password, 0, sizeof(VAR_13->password));

  FUNC_1(VAR_9, 0, VAR_3);
  FUNC_1(VAR_8, 0, VAR_1);

  FUNC_1(VAR_12, 0, VAR_4);
  FUNC_1(VAR_10, 0, VAR_2);

  FUNC_3(&VAR_11);
  FUNC_2(&VAR_11, VAR_5, 0);

  FUNC_6();
}
