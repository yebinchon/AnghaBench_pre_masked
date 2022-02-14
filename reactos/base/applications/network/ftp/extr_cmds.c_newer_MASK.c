
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,char const**,int,char*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int VAR_0 ;

void FUNC_3(int VAR_1, const char *VAR_2[])
{
 if (FUNC_1(VAR_1, VAR_2, -1, "w")) {
  FUNC_2("Local file \"%s\" is newer than remote file \"%s\"\n",
   VAR_2[1], VAR_2[2]);
  (void) FUNC_0(VAR_0);
 }
}
