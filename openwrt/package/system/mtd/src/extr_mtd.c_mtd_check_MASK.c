
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_4(VAR_2, ':')) {
  VAR_4 = FUNC_5(VAR_2);
  VAR_2 = VAR_4;
 }

 do {
  VAR_3 = FUNC_4(VAR_2, ':');
  if (VAR_3) {
   *VAR_3 = 0;
   VAR_3++;
  }

  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5 < 0)
   return 0;

  if (!VAR_0)
   VAR_0 = FUNC_2(VAR_1);

  FUNC_0(VAR_5);
  VAR_2 = VAR_3;
 } while (VAR_3);

 if (VAR_4)
  FUNC_1(VAR_4);

 return 1;
}
