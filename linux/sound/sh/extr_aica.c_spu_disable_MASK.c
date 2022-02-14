
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2;
 unsigned long VAR_3;
 u32 VAR_4;
 FUNC_3();
 VAR_4 = FUNC_2(VAR_0);
 VAR_4 |= 1;
 FUNC_3();
 FUNC_1(VAR_3);
 FUNC_4(VAR_4, VAR_0);
 FUNC_0(VAR_3);
 for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
  FUNC_3();
  VAR_4 = FUNC_2(VAR_1 + (VAR_2 * 0x80));
  VAR_4 = (VAR_4 & ~0x4000) | 0x8000;
  FUNC_3();
  FUNC_1(VAR_3);
  FUNC_4(VAR_4, VAR_1 + (VAR_2 * 0x80));
  FUNC_0(VAR_3);
 }
}
