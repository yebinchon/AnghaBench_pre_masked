
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (long) ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(void)
{
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_0)
 {
  FUNC_1(VAR_4, "running restore:      ");
  FUNC_0(VAR_4);
 }

 while (VAR_6 <= VAR_1)
 {
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5 == 0)
  {
   if (VAR_0)
   {
    FUNC_1(VAR_4, "OK\n");
    FUNC_0(VAR_4);
   }
   return 1;
  }
  FUNC_2(VAR_6++ * VAR_3 * 1000000L);
 }




 if (VAR_0)
  FUNC_1(VAR_4, "not restored\n");
 return 0;
}
