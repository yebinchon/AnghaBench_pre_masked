
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int) ;
 int VAR_11 ;
 char* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (char*) ;

int FUNC_13(int VAR_12, char **VAR_13)
{
 __u32 VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 const char *VAR_17 = ((void*)0);
 int VAR_18, VAR_19, VAR_20;
 int VAR_21 = VAR_5;
 int VAR_22 = 1;
 int VAR_23;

 while ((VAR_23 = FUNC_4(VAR_12, VAR_13, "db:m:p:6")) != -1) {
  switch (VAR_23) {
  case 'd':
   VAR_22 = 0;
   break;
  case 'b':
   VAR_14 = FUNC_5(VAR_9);
   if (!VAR_14) {
    VAR_14 = FUNC_11(VAR_9, ((void*)0), 0);
    if (!VAR_14) {
     FUNC_7("Invalid device name\n");
     return VAR_1;
    }
   }
   break;
  case 'm':
   VAR_15 = FUNC_11(VAR_9, ((void*)0), 0);
   break;
  case 'p':
   VAR_16 = FUNC_11(VAR_9, ((void*)0), 0);
   break;
  case '6':
   VAR_21 = VAR_6;
   break;
  default:
   return FUNC_12(VAR_13[0]);
  }
 }

 if (VAR_10 == VAR_12)
  return FUNC_9(VAR_21);

 VAR_17 = VAR_13[VAR_10];
 if (!VAR_17) {
  FUNC_3(VAR_11, "cgroup path not given\n");
  return VAR_1;
 }

 if (VAR_22 && !VAR_14 && !VAR_15 && !VAR_16) {
  FUNC_3(VAR_11,
   "One of device, mark or priority must be given\n");
  return VAR_1;
 }

 VAR_18 = FUNC_6(VAR_17, VAR_3 | VAR_4);
 if (VAR_18 < 0) {
  FUNC_7("Failed to open cgroup path: '%s'\n", FUNC_10(VAR_8));
  return VAR_1;
 }

 if (VAR_22) {
  VAR_19 = FUNC_8(VAR_14, VAR_15, VAR_16);
  if (VAR_19 < 0) {
   FUNC_7("Failed to load prog: '%s'\n", FUNC_10(VAR_8));
   FUNC_7("Output from kernel verifier:\n%s\n-------\n",
          VAR_7);
   return VAR_1;
  }

  VAR_20 = FUNC_0(VAR_19, VAR_18,
          VAR_0, 0);
  if (VAR_20 < 0) {
   FUNC_7("Failed to attach prog to cgroup: '%s'\n",
          FUNC_10(VAR_8));
   return VAR_1;
  }
 } else {
  VAR_20 = FUNC_1(VAR_18, VAR_0);
  if (VAR_20 < 0) {
   FUNC_7("Failed to detach prog from cgroup: '%s'\n",
          FUNC_10(VAR_8));
   return VAR_1;
  }
 }

 FUNC_2(VAR_18);
 return VAR_2;
}
