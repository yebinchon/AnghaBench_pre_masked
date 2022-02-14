
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, bool VAR_3, int VAR_4)
{
 if (VAR_3)
 {
  if (FUNC_4(VAR_2) != 0 && VAR_1 != VAR_0)
   FUNC_1(VAR_4,
     (FUNC_2(),
      FUNC_3("could not remove directory \"%s\": %m", VAR_2)));
 }
 else
 {

  FUNC_0(VAR_2, 0);
 }
}
