
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int port_vlan; } ;
struct switch_dev {int ports; int vlans; } ;
struct switch_attr {int type; } ;





 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct switch_dev*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct switch_attr*,struct switch_val*) ;
 int FUNC_5 () ;
 int FUNC_6 (char) ;
 int FUNC_7 (struct switch_dev*) ;
 int FUNC_8 (struct switch_dev*,int) ;
 int FUNC_9 (struct switch_dev*,int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (struct switch_dev*,char*) ;
 struct switch_dev* FUNC_12 (char*) ;
 int FUNC_13 (struct switch_dev*) ;
 int FUNC_14 (struct switch_dev*,struct switch_attr*,struct switch_val*) ;
 int FUNC_15 () ;
 struct switch_attr* FUNC_16 (struct switch_dev*,int ,char*) ;
 int FUNC_17 (struct switch_dev*,char*) ;
 int FUNC_18 (struct switch_dev*) ;
 int FUNC_19 (struct switch_dev*,struct switch_attr*,int,char*) ;

int FUNC_20(int VAR_6, char **VAR_7)
{
 int VAR_8 = 0;
 struct switch_dev *VAR_9;
 struct switch_attr *VAR_10;
 struct switch_val VAR_11;
 int VAR_12;

 int VAR_13 = VAR_0;
 char *VAR_14 = ((void*)0);
 int VAR_15 = -1;
 int VAR_16 = -1;
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);

 if((VAR_6 == 2) && !FUNC_10(VAR_7[1], "list")) {
  FUNC_15();
  return 0;
 }

 if(VAR_6 < 4)
  FUNC_5();

 if(FUNC_10(VAR_7[1], "dev"))
  FUNC_5();

 VAR_14 = VAR_7[2];

 for(VAR_12 = 3; VAR_12 < VAR_6; VAR_12++)
 {
  char *VAR_20 = VAR_7[VAR_12];
  if (VAR_13 != VAR_0) {
   FUNC_5();
  } else if (!FUNC_10(VAR_20, "port") && VAR_12+1 < VAR_6) {
   VAR_15 = FUNC_0(VAR_7[++VAR_12]);
  } else if (!FUNC_10(VAR_20, "vlan") && VAR_12+1 < VAR_6) {
   VAR_16 = FUNC_0(VAR_7[++VAR_12]);
  } else if (!FUNC_10(VAR_20, "help")) {
   VAR_13 = 132;
  } else if (!FUNC_10(VAR_20, "set") && VAR_12+1 < VAR_6) {
   VAR_13 = 129;
   VAR_17 = VAR_7[++VAR_12];
   if (VAR_12+1 < VAR_6)
    VAR_18 = VAR_7[++VAR_12];
  } else if (!FUNC_10(VAR_20, "get") && VAR_12+1 < VAR_6) {
   VAR_13 = 133;
   VAR_17 = VAR_7[++VAR_12];
  } else if (!FUNC_10(VAR_20, "load") && VAR_12+1 < VAR_6) {
   if ((VAR_15 >= 0) || (VAR_16 >= 0))
    FUNC_5();
   VAR_13 = 131;
   VAR_17 = VAR_7[++VAR_12];
  } else if (!FUNC_10(VAR_20, "portmap")) {
   if (VAR_12 + 1 < VAR_6)
    VAR_19 = VAR_7[++VAR_12];
   VAR_13 = 130;
  } else if (!FUNC_10(VAR_20, "show")) {
   VAR_13 = 128;
  } else {
   FUNC_5();
  }
 }

 if (VAR_13 == VAR_0)
  FUNC_5();
 if (VAR_15 > -1 && VAR_16 > -1)
  FUNC_5();

 VAR_9 = FUNC_12(VAR_14);
 if (!VAR_9) {
  FUNC_1(VAR_5, "Failed to connect to the switch. Use the \"list\" command to see which switches are available.\n");
  return 1;
 }

 FUNC_18(VAR_9);

 if (VAR_13 == 133 || VAR_13 == 129) {
  if(VAR_15 > -1)
   VAR_10 = FUNC_16(VAR_9, VAR_3, VAR_17);
  else if(VAR_16 > -1)
   VAR_10 = FUNC_16(VAR_9, VAR_4, VAR_17);
  else
   VAR_10 = FUNC_16(VAR_9, VAR_2, VAR_17);

  if(!VAR_10)
  {
   FUNC_1(VAR_5, "Unknown attribute \"%s\"\n", VAR_17);
   VAR_8 = -1;
   goto out;
  }
 }

 switch(VAR_13)
 {
 case 129:
  if ((VAR_10->type != VAR_1) &&
    (VAR_18 == ((void*)0)))
   FUNC_5();

  if(VAR_16 > -1)
   VAR_15 = VAR_16;

  VAR_8 = FUNC_19(VAR_9, VAR_10, VAR_15, VAR_18);
  if (VAR_8 < 0)
  {
   FUNC_3(-VAR_8, "Failed to set attribute");
   goto out;
  }
  break;
 case 133:
  if(VAR_16 > -1)
   VAR_11.port_vlan = VAR_16;
  if(VAR_15 > -1)
   VAR_11.port_vlan = VAR_15;
  VAR_8 = FUNC_14(VAR_9, VAR_10, &VAR_11);
  if (VAR_8 < 0)
  {
   FUNC_3(-VAR_8, "Failed to get attribute");
   goto out;
  }
  FUNC_4(VAR_10, &VAR_11);
  FUNC_6('\n');
  break;
 case 131:
  FUNC_11(VAR_9, VAR_17);
  break;
 case 132:
  FUNC_2(VAR_9);
  break;
 case 130:
  FUNC_17(VAR_9, VAR_19);
  break;
 case 128:
  if (VAR_15 >= 0 || VAR_16 >= 0) {
   if (VAR_15 >= 0)
    FUNC_8(VAR_9, VAR_15);
   else
    FUNC_9(VAR_9, VAR_16, 0);
  } else {
   FUNC_7(VAR_9);
   for (VAR_12=0; VAR_12 < VAR_9->ports; VAR_12++)
    FUNC_8(VAR_9, VAR_12);
   for (VAR_12=0; VAR_12 < VAR_9->vlans; VAR_12++)
    FUNC_9(VAR_9, VAR_12, 1);
  }
  break;
 }

out:
 FUNC_13(VAR_9);
 return VAR_8;
}
