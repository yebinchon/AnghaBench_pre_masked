
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {void* charcnt; void* typecnt; void* timecnt; void* leapcnt; void* ttisstdcnt; void* ttisgmtcnt; } ;
struct TYPE_5__ {TYPE_1__ bit64; } ;
typedef TYPE_2__ timelib_tzinfo ;
typedef int buffer ;


 int FUNC_0 (int **,unsigned char const*,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const unsigned char **VAR_0, timelib_tzinfo *VAR_1)
{
 uint32_t VAR_2[6];

 FUNC_0(&VAR_2, *VAR_0, sizeof(VAR_2));
 VAR_1->bit64.ttisgmtcnt = FUNC_1(VAR_2[0]);
 VAR_1->bit64.ttisstdcnt = FUNC_1(VAR_2[1]);
 VAR_1->bit64.leapcnt = FUNC_1(VAR_2[2]);
 VAR_1->bit64.timecnt = FUNC_1(VAR_2[3]);
 VAR_1->bit64.typecnt = FUNC_1(VAR_2[4]);
 VAR_1->bit64.charcnt = FUNC_1(VAR_2[5]);
 *VAR_0 += sizeof(VAR_2);
}
