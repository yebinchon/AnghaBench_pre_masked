
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int typecnt; int charcnt; int leapcnt; int ttisstdcnt; int ttisgmtcnt; } ;
struct TYPE_5__ {TYPE_1__ _bit32; } ;
typedef TYPE_2__ timelib_tzinfo ;
typedef int int32_t ;



__attribute__((used)) static void FUNC_0(const unsigned char **VAR_0, timelib_tzinfo *VAR_1)
{

 *VAR_0 += sizeof(unsigned char) * 6 * VAR_1->_bit32.typecnt;


 *VAR_0 += sizeof(char) * VAR_1->_bit32.charcnt;


 if (VAR_1->_bit32.leapcnt) {
  *VAR_0 += sizeof(int32_t) * VAR_1->_bit32.leapcnt * 2;
 }


 if (VAR_1->_bit32.ttisstdcnt) {
  *VAR_0 += sizeof(unsigned char) * VAR_1->_bit32.ttisstdcnt;
 }


 if (VAR_1->_bit32.ttisgmtcnt) {
  *VAR_0 += sizeof(unsigned char) * VAR_1->_bit32.ttisgmtcnt;
 }
}
