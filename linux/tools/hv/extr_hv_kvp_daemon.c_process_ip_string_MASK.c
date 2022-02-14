
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sub_str ;
typedef int str ;
typedef int addr ;
typedef int FILE ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (char*,int*,char*,int) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_6(FILE *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 char VAR_7[VAR_1];
 int VAR_8 = 0;
 int VAR_9 = 0;
 char VAR_10[256];
 char VAR_11[13];
 int VAR_12 = 0;

 FUNC_3(VAR_7, 0, sizeof(VAR_7));

 while (FUNC_4(VAR_4, &VAR_12, VAR_7,
     (VAR_2 * 2))) {

  VAR_11[0] = 0;
  if (FUNC_1(VAR_7)) {
   switch (VAR_5) {
   case 129:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "IPADDR");
    break;
   case 128:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "NETMASK");
    break;
   case 130:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "GATEWAY");
    break;
   case 131:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "DNS");
    break;
   }

   if (VAR_5 == 131) {
    FUNC_5(VAR_11, sizeof(VAR_11), "%d", ++VAR_8);
   } else if (VAR_5 == 130 && VAR_8 == 0) {
    ++VAR_8;
   } else {
    FUNC_5(VAR_11, sizeof(VAR_11), "%d", VAR_8++);
   }


  } else if (FUNC_0(VAR_7, VAR_5)) {
   switch (VAR_5) {
   case 129:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "IPV6ADDR");
    break;
   case 128:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "IPV6NETMASK");
    break;
   case 130:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s",
     "IPV6_DEFAULTGW");
    break;
   case 131:
    FUNC_5(VAR_10, sizeof(VAR_10), "%s", "DNS");
    break;
   }

   if (VAR_5 == 131) {
    FUNC_5(VAR_11, sizeof(VAR_11), "%d", ++VAR_8);
   } else if (VAR_9 == 0) {
    ++VAR_9;
   } else {
    FUNC_5(VAR_11, sizeof(VAR_11), "_%d", VAR_9++);
   }
  } else {
   return VAR_0;
  }

  VAR_6 = FUNC_2(VAR_3, VAR_10, VAR_11, VAR_7);
  if (VAR_6)
   return VAR_6;
  FUNC_3(VAR_7, 0, sizeof(VAR_7));
 }

 return 0;
}
