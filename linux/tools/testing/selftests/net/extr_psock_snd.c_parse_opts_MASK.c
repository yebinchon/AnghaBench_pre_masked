
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_10 ;
 void* FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_11, char **VAR_12)
{
 int VAR_13;

 while ((VAR_13 = FUNC_1(VAR_11, VAR_12, "bcCdgl:qt:vV")) != -1) {
  switch (VAR_13) {
  case 'b':
   VAR_2 = 1;
   break;
  case 'c':
   VAR_3 = 1;
   break;
  case 'C':
   VAR_4 = 1;
   break;
  case 'd':
   VAR_5 = 1;
   break;
  case 'g':
   VAR_6 = 1;
   break;
  case 'l':
   VAR_0 = FUNC_2(VAR_10, ((void*)0), 0);
   break;
  case 'q':
   VAR_7 = 1;
   break;
  case 't':
   VAR_1 = FUNC_2(VAR_10, ((void*)0), 0);
   break;
  case 'v':
   VAR_9 = 1;
   break;
  case 'V':
   VAR_8 = 1;
   break;
  default:
   FUNC_0(1, 0, "%s: parse error", VAR_12[0]);
  }
 }

 if (VAR_8 && VAR_5)
  FUNC_0(1, 0, "option vlan (-V) conflicts with dgram (-d)");

 if (VAR_3 && !VAR_9)
  FUNC_0(1, 0, "option csum offload (-c) requires vnet (-v)");

 if (VAR_4 && !VAR_3)
  FUNC_0(1, 0, "option csum bad (-C) requires csum offload (-c)");

 if (VAR_6 && !VAR_3)
  FUNC_0(1, 0, "option gso (-g) requires csum offload (-c)");
}
