
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_priv {int ndev; } ;
typedef enum j1939_xtp_abort { ____Placeholder_j1939_xtp_abort } j1939_xtp_abort ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct j1939_priv *VAR_8,
        enum j1939_xtp_abort VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 128:
  FUNC_0(VAR_9 == 128);
  VAR_10 = 0;
  break;
 case 141:
  VAR_10 = VAR_0;
  break;
 case 131:
  VAR_10 = VAR_4;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 134:
  VAR_10 = VAR_1;
  break;
 case 135:
  VAR_10 = VAR_6;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 142:
  VAR_10 = VAR_3;
  break;
 case 140:
  VAR_10 = VAR_7;
  break;
 case 136:
  VAR_10 = VAR_7;
  break;
 case 143:
  VAR_10 = VAR_7;
  break;
 case 137:
  VAR_10 = VAR_7;
  break;
 case 144:
  VAR_10 = VAR_7;
  break;
 case 132:
  VAR_10 = VAR_7;
  break;
 case 138:
  VAR_10 = VAR_7;
  break;
 case 139:
  VAR_10 = VAR_7;
  break;
 case 133:
  VAR_10 = VAR_7;
  break;
 default:
  FUNC_1(VAR_8->ndev, "Unknown abort code %i", VAR_9);
  VAR_10 = VAR_7;
 }

 return VAR_10;
}
