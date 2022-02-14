
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_6, uint32_t VAR_7, uint16_t VAR_8)
{
    uint16_t VAR_9;

    if (VAR_6 > VAR_3) {
  FUNC_0("rtl8366s: invalid phy number!\n");
  return -1;
 }

    if (VAR_6 > VAR_1) {
  FUNC_0("rtl8366s: invalid phy register number!\n");
  return -1;
 }

 if (FUNC_1(VAR_0,
                           VAR_2))
        return -1;

    VAR_9 = 0x8000 | (1 << (VAR_6 + VAR_4))
                     | (VAR_7 & VAR_5);
    if (FUNC_1(VAR_9, VAR_8))
        return -1;

    return 0;
}
