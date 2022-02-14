
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int*,int*,int*) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int
FUNC_8(unsigned int *VAR_1)
{
 ssize_t VAR_2;
 size_t VAR_3 = 0;
 char *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6, VAR_7, VAR_8, VAR_9;
 FILE *VAR_10;

 if (!VAR_1)
  return 0;

 VAR_10 = FUNC_1("/proc/version_signature", "r");
 if (!VAR_10) {
  FUNC_4("Open /proc/version_signature failed: %s\n",
    FUNC_6(VAR_0));
  return -1;
 }

 VAR_2 = FUNC_3(&VAR_5, &VAR_3, VAR_10);
 FUNC_0(VAR_10);
 VAR_9 = -1;
 if (VAR_2 <= 0) {
  FUNC_4("Reading from /proc/version_signature failed: %s\n",
    FUNC_6(VAR_0));
  goto errout;
 }

 VAR_4 = FUNC_7(VAR_5, ' ');
 if (!VAR_4) {
  FUNC_4("Parsing /proc/version_signature failed: %s\n", VAR_5);
  goto errout;
 }

 VAR_9 = FUNC_5(VAR_4 + 1, "%d.%d.%d",
       &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9 != 3) {
  FUNC_4("Unable to get kernel version from /proc/version_signature '%s'\n",
    VAR_5);
  goto errout;
 }

 *VAR_1 = (VAR_6 << 16) + (VAR_7 << 8) + VAR_8;
 VAR_9 = 0;
errout:
 FUNC_2(VAR_5);
 return VAR_9;
}
