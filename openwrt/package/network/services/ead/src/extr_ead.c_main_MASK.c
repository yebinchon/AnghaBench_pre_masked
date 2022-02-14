
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct ead_instance {int id; int list; int ifname; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 void* VAR_8 ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 () ;
 int VAR_10 ;
 int FUNC_12 (int *,int *) ;
 struct ead_instance* FUNC_13 (int) ;
 int FUNC_14 (struct ead_instance*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (char const*,int,...) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (int) ;
 int VAR_17 ;
 int FUNC_20 (int ,void*,int) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int,char*,int) ;

int FUNC_24(int VAR_18, char **VAR_19)
{
 struct ead_instance *VAR_20;
 struct timeval VAR_21;
 const char *VAR_22 = ((void*)0);
 bool VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25, VAR_26;

 if (VAR_18 == 1)
  return FUNC_22(VAR_19[0]);

 FUNC_0(&VAR_10);
 while ((VAR_26 = FUNC_10(VAR_18, VAR_19, "Bd:D:fhp:P:")) != -1) {
  switch(VAR_26) {
  case 'B':
   VAR_23 = 1;
   break;
  case 'f':
   VAR_12 = 1;
   break;
  case 'h':
   return FUNC_22(VAR_19[0]);
  case 'd':
   VAR_20 = FUNC_13(sizeof(struct ead_instance));
   FUNC_14(VAR_20, 0, sizeof(struct ead_instance));
   FUNC_0(&VAR_20->list);
   FUNC_20(VAR_20->ifname, VAR_13, sizeof(VAR_20->ifname) - 1);
   FUNC_12(&VAR_20->list, &VAR_10);
   VAR_20->id = VAR_24++;
   break;
  case 'D':
   VAR_8 = VAR_13;
   break;
  case 'p':
   VAR_14 = VAR_13;
   break;
  case 'P':
   VAR_22 = VAR_13;
   break;
  }
 }
 FUNC_16(VAR_4, VAR_15);
 FUNC_16(VAR_5, VAR_16);
 FUNC_16(VAR_7, VAR_16);
 FUNC_16(VAR_6, VAR_16);

 if (!VAR_24) {
  FUNC_8(VAR_17, "Error: ead needs at least one interface\n");
  return -1;
 }

 if (VAR_23) {
  if (FUNC_7() > 0)
   FUNC_6(0);

  VAR_25 = FUNC_15("/dev/null", VAR_2);
  FUNC_5(VAR_25, 0);
  FUNC_5(VAR_25, 1);
  FUNC_5(VAR_25, 2);
 }

 if (VAR_22) {
  char VAR_27[8];
  int VAR_28;

  FUNC_21(VAR_22);
  VAR_25 = FUNC_15(VAR_22, VAR_0|VAR_3|VAR_1, 0644);
  if (VAR_25 > 0) {
   VAR_28 = FUNC_18(VAR_27, "%d\n", FUNC_11());
   FUNC_23(VAR_25, VAR_27, VAR_28);
   FUNC_4(VAR_25);
  }
 }


 FUNC_9(VAR_9 + 3, 3);
 VAR_11 = *(((u16_t *) VAR_9) + 2);

 FUNC_19(0);
 FUNC_1();
 VAR_21.tv_sec = 1;
 VAR_21.tv_usec = 0;
 while (1) {
  FUNC_3();
  FUNC_19(1);
  FUNC_17(1);
 }
 FUNC_2();

 return 0;
}
