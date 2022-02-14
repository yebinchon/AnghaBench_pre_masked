
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef scalar_t__ UChar ;
typedef int Int32 ;
typedef int BitStream ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1 ( BitStream* VAR_0, UChar VAR_1 )
{
   Int32 VAR_2;
   for (VAR_2 = 7; VAR_2 >= 0; VAR_2--)
      FUNC_0 ( VAR_0, (((UInt32) VAR_1) >> VAR_2) & 0x1 );
}
