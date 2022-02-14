
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,int *,int) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_6(__u16 VAR_1, __u16 *VAR_2, __u16 *VAR_3)
{
 char VAR_4[60];
 char VAR_5[57];
 char VAR_6[4096];
 FILE *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5, "%s/%04x_value", VAR_0, VAR_1);
 if (VAR_8 < 0) {
  FUNC_3("sprintf value failed\n");
  return 2;
 }
 VAR_7 = FUNC_1(VAR_5, "rb");
 if (!VAR_7) {
  FUNC_3("failed to open %s\n", VAR_5);
  return 2;
 }
 FUNC_2(VAR_6, 1, 4096, VAR_7);
 FUNC_0(VAR_7);
 *VAR_3 = (__u16) FUNC_5(VAR_6, ((void*)0), 16);

 VAR_8 = FUNC_4(VAR_4, "%s/%04x_location", VAR_0, VAR_1);
 if (VAR_8 < 0) {
  FUNC_3("sprintf location failed\n");
  return 1;
 }
 VAR_7 = FUNC_1(VAR_4, "rb");
 if (!VAR_7) {
  FUNC_3("failed to open %s\n", VAR_4);
  return 2;
 }
 FUNC_2(VAR_6, 1, 4096, VAR_7);
 FUNC_0(VAR_7);
 *VAR_2 = (__u16) FUNC_5(VAR_6, ((void*)0), 16);

 if (*VAR_2)
  return 0;
 return 2;
}
