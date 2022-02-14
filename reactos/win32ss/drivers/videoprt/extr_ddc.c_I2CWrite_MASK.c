
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int PVOID ;
typedef int PI2C_CALLBACKS ;
typedef int BOOL ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_6(PVOID VAR_3, PI2C_CALLBACKS VAR_4, UCHAR VAR_5)
{
   UCHAR VAR_6;
   BOOL VAR_7;


   for (VAR_6 = (1 << 7); VAR_6 != 0; VAR_6 >>= 1)
     {
        FUNC_4(VAR_1);
        FUNC_5((VAR_5 & VAR_6) ? VAR_0 : VAR_1);
        FUNC_0();
        FUNC_4(VAR_0);
        FUNC_0();
     }


   FUNC_4(VAR_1);
   FUNC_5(VAR_0);
   FUNC_0();
   FUNC_4(VAR_0);
   do
     {
        FUNC_0();
     }
   while (FUNC_2() != VAR_0);
   VAR_7 = (FUNC_3() == VAR_1);
   FUNC_0();

   FUNC_1(VAR_2, "I2CWrite: %s\n", VAR_7 ? "Ack" : "Nak");
   return VAR_7;
}
