
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ id; int cksum; } ;
typedef TYPE_1__ udf_tag_t ;
typedef scalar_t__ udf_Uint16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(const udf_tag_t *VAR_0, udf_Uint16_t VAR_1)
{
  uint8_t *VAR_2;
  uint8_t VAR_3;
  uint8_t VAR_4 = 0;

  VAR_2 = (uint8_t *)VAR_0;





  if (VAR_0->id != VAR_1)
    return -1;

  for (VAR_3 = 0; VAR_3 < 15; VAR_3++)
    VAR_4 = VAR_4 + VAR_2[VAR_3];
  VAR_4 = VAR_4 - VAR_2[4];

  if (VAR_4 == VAR_0->cksum)
    return 0;

  return -1;
}
