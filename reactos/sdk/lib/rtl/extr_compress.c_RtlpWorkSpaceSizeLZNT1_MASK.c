
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ USHORT ;
typedef int* PULONG ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static NTSTATUS
FUNC_0(USHORT VAR_4,
                       PULONG VAR_5,
                       PULONG VAR_6)
{
   if (VAR_4 == VAR_1)
   {
      *VAR_5 = 0x8010;
      *VAR_6 = 0x1000;
      return(VAR_3);
   }
   else if (VAR_4 == VAR_0)
   {
      *VAR_5 = 0x10;
      *VAR_6 = 0x1000;
      return(VAR_3);
   }

   return(VAR_2);
}
