
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tz_info; scalar_t__ tz_abbr; } ;
typedef TYPE_1__ timelib_time ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 () ;

timelib_time* FUNC_3(timelib_time *VAR_0)
{
 timelib_time *VAR_1 = FUNC_2();
 FUNC_0(VAR_1, VAR_0, sizeof(timelib_time));
 if (VAR_0->tz_abbr) {
  VAR_1->tz_abbr = FUNC_1(VAR_0->tz_abbr);
 }
 if (VAR_0->tz_info) {
  VAR_1->tz_info = VAR_0->tz_info;
 }
 return VAR_1;
}
