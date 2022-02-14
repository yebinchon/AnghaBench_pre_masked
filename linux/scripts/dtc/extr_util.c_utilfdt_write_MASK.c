
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*,void const*) ;

int FUNC_3(const char *VAR_1, const void *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_0, "Couldn't write blob to '%s': %s\n", VAR_1,
   FUNC_1(VAR_3));
 }
 return VAR_3 ? -1 : 0;
}
