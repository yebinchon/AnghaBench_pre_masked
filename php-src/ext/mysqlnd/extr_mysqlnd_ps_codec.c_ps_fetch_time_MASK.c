
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ulong ;
typedef scalar_t__ zend_uchar ;
typedef scalar_t__ zend_bool ;
typedef int uint32_t ;
typedef int t ;
struct st_mysqlnd_time {int day; unsigned int hour; unsigned int minute; unsigned int second; int second_part; scalar_t__ neg; void* time_type; scalar_t__ month; scalar_t__ year; } ;
struct TYPE_3__ {int decimals; } ;
typedef TYPE_1__ MYSQLND_FIELD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct st_mysqlnd_time*,int ,int) ;
 int FUNC_4 (char**,int ,char*,char*,int,unsigned int,unsigned int,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__ const**) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (scalar_t__ const*) ;

__attribute__((used)) static void
FUNC_9(zval * VAR_2, const MYSQLND_FIELD * const VAR_3, const unsigned int VAR_4, const zend_uchar ** VAR_5)
{
 struct st_mysqlnd_time VAR_6;
 zend_ulong VAR_7;
 char * VAR_8;
 FUNC_0("ps_fetch_time");

 if ((VAR_7 = FUNC_6(VAR_5))) {
  const zend_uchar * VAR_9 = *VAR_5;

  VAR_6.time_type = VAR_1;
  VAR_6.neg = (zend_bool) VAR_9[0];

  VAR_6.day = (zend_ulong) FUNC_8(VAR_9+1);
  VAR_6.hour = (unsigned int) VAR_9[5];
  VAR_6.minute = (unsigned int) VAR_9[6];
  VAR_6.second = (unsigned int) VAR_9[7];
  VAR_6.second_part = (VAR_7 > 8) ? (zend_ulong) FUNC_8(VAR_9+8) : 0;
  VAR_6.year = VAR_6.month= 0;
  if (VAR_6.day) {

   VAR_6.hour += VAR_6.day*24;
   VAR_6.day = 0;
  }

  (*VAR_5) += VAR_7;
 } else {
  FUNC_3(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.time_type = VAR_1;
 }

    if (VAR_3->decimals > 0 && VAR_3->decimals < 7) {
        VAR_7 = FUNC_4(
            &VAR_8,
            0,
            "%s%02u:%02u:%02u.%0*u",
            (VAR_6.neg ? "-" : ""),
            VAR_6.hour,
            VAR_6.minute,
            VAR_6.second,
            VAR_3->decimals,
           (uint32_t) (VAR_6.second_part / FUNC_7(10, 6 - VAR_3->decimals))
        );
    } else {
        VAR_7 = FUNC_4(&VAR_8, 0, "%s%02u:%02u:%02u", (VAR_6.neg ? "-" : ""), VAR_6.hour, VAR_6.minute, VAR_6.second);
    }

 FUNC_1("%s", VAR_8);
 FUNC_2(VAR_2, VAR_8, VAR_7);
 FUNC_5(VAR_8);
 VAR_0;
}
