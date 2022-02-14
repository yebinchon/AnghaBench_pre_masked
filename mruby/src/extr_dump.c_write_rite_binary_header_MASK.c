
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rite_binary_header {int* binary_crc; int binary_size; int compiler_version; int compiler_name; int binary_version; int binary_ident; } ;
typedef int mrb_state ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(mrb_state *VAR_7, size_t VAR_8, uint8_t *VAR_9, uint8_t VAR_10)
{
  struct rite_binary_header *VAR_11 = (struct rite_binary_header *)VAR_9;
  uint16_t VAR_12;
  uint32_t VAR_13;

  switch (VAR_10 & 128) {
  endian_big:
  case 130:
    FUNC_2(VAR_11->binary_ident, VAR_2, sizeof(VAR_11->binary_ident));
    break;
  endian_little:
  case 129:
    FUNC_2(VAR_11->binary_ident, VAR_3, sizeof(VAR_11->binary_ident));
    break;

  case 128:
    if (FUNC_0()) goto endian_big;
    goto endian_little;
    break;
  }

  FUNC_2(VAR_11->binary_version, VAR_1, sizeof(VAR_11->binary_version));
  FUNC_2(VAR_11->compiler_name, VAR_4, sizeof(VAR_11->compiler_name));
  FUNC_2(VAR_11->compiler_version, VAR_5, sizeof(VAR_11->compiler_version));
  FUNC_3(VAR_8 <= VAR_6);
  FUNC_5((uint32_t)VAR_8, VAR_11->binary_size);

  VAR_13 = (uint32_t)((&(VAR_11->binary_crc[0]) - VAR_9) + sizeof(uint16_t));
  VAR_12 = FUNC_1(VAR_9 + VAR_13, VAR_8 - VAR_13, 0);
  FUNC_4(VAR_12, VAR_11->binary_crc);

  return VAR_0;
}
