
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1()
{
   FUNC_0("Usage:\n"
          "%s -c     - Create patch\n"
          "%s -d     - Dump patch\n"
          "%s        - Apply patch\n"
          "\n"
          "A patch can be created like this:\n"
          "%s -c \"patch name\" output.exe file1.orig file1.patched[ file2.orig file2.patched[ ...]]\n",
          VAR_0[0], VAR_0[0], VAR_0[0], VAR_0[0]);
}
