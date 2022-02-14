
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rite_binary_header {int binary_size; int binary_crc; int binary_version; int binary_ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(const uint8_t *VAR_9, size_t VAR_10, size_t *VAR_11, uint16_t *VAR_12, uint8_t *VAR_13)
{
  const struct rite_binary_header *VAR_14 = (const struct rite_binary_header *)VAR_9;

  if (VAR_10 < sizeof(struct rite_binary_header)) {
    return VAR_5;
  }

  if (FUNC_3(VAR_14->binary_ident, VAR_7, sizeof(VAR_14->binary_ident)) == 0) {
    if (FUNC_0())
      *VAR_13 |= VAR_2;
    else
      *VAR_13 |= VAR_0;
  }
  else if (FUNC_3(VAR_14->binary_ident, VAR_8, sizeof(VAR_14->binary_ident)) == 0) {
    if (FUNC_0())
      *VAR_13 |= VAR_1;
    else
      *VAR_13 |= VAR_2;
  }
  else {
    return VAR_3;
  }

  if (FUNC_3(VAR_14->binary_version, VAR_6, sizeof(VAR_14->binary_version)) != 0) {
    return VAR_3;
  }

  if (VAR_12) {
    *VAR_12 = FUNC_1(VAR_14->binary_crc);
  }
  *VAR_11 = (size_t)FUNC_2(VAR_14->binary_size);

  if (VAR_10 < *VAR_11) {
    return VAR_5;
  }

  return VAR_4;
}
