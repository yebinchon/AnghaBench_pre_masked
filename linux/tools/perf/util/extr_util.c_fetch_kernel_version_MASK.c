
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,int*,int*,int*) ;
 int FUNC_4 (char*,int ,size_t) ;
 scalar_t__ FUNC_5 (struct utsname*) ;

int
FUNC_6(unsigned int *VAR_1, char *VAR_2,
       size_t VAR_3)
{
 struct utsname VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;

 if (FUNC_0("/proc/version_signature", VAR_0) == 0)
  if (!FUNC_1(VAR_1))
   VAR_9 = 1;

 if (FUNC_5(&VAR_4))
  return -1;

 if (VAR_2 && VAR_3) {
  FUNC_4(VAR_2, VAR_4.release, VAR_3);
  VAR_2[VAR_3 - 1] = '\0';
 }

 if (!VAR_1 || VAR_9)
  return 0;

 VAR_8 = FUNC_3(VAR_4.release, "%d.%d.%d",
       &VAR_5, &VAR_6, &VAR_7);

 if (VAR_8 != 3) {
  FUNC_2("Unable to get kernel version from uname '%s'\n",
    VAR_4.release);
  return -1;
 }

 *VAR_1 = (VAR_5 << 16) + (VAR_6 << 8) + VAR_7;
 return 0;
}
