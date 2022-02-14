
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encoding; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_1)
{
 int VAR_2;




 for (;;)
 {
  VAR_1 = FUNC_3(VAR_1);
  if (VAR_1[0] == '(')
   VAR_1++;
  else
   break;
 }




 VAR_2 = 0;
 while (FUNC_1((unsigned char) VAR_1[VAR_2]))
  VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

 if (VAR_2 == 6 && FUNC_2(VAR_1, "select", 6) == 0)
  return 1;

 if (VAR_2 == 6 && FUNC_2(VAR_1, "values", 6) == 0)
  return 1;

 return 0;
}
