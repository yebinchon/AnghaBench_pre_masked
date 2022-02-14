
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static zip_uint32_t
FUNC_0(zip_uint32_t VAR_4, zip_uint8_t *VAR_5, int VAR_6)
{
    if (VAR_4 < 0x0080) {
        if (VAR_6 < 1) {
          return VAR_6;
        }
 VAR_5[0] = VAR_4 & 0xff;
 return 1;
    }
    if (VAR_4 < 0x0800) {
        if (VAR_6 < 2) {
          return VAR_6;
        }
 VAR_5[0] = VAR_1 | ((VAR_4 >> 6) & 0x1f);
 VAR_5[1] = VAR_0 | (VAR_4 & 0x3f);
 return 2;
    }
    if (VAR_4 < 0x10000) {
        if (VAR_6 < 3) {
          return VAR_6;
        }
 VAR_5[0] = VAR_2 | ((VAR_4 >> 12) & 0x0f);
 VAR_5[1] = VAR_0 | ((VAR_4 >> 6) & 0x3f);
 VAR_5[2] = VAR_0 | (VAR_4 & 0x3f);
 return 3;
    }
    if (VAR_6 < 4) {
      return VAR_6;
    }
    VAR_5[0] = VAR_3 | ((VAR_4 >> 18) & 0x07);
    VAR_5[1] = VAR_0 | ((VAR_4 >> 12) & 0x3f);
    VAR_5[2] = VAR_0 | ((VAR_4 >> 6) & 0x3f);
    VAR_5[3] = VAR_0 | (VAR_4 & 0x3f);
    return 4;
}
