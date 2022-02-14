
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 while (VAR_3 < VAR_2) {
  uint32_t *VAR_4 = (uint32_t *)(VAR_1 + VAR_3);

  FUNC_2(FUNC_1(VAR_4) + VAR_3, VAR_4);
  FUNC_2(FUNC_1(VAR_4 + 1) + VAR_3 + 4, VAR_4 + 1);
  FUNC_2(FUNC_1(VAR_4 + 2) + VAR_3 + 8, VAR_4 + 2);

  VAR_3 += sizeof(uint32_t) * 3;
 }

 FUNC_0(VAR_1, VAR_2 / 12, 12, VAR_0);

 VAR_3 = 0;
 while (VAR_3 < VAR_2) {
  uint32_t *VAR_5 = (uint32_t *)(VAR_1 + VAR_3);

  FUNC_2(FUNC_1(VAR_5) - VAR_3, VAR_5);
  FUNC_2(FUNC_1(VAR_5 + 1) - (VAR_3 + 4), VAR_5 + 1);
  FUNC_2(FUNC_1(VAR_5 + 2) - (VAR_3 + 8), VAR_5 + 2);

  VAR_3 += sizeof(uint32_t) * 3;
 }
}
