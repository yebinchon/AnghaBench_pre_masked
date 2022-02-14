
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int *,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2;

 VAR_2 = FUNC_2("/dev/pts/ptmx", "/dev/ptmx", ((void*)0), VAR_0, ((void*)0));
 if (VAR_2 < 0) {
  FUNC_1(VAR_1, "Failed to bind mount \"/dev/pts/ptmx\" to "
    "\"/dev/ptmx\" mount namespace\n");
  return -1;
 }

 VAR_2 = FUNC_0("/dev/ptmx", "/dev/pts/");
 if (VAR_2 < 0)
  return -1;

 return 0;
}
