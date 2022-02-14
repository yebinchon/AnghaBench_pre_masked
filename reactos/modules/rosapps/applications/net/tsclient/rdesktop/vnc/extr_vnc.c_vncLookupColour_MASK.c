
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int* bytes; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ rfbColourMap ;


 scalar_t__ FUNC_0 (int) ;

uint8_t
FUNC_1(rfbColourMap * VAR_0, uint8_t * VAR_1)
{
 uint8_t VAR_2, VAR_3 = 0;
 uint8_t *VAR_4 = VAR_0->data.bytes;
 uint32_t VAR_5, VAR_6 = FUNC_0(VAR_4[0] - VAR_1[0]) + FUNC_0(VAR_4[1] - VAR_1[1]) + FUNC_0(VAR_4[2] - VAR_1[2]);
 for (VAR_2 = 1; VAR_2 < 255; VAR_2++)
 {
  VAR_5 = FUNC_0(VAR_4[VAR_2 * 3] - VAR_1[0]) + FUNC_0(VAR_4[VAR_2 * 3 + 1] - VAR_1[1]) + FUNC_0(VAR_4[VAR_2 * 3 + 2] - VAR_1[2]);
  if (VAR_5 < VAR_6)
  {
   VAR_6 = VAR_5;
   VAR_3 = VAR_2;
  }
 }
 return (VAR_3);
}
