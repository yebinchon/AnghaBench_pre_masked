
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_2 (int ,int *,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(int VAR_24, char **VAR_25)
{
 int VAR_26 = 0;
 int VAR_27;

 while ((VAR_27 = FUNC_1(VAR_24, VAR_25, "46c:CDFhIl:Lnp:PrRuv:V:x")) != -1) {
  switch (VAR_27) {
  case '4':
   VAR_21 = 0;
   break;
  case '6':
   VAR_20 = 0;
   break;
  case 'c':
   VAR_12 = FUNC_2(VAR_22, ((void*)0), 10);
   break;
  case 'C':
   VAR_17 = 1;
   break;
  case 'D':
   VAR_11 = 1;
   break;
  case 'F':
   VAR_14 = -1;
   break;
  case 'I':
   VAR_8 = 1;
   break;
  case 'l':
   VAR_13 = FUNC_2(VAR_22, ((void*)0), 10);
   break;
  case 'L':
   VAR_7 = 1;
   break;
  case 'n':
   VAR_10 = 1;
   break;
  case 'p':
   VAR_19 = FUNC_2(VAR_22, ((void*)0), 10);
   break;
  case 'P':
   VAR_26++;
   VAR_18 = 1;
   VAR_15 = VAR_2;
   VAR_9 = 0;
   break;
  case 'r':
   VAR_26++;
   VAR_15 = VAR_3;
   VAR_9 = VAR_1;
   break;
  case 'R':
   VAR_26++;
   VAR_15 = VAR_3;
   VAR_9 = VAR_0;
   break;
  case 'u':
   VAR_26++;
   VAR_15 = VAR_2;
   VAR_9 = VAR_1;
   break;
  case 'v':
   VAR_6 = FUNC_2(VAR_22, ((void*)0), 10);
   break;
  case 'V':
   VAR_5 = FUNC_2(VAR_22, ((void*)0), 10);
   break;
  case 'x':
   VAR_16 = 1;
   break;
  case 'h':
  default:
   FUNC_3(VAR_25[0]);
  }
 }

 if (!VAR_13)
  FUNC_0(1, 0, "payload may not be nonzero");
 if (VAR_15 != VAR_4 && VAR_13 > 1472)
  FUNC_0(1, 0, "udp packet might exceed expected MTU");
 if (!VAR_20 && !VAR_21)
  FUNC_0(1, 0, "pass -4 or -6, not both");
 if (VAR_26 > 1)
  FUNC_0(1, 0, "pass -P, -r, -R or -u, not multiple");
 if (VAR_8 && VAR_18)
  FUNC_0(1, 0, "cannot ask for pktinfo over pf_packet");

 if (VAR_23 != VAR_24 - 1)
  FUNC_0(1, 0, "missing required hostname argument");
}
