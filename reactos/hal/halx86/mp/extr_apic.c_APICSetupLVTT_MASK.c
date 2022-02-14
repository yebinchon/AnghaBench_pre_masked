
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;

VOID FUNC_5(ULONG VAR_10)
{
   ULONG VAR_11;

   VAR_11 = FUNC_3(FUNC_0(VAR_8));
   if (!FUNC_2(VAR_11))
   {
      VAR_11 = FUNC_4(VAR_7) | VAR_3 | VAR_9;
   }
   else
   {

      VAR_11 = VAR_3 | VAR_9;
   }
   FUNC_1(VAR_2, VAR_11);

   VAR_11 = FUNC_0(VAR_4);
   VAR_11 &= ~(VAR_5 | VAR_7);
   VAR_11 |= VAR_6;
   FUNC_1(VAR_4, VAR_11);
   FUNC_1(VAR_1, VAR_10 / VAR_0);
}
