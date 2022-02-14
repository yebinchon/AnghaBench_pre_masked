
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int PUSER_HANDLE_TABLE ;
typedef int PUSER_HANDLE_ENTRY ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

HANDLE FUNC_2(PUSER_HANDLE_TABLE VAR_0, HANDLE VAR_1 )
{
   PUSER_HANDLE_ENTRY VAR_2;

   if ((ULONG_PTR)VAR_1 >> 16)
      return VAR_1;
   if (!(VAR_2 = FUNC_1(VAR_0, VAR_1 )))
      return VAR_1;
   return FUNC_0( VAR_0, VAR_2 );
}
