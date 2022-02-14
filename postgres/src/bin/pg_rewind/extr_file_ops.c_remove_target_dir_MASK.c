
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dstpath ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_2)
  return;

 FUNC_2(VAR_4, sizeof(VAR_4), "%s/%s", VAR_1, VAR_3);
 if (FUNC_1(VAR_4) != 0)
  FUNC_0("could not remove directory \"%s\": %m",
     VAR_4);
}
