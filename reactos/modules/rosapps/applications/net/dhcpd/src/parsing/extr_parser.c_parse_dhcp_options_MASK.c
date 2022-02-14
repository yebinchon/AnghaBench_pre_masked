
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* options; } ;
struct TYPE_5__ {int type; int r_ip; int r_mask; int r_router; int r_lease; char* hostname; } ;
typedef TYPE_1__ DHCPOPTIONS ;
typedef TYPE_2__ DHCPMESSAGE ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int*,int) ;

int FUNC_3( DHCPMESSAGE *VAR_1, DHCPOPTIONS *VAR_2 )
{
  int VAR_3, VAR_4;
  int VAR_5;

  VAR_3 = 0;

  FUNC_0( VAR_0, "parse_dhcp_options [begin]!\n");



  VAR_2->type = 0;

  VAR_2->r_ip = 0;

  VAR_2->r_mask = 0;

  VAR_2->r_router = 0;

  VAR_2->r_lease = 0;

  VAR_2->hostname = ((void*)0);

  while( VAR_3< 312 )
    {
      if(( VAR_1->options[0] != 99 ) && (VAR_1->options[1]!=130) && (VAR_1->options[2]!=83) && (VAR_1->options[3]!= 99))
 {
   FUNC_0( VAR_0, "No magic cookie! Aborting! \n" );
   return -1;
 }
      switch( VAR_1->options[VAR_3] ){
      case 158:
 VAR_3++;
 break;
      case 173:

 VAR_3 += 2;
 VAR_2->type = VAR_1->options[VAR_3++];
 break;
      case 152:

 VAR_4 = VAR_3 + 2;
 VAR_5 = VAR_3 + VAR_1->options[VAR_3 + 1];
 while( VAR_4 < VAR_5 )
   {
     switch( VAR_1->options[VAR_4] ){
     case 185:

       VAR_4 += 2;
       VAR_2->r_ip += VAR_1->options[VAR_4++];
       VAR_2->r_ip = VAR_2->r_ip << 8;
       VAR_2->r_ip += VAR_1->options[VAR_4++];
       VAR_2->r_ip = VAR_2->r_ip << 8;
       VAR_2->r_ip += VAR_1->options[VAR_4++];
       VAR_2->r_ip = VAR_2->r_ip << 8;
       VAR_2->r_ip += VAR_1->options[VAR_4++];
       break;
     case 179:

       VAR_4 += 2;
       VAR_2->r_mask += VAR_1->options[VAR_4++];
       VAR_2->r_mask = VAR_2->r_ip << 8;
       VAR_2->r_mask += VAR_1->options[VAR_4++];
       VAR_2->r_mask = VAR_2->r_ip << 8;
       VAR_2->r_mask += VAR_1->options[VAR_4++];
       VAR_2->r_mask = VAR_2->r_ip << 8;
       VAR_2->r_mask += VAR_1->options[VAR_4++];
       break;
     case 146:

       VAR_4 += 2;
       VAR_2->r_router += VAR_1->options[VAR_4++];
       VAR_2->r_router = VAR_2->r_ip << 8;
       VAR_2->r_router += VAR_1->options[VAR_4++];
       VAR_2->r_router = VAR_2->r_ip << 8;
       VAR_2->r_router += VAR_1->options[VAR_4++];
       VAR_2->r_router = VAR_2->r_ip << 8;
       VAR_2->r_router += VAR_1->options[VAR_4++];
       break;
     case 182:
       VAR_4 += 2;
       VAR_2->r_lease += VAR_1->options[VAR_4++];
       VAR_2->r_lease = VAR_2->r_ip << 8;
       VAR_2->r_lease += VAR_1->options[VAR_4++];
       VAR_2->r_lease = VAR_2->r_ip << 8;
       VAR_2->r_lease += VAR_1->options[VAR_4++];
       VAR_2->r_lease = VAR_2->r_ip << 8;
       VAR_2->r_lease += VAR_1->options[VAR_4++];
       break;
     case 189:
       VAR_4 += 1;
       VAR_2->hostname = (char *)FUNC_1( VAR_1->options[VAR_4] + 1);
       FUNC_2( VAR_2->hostname, &VAR_1->options[VAR_4+1], VAR_1->options[VAR_4] );
       VAR_4 += VAR_1->options[VAR_4] + 1;
     default:

       VAR_4++;
       break;
     }
   }
 VAR_3 = VAR_4;
 break;
      case 132:
      case 133:
      case 161:
      case 195:
      case 181:
      case 197:
      case 180:
      case 187:
      case 148:
      case 200:
      case 175:
      case 194:
      case 139:
      case 147:
      case 191:
      case 184:
      case 162:
      case 154:
      case 177:
      case 196:
      case 157:
      case 156:
      case 186:
      case 203:
      case 199:
      case 155:
      case 178:
      case 151:
      case 145:
      case 142:
      case 135:
      case 202:
      case 192:
      case 138:
      case 136:
      case 137:
      case 167:
      case 164:
      case 160:
      case 130:
      case 170:
      case 171:
      case 169:
      case 168:
      case 128:
      case 129:
      case 159:
      case 144:
      case 174:
      case 176:
      case 149:
      case 150:
      case 131:
      case 166:
      case 165:
      case 134:
      case 201:
      case 172:
      case 143:
      case 153:
      case 163:
      case 188:
      case 190:
      case 183:
      case 140:
      case 141:
      case 198:
 VAR_3++;
 VAR_3 += VAR_1->options[VAR_3];
      case 193:

 FUNC_0( VAR_0, "parse_dhcp_options: END option found! [end]!\n");
 return 0;
      default:

 VAR_3++;
 break;
      }
    }
  FUNC_0( VAR_0, "parse_dhcp_options [end]!\n");
  return 0;
}
