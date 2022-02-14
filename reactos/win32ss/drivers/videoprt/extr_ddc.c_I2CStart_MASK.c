
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int PVOID ;
typedef int PI2C_CALLBACKS ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_8(PVOID VAR_4, PI2C_CALLBACKS VAR_5, UCHAR VAR_6)
{

   if (FUNC_5() == VAR_1 || FUNC_4() == VAR_1)
     {
        FUNC_6(VAR_3, "I2CStart: Bus is not free!\n");
        return VAR_0;
     }


   FUNC_7(VAR_1);
   FUNC_0();
   if (!FUNC_2(VAR_4, VAR_5, VAR_6))
     {

        FUNC_1(VAR_4, VAR_5);
        FUNC_6(VAR_3, "I2CStart: Device not found (Address = 0x%x)\n", VAR_6);
        return VAR_0;
     }

   FUNC_3(VAR_3, "I2CStart: SUCCESS!\n");
   return VAR_2;
}
