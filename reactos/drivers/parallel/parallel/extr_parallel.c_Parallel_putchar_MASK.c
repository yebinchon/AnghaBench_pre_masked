
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PUCHAR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned char VAR_7)





{

 int VAR_8=0;
 int VAR_9;
 int VAR_10=0;

 do
   {
      VAR_9=VAR_6;
      VAR_8++;
   }
 while ( VAR_8 < 500000 && !(VAR_9 & VAR_2) );

 if (VAR_8==500000)
   {
      FUNC_0("printer_putchar(): timed out\n");
      return;
   }

 FUNC_1((PUCHAR)VAR_0,VAR_7);
 while (VAR_10 != 10000) { VAR_10++; }
 FUNC_1((PUCHAR)VAR_1, (VAR_4 | VAR_3 | VAR_5 ));
 while (VAR_10) { VAR_10--; }
 FUNC_1((PUCHAR)VAR_1, VAR_4 | VAR_3);
}
