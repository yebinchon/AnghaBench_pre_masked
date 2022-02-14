
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum CRC_PRESETS { ____Placeholder_CRC_PRESETS } CRC_PRESETS ;
struct TYPE_5__ {int xout; int poly; int reflect; int size; int crc; } ;
struct TYPE_4__ {int xout; int poly; int reflect; int size; int crc; } ;
typedef TYPE_1__ R_CRC_CTX ;


 TYPE_2__* VAR_0 ;

void FUNC_0 (R_CRC_CTX *VAR_1, enum CRC_PRESETS VAR_2) {
 VAR_1->crc = VAR_0[VAR_2].crc;
 VAR_1->size = VAR_0[VAR_2].size;
 VAR_1->reflect = VAR_0[VAR_2].reflect;
 VAR_1->poly = VAR_0[VAR_2].poly;
 VAR_1->xout = VAR_0[VAR_2].xout;
}
