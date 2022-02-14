
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ VAR_2 ;

void
FUNC_4(const char *VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_4) < 0)
 {
  if (VAR_2 == VAR_0)
   return;






  if (FUNC_0(VAR_3) < 0 && VAR_2 != VAR_0)
   FUNC_1(VAR_1,
     (FUNC_2(),
      FUNC_3("cannot create temporary directory \"%s\": %m",
       VAR_3)));


  if (FUNC_0(VAR_4) < 0 && VAR_2 != VAR_0)
   FUNC_1(VAR_1,
     (FUNC_2(),
      FUNC_3("cannot create temporary subdirectory \"%s\": %m",
       VAR_4)));
 }
}
