
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int (* _deselect ) () ;int (* _select ) () ;} ;
struct TYPE_6__ {int (* _read_bytes ) (int*,int) ;int (* _write_bytes ) (int*,int) ;} ;
struct TYPE_7__ {TYPE_2__ SPI; } ;
struct TYPE_8__ {TYPE_1__ CS; TYPE_3__ IF; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 () ;

void FUNC_6(uint32_t VAR_1, uint8_t* VAR_2, uint16_t VAR_3) {
    FUNC_0();
    VAR_0.CS._select();

    uint8_t VAR_4[4] = {
        VAR_1 >> 8,
        VAR_1,
        0x00 | ((VAR_3 >> 8) & 0x7f),
        VAR_3 & 0xff,
    };
    VAR_0.IF.SPI._write_bytes(VAR_4, 4);
    VAR_0.IF.SPI._read_bytes(VAR_2, VAR_3);

    VAR_0.CS._deselect();
    FUNC_1();
}
