
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dstpath ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_2 (char*) ;

void
FUNC_3(const char *VAR_5, bool VAR_6)
{
 char VAR_7[VAR_1];

 if (VAR_3)
  return;

 FUNC_1(VAR_7, sizeof(VAR_7), "%s/%s", VAR_2, VAR_5);
 if (FUNC_2(VAR_7) != 0)
 {
  if (VAR_4 == VAR_0 && VAR_6)
   return;

  FUNC_0("could not remove file \"%s\": %m",
     VAR_7);
 }
}
