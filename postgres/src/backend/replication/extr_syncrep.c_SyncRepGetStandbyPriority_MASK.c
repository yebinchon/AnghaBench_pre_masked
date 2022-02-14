
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* member_names; int nmembers; scalar_t__ syncrep_method; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 const char *VAR_4;
 int VAR_5;
 bool VAR_6 = 0;





 if (VAR_2)
  return 0;

 if (!FUNC_0() || VAR_1 == ((void*)0))
  return 0;

 VAR_4 = VAR_1->member_names;
 for (VAR_5 = 1; VAR_5 <= VAR_1->nmembers; VAR_5++)
 {
  if (FUNC_1(VAR_4, VAR_3) == 0 ||
   FUNC_2(VAR_4, "*") == 0)
  {
   VAR_6 = 1;
   break;
  }
  VAR_4 += FUNC_3(VAR_4) + 1;
 }

 if (!VAR_6)
  return 0;





 return (VAR_1->syncrep_method == VAR_0) ? VAR_5 : 1;
}
