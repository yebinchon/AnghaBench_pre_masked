
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dstpath ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4)
{
 char VAR_5[VAR_0];

 if (VAR_2)
  return;

 FUNC_2(VAR_5, sizeof(VAR_5), "%s/%s", VAR_1, VAR_4);
 if (FUNC_0(VAR_5, VAR_3) != 0)
  FUNC_1("could not create directory \"%s\": %m",
     VAR_5);
}
