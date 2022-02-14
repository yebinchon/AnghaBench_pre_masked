
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char ttinfo ;
typedef char tlinfo ;
struct TYPE_8__ {int leapcnt; int timecnt; int typecnt; int charcnt; int ttisstdcnt; int ttisgmtcnt; } ;
struct TYPE_7__ {int charcnt; int typecnt; int timecnt; int leapcnt; int ttisstdcnt; int ttisgmtcnt; } ;
struct TYPE_9__ {char* trans; unsigned char* trans_idx; char* type; char* timezone_abbr; char* leap_times; TYPE_2__ bit64; TYPE_1__ _bit32; int name; } ;
typedef TYPE_3__ timelib_tzinfo ;
typedef char int64_t ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ) ;

timelib_tzinfo *FUNC_3(timelib_tzinfo *VAR_0)
{
 timelib_tzinfo *VAR_1 = FUNC_2(VAR_0->name);
 VAR_1->_bit32.ttisgmtcnt = VAR_0->_bit32.ttisgmtcnt;
 VAR_1->_bit32.ttisstdcnt = VAR_0->_bit32.ttisstdcnt;
 VAR_1->_bit32.leapcnt = VAR_0->_bit32.leapcnt;
 VAR_1->_bit32.timecnt = VAR_0->_bit32.timecnt;
 VAR_1->_bit32.typecnt = VAR_0->_bit32.typecnt;
 VAR_1->_bit32.charcnt = VAR_0->_bit32.charcnt;
 VAR_1->bit64.ttisgmtcnt = VAR_0->bit64.ttisgmtcnt;
 VAR_1->bit64.ttisstdcnt = VAR_0->bit64.ttisstdcnt;
 VAR_1->bit64.leapcnt = VAR_0->bit64.leapcnt;
 VAR_1->bit64.timecnt = VAR_0->bit64.timecnt;
 VAR_1->bit64.typecnt = VAR_0->bit64.typecnt;
 VAR_1->bit64.charcnt = VAR_0->bit64.charcnt;

 if (VAR_0->bit64.timecnt) {
  VAR_1->trans = (int64_t *) FUNC_1(VAR_0->bit64.timecnt * sizeof(int64_t));
  VAR_1->trans_idx = (unsigned char*) FUNC_1(VAR_0->bit64.timecnt * sizeof(unsigned char));
  FUNC_0(VAR_1->trans, VAR_0->trans, VAR_0->bit64.timecnt * sizeof(int64_t));
  FUNC_0(VAR_1->trans_idx, VAR_0->trans_idx, VAR_0->bit64.timecnt * sizeof(unsigned char));
 }

 VAR_1->type = (ttinfo*) FUNC_1(VAR_0->bit64.typecnt * sizeof(ttinfo));
 FUNC_0(VAR_1->type, VAR_0->type, VAR_0->bit64.typecnt * sizeof(ttinfo));

 VAR_1->timezone_abbr = (char*) FUNC_1(VAR_0->bit64.charcnt);
 FUNC_0(VAR_1->timezone_abbr, VAR_0->timezone_abbr, VAR_0->bit64.charcnt);

 if (VAR_0->bit64.leapcnt) {
  VAR_1->leap_times = (tlinfo*) FUNC_1(VAR_0->bit64.leapcnt * sizeof(tlinfo));
  FUNC_0(VAR_1->leap_times, VAR_0->leap_times, VAR_0->bit64.leapcnt * sizeof(tlinfo));
 }

 return VAR_1;
}
