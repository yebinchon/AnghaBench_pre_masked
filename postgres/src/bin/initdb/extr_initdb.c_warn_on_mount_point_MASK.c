
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

void
FUNC_2(int VAR_1)
{
 if (VAR_1 == 2)
  FUNC_1(VAR_0,
    "%s", FUNC_0("It contains a dot-prefixed/invisible file, perhaps due to it being a mount point.\n"));
 else if (VAR_1 == 3)
  FUNC_1(VAR_0,
    "%s", FUNC_0("It contains a lost+found directory, perhaps due to it being a mount point.\n"));

 FUNC_1(VAR_0,
   "%s", FUNC_0("Using a mount point directly as the data directory is not recommended.\n"
     "Create a subdirectory under the mount point.\n"));
}
