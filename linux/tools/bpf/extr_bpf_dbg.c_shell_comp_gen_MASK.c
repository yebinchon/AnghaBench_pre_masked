
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, int VAR_2)
{
 static int VAR_3, VAR_4;

 if (!VAR_2) {
  VAR_3 = 0;
  VAR_4 = FUNC_2(VAR_1);
 }

 for (; VAR_3 < FUNC_0(VAR_0); ) {
  const char *VAR_5 = VAR_0[VAR_3].name;

  VAR_3++;
  if (FUNC_3(VAR_5, VAR_1, VAR_4) == 0)
   return FUNC_1(VAR_5);
 }

 return ((void*)0);
}
