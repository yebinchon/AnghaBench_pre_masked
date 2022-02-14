
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, int VAR_3)
{
 if (FUNC_3(VAR_2) < 0)
 {

  if (VAR_1 != VAR_0)
   FUNC_0(VAR_3,
     (FUNC_1(),
      FUNC_2("could not remove cache file \"%s\": %m",
       VAR_2)));
 }
}
