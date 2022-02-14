
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static inline uint16_t FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    VAR_1 = VAR_0[VAR_1 & 0x0F];
    return FUNC_0(0x1040 | (VAR_2 ? 0x0800 : 0x0000) | ((VAR_1 << 7) & 0x0700) | ((VAR_1 << 5) & 0x0020)) | ((VAR_3 << 1) & 0x001E) | (VAR_4 ? 0x0001 : 0x0000);
}
