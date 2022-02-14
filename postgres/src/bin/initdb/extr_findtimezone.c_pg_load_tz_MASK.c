
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TZname; int state; } ;
typedef TYPE_1__ pg_tz ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int *,int *,int) ;
 int FUNC_4 (char const*,int *,int) ;

__attribute__((used)) static pg_tz *
FUNC_5(const char *VAR_1)
{
 static pg_tz VAR_2;

 if (FUNC_2(VAR_1) > VAR_0)
  return ((void*)0);




 if (FUNC_0(VAR_1, "GMT") == 0)
 {
  if (!FUNC_4(VAR_1, &VAR_2.state, 1))
  {

   return ((void*)0);
  }
 }
 else if (FUNC_3(VAR_1, ((void*)0), &VAR_2.state, 1) != 0)
 {
  if (VAR_1[0] == ':' || !FUNC_4(VAR_1, &VAR_2.state, 0))
  {
   return ((void*)0);
  }
 }

 FUNC_1(VAR_2.TZname, VAR_1);

 return &VAR_2;
}
