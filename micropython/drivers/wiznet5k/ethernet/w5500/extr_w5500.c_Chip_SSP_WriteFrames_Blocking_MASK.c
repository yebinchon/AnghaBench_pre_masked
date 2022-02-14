
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int (* _write_bytes ) (int const*,int ) ;} ;
struct TYPE_5__ {TYPE_1__ SPI; } ;
struct TYPE_6__ {TYPE_2__ IF; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_1, const uint8_t *VAR_2, uint32_t VAR_3) {
    VAR_0.IF.SPI._write_bytes(VAR_2, VAR_3);
}
