
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int *,int) ;

void FUNC_3(int VAR_2, int VAR_3, uint8_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_5 != VAR_3)
  FUNC_0(VAR_0, "Cannot set offset to 0x%.2x", VAR_3);

 VAR_5 = FUNC_2(VAR_2, &VAR_4, 1);
 if (VAR_5 != 1)
  FUNC_0(VAR_0, "Cannot write value 0x%.2x to offset 0x%.2x",
      VAR_4, VAR_3);
}
