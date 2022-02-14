
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct TYPE_2__ {char* s; struct switch_val* link; struct switch_val* ports; void* i; } ;
struct switch_val {int port_vlan; int len; int duplex; int aneg; TYPE_1__ value; void* speed; int flags; int id; } ;
struct switch_port_link {int port_vlan; int len; int duplex; int aneg; TYPE_1__ value; void* speed; int flags; int id; } ;
struct switch_port {int port_vlan; int len; int duplex; int aneg; TYPE_1__ value; void* speed; int flags; int id; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int type; } ;
 int VAR_0 ;
 struct switch_val* FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 struct switch_val* FUNC_5 (int) ;
 int FUNC_6 (struct switch_val*,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (struct switch_dev*,struct switch_attr*,struct switch_val*) ;

int FUNC_11(struct switch_dev *VAR_2, struct switch_attr *VAR_3, int VAR_4, const char *VAR_5)
{
 struct switch_port *VAR_6;
 struct switch_port_link *VAR_7;
 struct switch_val VAR_8;
 char *VAR_9;
 int VAR_10 = 134;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.port_vlan = VAR_4;
 switch(VAR_3->type) {
 case 132:
  VAR_8.value.i = FUNC_1(VAR_5);
  break;
 case 128:
  VAR_8.value.s = (char *)VAR_5;
  break;
 case 129:
  VAR_6 = FUNC_0(sizeof(struct switch_port) * VAR_2->ports);
  FUNC_6(VAR_6, 0, sizeof(struct switch_port) * VAR_2->ports);
  VAR_8.len = 0;
  VAR_9 = (char *)VAR_5;
  while(VAR_9 && *VAR_9)
  {
   while(*VAR_9 && FUNC_4(*VAR_9))
    VAR_9++;

   if (!*VAR_9)
    break;

   if (!FUNC_3(*VAR_9))
    return -1;

   if (VAR_8.len >= VAR_2->ports)
    return -1;

   VAR_6[VAR_8.len].flags = 0;
   VAR_6[VAR_8.len].id = FUNC_9(VAR_9, &VAR_9, 10);
   while(*VAR_9 && !FUNC_4(*VAR_9)) {
    if (*VAR_9 == 't')
     VAR_6[VAR_8.len].flags |= VAR_0;
    else
     return -1;

    VAR_9++;
   }
   if (*VAR_9)
    VAR_9++;
   VAR_8.len++;
  }
  VAR_8.value.ports = VAR_6;
  break;
 case 131:
  VAR_7 = FUNC_5(sizeof(struct switch_port_link));
  FUNC_6(VAR_7, 0, sizeof(struct switch_port_link));
  VAR_9 = (char *)VAR_5;
  for (VAR_9 = FUNC_8(VAR_9," "); VAR_9; VAR_9 = FUNC_8(((void*)0), " ")) {
   switch (VAR_10) {
   case 134:
    if (!FUNC_7(VAR_9, "duplex"))
     VAR_10 = 135;
    else if (!FUNC_7(VAR_9, "autoneg"))
     VAR_10 = 136;
    else if (!FUNC_7(VAR_9, "speed"))
     VAR_10 = 133;
    else
     FUNC_2(VAR_1, "Unsupported option %s\n", VAR_9);
    break;
   case 135:
    if (!FUNC_7(VAR_9, "half"))
     VAR_7->duplex = 0;
    else if (!FUNC_7(VAR_9, "full"))
     VAR_7->duplex = 1;
    else
     FUNC_2(VAR_1, "Unsupported value %s\n", VAR_9);
    VAR_10 = 134;
    break;
   case 136:
    if (!FUNC_7(VAR_9, "on"))
     VAR_7->aneg = 1;
    else if (!FUNC_7(VAR_9, "off"))
     VAR_7->aneg = 0;
    else
     FUNC_2(VAR_1, "Unsupported value %s\n", VAR_9);
    VAR_10 = 134;
    break;
   case 133:
    VAR_7->speed = FUNC_1(VAR_9);
    VAR_10 = 134;
    break;
   }
  }
  VAR_8.value.link = VAR_7;
  break;
 case 130:
  if (VAR_5 && !FUNC_7(VAR_5, "0"))
   return 0;

  break;
 default:
  return -1;
 }
 return FUNC_10(VAR_2, VAR_3, &VAR_8);
}
