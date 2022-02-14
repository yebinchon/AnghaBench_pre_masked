
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(int VAR_6)
{
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 int VAR_9, VAR_10;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_0);

 if (VAR_10 == -1)
  FUNC_0(VAR_1, "Could not read from %s\n", VAR_3);

 if (VAR_10 != VAR_0)
  FUNC_1(VAR_5, "Could only read %d bytes\n", VAR_10);

 FUNC_3("     00  01  02  03  04  05  06  07  08  09  0A  0B  0C  0D  0E  0F");
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if ((VAR_9 % 16) == 0)
   FUNC_3("\n%.2X: ", VAR_9);
  FUNC_3(" %.2x ", (uint8_t)VAR_7[VAR_9]);
 }
 FUNC_3("\n");

 if (!VAR_4)
  return;

 FUNC_3("\n");
 FUNC_2(VAR_6, 0, VAR_2);
 FUNC_5(VAR_4);

 VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_0);

 if (VAR_10 == -1)
  FUNC_0(VAR_1, "Could not read from %s\n", VAR_3);

 if (VAR_10 != VAR_0)
  FUNC_1(VAR_5, "Could only read %d bytes\n", VAR_10);

 FUNC_3("     00  01  02  03  04  05  06  07  08  09  0A  0B  0C  0D  0E  0F");
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if ((VAR_9 % 16) == 0)
   FUNC_3("\n%.2X: ", VAR_9);

  if (VAR_7[VAR_9] == VAR_8[VAR_9])
   FUNC_3(" %.2x ", (uint8_t)VAR_8[VAR_9]);
  else
   FUNC_3("*%.2x ", (uint8_t)VAR_8[VAR_9]);
 }
 FUNC_3("\n");
}
