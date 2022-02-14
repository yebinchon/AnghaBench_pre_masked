
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (DSL_DEV_Device_t * VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5 = 0;

 while (VAR_5 < VAR_2) {
  FUNC_1 (VAR_3, (u32) VAR_1, &VAR_4);
  VAR_4 &= (VAR_0);
  if (VAR_4)
   break;
  VAR_5++;
  if (VAR_5 == VAR_2) {
   FUNC_0 ("PollforDbg fail!\n");
  }
 }
 FUNC_2 (VAR_3, (u32) VAR_1, VAR_0);
}
