
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2(char *VAR_0, int VAR_1, uint8 * VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_0, 0, VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_0 += 2)
 {
  FUNC_1(VAR_0, "%.2x", VAR_2[VAR_4]);
 }
}
