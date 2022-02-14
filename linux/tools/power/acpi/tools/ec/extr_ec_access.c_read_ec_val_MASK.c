
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int*,int) ;

void FUNC_4(int VAR_3, int VAR_4)
{
 uint8_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1);
 if (VAR_6 != VAR_4)
  FUNC_0(VAR_0, "Cannot set offset to 0x%.2x", VAR_4);

 VAR_6 = FUNC_3(VAR_3, &VAR_5, 1);
 if (VAR_6 != 1)
  FUNC_0(VAR_0, "Could not read byte 0x%.2x from %s\n",
      VAR_4, VAR_2);
 FUNC_2("0x%.2x\n", VAR_5);
 return;
}
