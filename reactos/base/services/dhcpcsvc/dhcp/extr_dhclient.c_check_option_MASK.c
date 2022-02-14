
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct client_lease {TYPE_1__* options; } ;
struct TYPE_2__ {int len; int data; } ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ,int ) ;
 char* FUNC_2 (int,int ,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,...) ;

int
FUNC_5(struct client_lease *VAR_1, int VAR_2)
{
 char *VAR_3;
 char *VAR_4;



 VAR_3 = FUNC_2(VAR_2, VAR_1->options[VAR_2].data,
     VAR_1->options[VAR_2].len, 0, 0);

 VAR_4 = FUNC_1(VAR_2, VAR_1->options[VAR_2].data,
     VAR_1->options[VAR_2].len);

 switch (VAR_2) {
 case 136:
 case 131:
 case 156:
 case 140:
 case 170:
 case 161:
 case 187:
 case 160:
 case 164:
 case 142:
 case 135:
 case 188:
 case 150:
 case 148:
 case 154:
 case 155:
 case 167:
 case 173:
  if (!FUNC_0(VAR_3)) {
                        FUNC_4("Invalid IP address in option(%d): %s", VAR_2, VAR_3);
   return (0);
  }
  return (1) ;
 case 166:
 case 171:
 case 151:
  if (!FUNC_3(VAR_4))
   FUNC_4("Bogus Host Name option %d: %s (%s)", VAR_2,
       VAR_4, VAR_3);
  return (1);
 case 147:
 case 132:
 case 189:
 case 157:
 case 141:
 case 168:
 case 162:
 case 149:
 case 143:
 case 158:
 case 186:
 case 146:
 case 145:
 case 163:
 case 191:
 case 144:
 case 159:
 case 139:
 case 138:
 case 137:
 case 130:
 case 190:
 case 165:
 case 185:
 case 133:
 case 134:
 case 129:
 case 153:
 case 152:
 case 128:
 case 174:
 case 182:
 case 178:
 case 179:
 case 177:
 case 180:
 case 181:
 case 175:
 case 176:
 case 184:
 case 183:
 case 172:
 case 169:
  return (1);
 default:
  FUNC_4("unknown dhcp option value 0x%x", VAR_2);
  return (VAR_0);
 }
}
