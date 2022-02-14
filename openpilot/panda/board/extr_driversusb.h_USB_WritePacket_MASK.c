
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef unsigned int uint16_t ;
typedef unsigned int USBx_DFIFO ;
struct TYPE_2__ {int DIEPTSIZ; int DIEPCTL; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int FUNC_1 (void const*,unsigned int) ;
 int FUNC_2 (char*) ;

void FUNC_3(const void *VAR_5, uint16_t VAR_6, uint32_t VAR_7) {





  uint8_t VAR_8 = (VAR_6 + (VAR_0 - 1U)) / VAR_0;
  uint32_t VAR_9 = 0;
  VAR_9 = (VAR_6 + 3U) / 4U;


  FUNC_0(VAR_7)->DIEPTSIZ = ((VAR_8 << 19) & VAR_3) |
                            (VAR_6 & VAR_4);
  FUNC_0(VAR_7)->DIEPCTL |= (VAR_1 | VAR_2);


  const uint32_t *VAR_10 = (const uint32_t *)VAR_5;
  for (uint32_t VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
    USBx_DFIFO(VAR_12) = *VAR_10;
    VAR_10++;
  }
}
