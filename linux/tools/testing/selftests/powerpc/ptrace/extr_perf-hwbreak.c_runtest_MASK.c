
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_0;
 int VAR_1;
 int VAR_2;





 for (VAR_0 = 1 ; VAR_0 < 4; VAR_0++) {
  for (VAR_1 = 0 ; VAR_1 < 2; VAR_1++) {
   VAR_2 = FUNC_1(VAR_0, VAR_1, 0);
   if (VAR_2)
    return VAR_2;


   if (!FUNC_0())
    continue;
   VAR_2 = FUNC_1(VAR_0, VAR_1, 1);
   if (VAR_2)
    return VAR_2;
  }
 }
 return 0;
}
