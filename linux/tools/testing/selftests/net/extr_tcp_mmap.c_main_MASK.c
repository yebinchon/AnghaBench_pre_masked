
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int on ;
typedef int mss ;
typedef int max_pacing_rate ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int,struct sockaddr const*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 long VAR_18 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr const*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_19 ;
 int FUNC_8 (int,int) ;
 char* FUNC_9 (int *,long,int,int,int,int ) ;
 int FUNC_10 (char*,long) ;
 char* VAR_20 ;
 int FUNC_11 (char*) ;
 void* VAR_21 ;
 long FUNC_12 (int,char*,long,int ) ;
 int FUNC_13 (int,int ,int ,...) ;
 int FUNC_14 (int ,char*,struct sockaddr_storage*) ;
 void* VAR_22 ;
 int FUNC_15 (int ,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;

int FUNC_16(int VAR_25, char *VAR_26[])
{
 struct sockaddr_storage VAR_27, VAR_28;
 unsigned int VAR_29 = 0;
 unsigned long VAR_30 = 0;
 char *VAR_31 = ((void*)0);
 int VAR_32, VAR_33, VAR_34 = 1;
 char *VAR_35;
 int VAR_36 = 0;
 int VAR_37 = 0;

 while ((VAR_33 = FUNC_7(VAR_25, VAR_26, "46p:svr:w:H:zxkP:M:")) != -1) {
  switch (VAR_33) {
  case '4':
   VAR_16 = VAR_5;
   VAR_15 = sizeof(struct sockaddr_in);
   break;
  case '6':
   VAR_16 = VAR_6;
   VAR_15 = sizeof(struct sockaddr_in6);
   break;
  case 'p':
   VAR_17 = FUNC_1(VAR_20);
   break;
  case 'H':
   VAR_31 = VAR_20;
   break;
  case 's':
   VAR_36++;
   break;
  case 'r':
   VAR_21 = FUNC_1(VAR_20);
   break;
  case 'w':
   VAR_22 = FUNC_1(VAR_20);
   break;
  case 'z':
   VAR_24 = 1;
   break;
  case 'M':
   VAR_37 = FUNC_1(VAR_20);
   break;
  case 'x':
   VAR_23 = 1;
   break;
  case 'k':
   VAR_19 = 1;
   break;
  case 'P':
   VAR_29 = FUNC_1(VAR_20) ;
   break;
  default:
   FUNC_6(1);
  }
 }
 if (VAR_36) {
  int VAR_38 = FUNC_15(VAR_16, VAR_9, 0);

  if (VAR_38 == -1) {
   FUNC_11("socket");
   FUNC_6(1);
  }
  FUNC_0(VAR_38);
  FUNC_13(VAR_38, VAR_10, VAR_12, &VAR_34, sizeof(VAR_34));

  FUNC_14(VAR_16, VAR_31, &VAR_27);

  if (VAR_37 &&
      FUNC_13(VAR_38, VAR_1, VAR_14,
          &VAR_37, sizeof(VAR_37)) == -1) {
   FUNC_11("setsockopt TCP_MAXSEG");
   FUNC_6(1);
  }
  if (FUNC_2(VAR_38, (const struct sockaddr *)&VAR_27, VAR_15) == -1) {
   FUNC_11("bind");
   FUNC_6(1);
  }
  if (FUNC_8(VAR_38, 128) == -1) {
   FUNC_11("listen");
   FUNC_6(1);
  }
  FUNC_5(VAR_38);
 }
 VAR_35 = FUNC_9(((void*)0), VAR_18, VAR_7 | VAR_8,
         VAR_3 | VAR_2, -1, 0);
 if (VAR_35 == (char *)-1) {
  FUNC_11("mmap");
  FUNC_6(1);
 }

 VAR_32 = FUNC_15(VAR_16, VAR_9, 0);
 if (VAR_32 == -1) {
  FUNC_11("socket");
  FUNC_6(1);
 }
 FUNC_0(VAR_32);

 FUNC_14(VAR_16, VAR_31, &VAR_28);

 if (VAR_37 &&
     FUNC_13(VAR_32, VAR_1, VAR_14, &VAR_37, sizeof(VAR_37)) == -1) {
  FUNC_11("setsockopt TCP_MAXSEG");
  FUNC_6(1);
 }
 if (FUNC_4(VAR_32, (const struct sockaddr *)&VAR_28, VAR_15) == -1) {
  FUNC_11("connect");
  FUNC_6(1);
 }
 if (VAR_29 &&
     FUNC_13(VAR_32, VAR_10, VAR_11,
         &VAR_29, sizeof(VAR_29)) == -1)
  FUNC_11("setsockopt SO_MAX_PACING_RATE");

 if (VAR_24 && FUNC_13(VAR_32, VAR_10, VAR_13,
          &VAR_34, sizeof(VAR_34)) == -1) {
  FUNC_11("setsockopt SO_ZEROCOPY, (-z option disabled)");
  VAR_24 = 0;
 }
 while (VAR_30 < VAR_0) {
  long VAR_39 = VAR_0 - VAR_30;

  if (VAR_39 > VAR_18)
   VAR_39 = VAR_18;

  VAR_39 = FUNC_12(VAR_32, VAR_35, VAR_39, VAR_24 ? VAR_4 : 0);
  if (VAR_39 <= 0)
   break;
  VAR_30 += VAR_39;
 }
 FUNC_3(VAR_32);
 FUNC_10(VAR_35, VAR_18);
 return 0;
}
