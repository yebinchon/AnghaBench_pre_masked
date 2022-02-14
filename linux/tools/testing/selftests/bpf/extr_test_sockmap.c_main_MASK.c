
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int verbose; int data_test; int iov_count; int iov_length; int rate; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*,int ,int*) ;
 int VAR_10 ;
 int FUNC_4 (char*,int ,int ) ;
 char* VAR_11 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sockmap_options*,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ) ;
 int VAR_14 ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int FUNC_11 (char**) ;

int FUNC_12(int VAR_23, char **VAR_24)
{
 int VAR_25 = 1, VAR_26 = 1024, VAR_27 = 1;
 struct sockmap_options VAR_28 = {0};
 int VAR_29, VAR_30, VAR_31, VAR_32 = 0;
 char *VAR_33 = VAR_2;
 int VAR_34 = VAR_5;

 if (VAR_23 < 2)
  return FUNC_10(-1);

 while ((VAR_29 = FUNC_3(VAR_23, VAR_24, ":dhvc:r:i:l:t:p:q:",
      VAR_10, &VAR_30)) != -1) {
  switch (VAR_29) {
  case 's':
   VAR_20 = FUNC_0(VAR_11);
   break;
  case 'e':
   VAR_17 = FUNC_0(VAR_11);
   break;
  case 'p':
   VAR_22 = FUNC_0(VAR_11);
   break;
  case 'q':
   VAR_18 = FUNC_0(VAR_11);
   break;
  case 'w':
   VAR_21 = FUNC_0(VAR_11);
   break;
  case 'x':
   VAR_19 = FUNC_0(VAR_11);
   break;
  case 'a':
   VAR_15 = FUNC_0(VAR_11);
   break;
  case 'k':
   VAR_16 = FUNC_0(VAR_11);
   break;
  case 'c':
   VAR_32 = FUNC_4(VAR_11, VAR_3, VAR_4);
   if (VAR_32 < 0) {
    FUNC_2(VAR_14,
     "ERROR: (%i) open cg path failed: %s\n",
     VAR_32, VAR_11);
    return VAR_32;
   }
   break;
  case 'r':
   VAR_27 = FUNC_0(VAR_11);
   break;
  case 'v':
   VAR_28.verbose = 1;
   break;
  case 'i':
   VAR_25 = FUNC_0(VAR_11);
   break;
  case 'l':
   VAR_26 = FUNC_0(VAR_11);
   break;
  case 'd':
   VAR_28.data_test = 1;
   break;
  case 't':
   if (FUNC_8(VAR_11, "ping") == 0) {
    VAR_34 = VAR_5;
   } else if (FUNC_8(VAR_11, "sendmsg") == 0) {
    VAR_34 = VAR_6;
   } else if (FUNC_8(VAR_11, "base") == 0) {
    VAR_34 = VAR_0;
   } else if (FUNC_8(VAR_11, "base_sendpage") == 0) {
    VAR_34 = VAR_1;
   } else if (FUNC_8(VAR_11, "sendpage") == 0) {
    VAR_34 = VAR_7;
   } else {
    FUNC_11(VAR_24);
    return -1;
   }
   break;
  case 0:
   break;
  case 'h':
  default:
   FUNC_11(VAR_24);
   return -1;
  }
 }

 if (VAR_23 <= 3 && VAR_32)
  return FUNC_10(VAR_32);

 if (!VAR_32) {
  FUNC_2(VAR_14, "%s requires cgroup option: --cgroup <path>\n",
   VAR_24[0]);
  return -1;
 }

 VAR_31 = FUNC_5(VAR_33);
 if (VAR_31) {
  FUNC_2(VAR_14, "populate program: (%s) %s\n",
   VAR_33, FUNC_9(VAR_9));
  return 1;
 }
 VAR_12 = 1;


 FUNC_7(VAR_8, VAR_13);

 VAR_28.iov_count = VAR_25;
 VAR_28.iov_length = VAR_26;
 VAR_28.rate = VAR_27;

 VAR_31 = FUNC_6(&VAR_28, VAR_32, VAR_34);
 FUNC_1(VAR_32);
 return VAR_31;
}
