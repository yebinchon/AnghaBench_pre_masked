
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* bits; } ;
struct TYPE_4__ {TYPE_1__ nkro; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static bool FUNC_0(uint8_t VAR_1) {
    return (VAR_0->nkro.bits[VAR_1>>3] & 1<<(VAR_1&7)) != 0;
}
