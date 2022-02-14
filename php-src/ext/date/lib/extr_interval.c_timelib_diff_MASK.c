
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int two_backup ;
struct TYPE_14__ {int sse; scalar_t__ us; int zone_type; scalar_t__ z; int h; int dst; scalar_t__ s; scalar_t__ i; scalar_t__ d; scalar_t__ m; scalar_t__ y; TYPE_1__* tz_info; } ;
typedef TYPE_2__ timelib_time ;
typedef int timelib_sll ;
struct TYPE_15__ {int invert; int h; scalar_t__ us; scalar_t__ i; scalar_t__ d; int days; scalar_t__ s; scalar_t__ m; scalar_t__ y; } ;
typedef TYPE_3__ timelib_rel_time ;
typedef int one_backup ;
struct TYPE_13__ {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 () ;

timelib_rel_time *FUNC_7(timelib_time *VAR_0, timelib_time *VAR_1)
{
 timelib_rel_time *VAR_2;
 timelib_time *VAR_3;
 timelib_sll VAR_4 = 0 ,VAR_5 = 0, VAR_6 = 0;
 timelib_time VAR_7, VAR_8;

 VAR_2 = FUNC_6();
 VAR_2->invert = 0;
 if (
  (VAR_0->sse > VAR_1->sse) ||
  (VAR_0->sse == VAR_1->sse && VAR_0->us > VAR_1->us)
 ) {
  VAR_3 = VAR_1;
  VAR_1 = VAR_0;
  VAR_0 = VAR_3;
  VAR_2->invert = 1;
 }



 if (VAR_0->zone_type == 3 && VAR_1->zone_type == 3
  && (FUNC_3(VAR_0->tz_info->name, VAR_1->tz_info->name) == 0)
  && (VAR_0->z != VAR_1->z))
 {
  VAR_4 = VAR_1->z - VAR_0->z;
  VAR_5 = VAR_4 / 3600;
  VAR_6 = (VAR_4 % 3600) / 60;
 }


 FUNC_2(&VAR_7, VAR_0, sizeof(VAR_7));
 FUNC_2(&VAR_8, VAR_1, sizeof(VAR_8));

    FUNC_4(VAR_0, 0);
    FUNC_4(VAR_1, 0);

 VAR_2->y = VAR_1->y - VAR_0->y;
 VAR_2->m = VAR_1->m - VAR_0->m;
 VAR_2->d = VAR_1->d - VAR_0->d;
 VAR_2->h = VAR_1->h - VAR_0->h;
 VAR_2->i = VAR_1->i - VAR_0->i;
 VAR_2->s = VAR_1->s - VAR_0->s;
 VAR_2->us = VAR_1->us - VAR_0->us;
 if (VAR_7.dst == 0 && VAR_8.dst == 1 && VAR_1->sse >= VAR_0->sse + 86400 - VAR_4) {
  VAR_2->h += VAR_5;
  VAR_2->i += VAR_6;
 }

 VAR_2->days = FUNC_0(FUNC_1((VAR_0->sse - VAR_1->sse - (VAR_5 * 3600) - (VAR_6 * 60)) / 86400));

 FUNC_5(VAR_2->invert ? VAR_0 : VAR_1, VAR_2);


 if (VAR_7.dst == 1 && VAR_8.dst == 0 && VAR_1->sse >= VAR_0->sse + 86400) {
  if (VAR_1->sse < VAR_0->sse + 86400 - VAR_4) {
   VAR_2->d--;
   VAR_2->h = 24;
  } else {
   VAR_2->h += VAR_5;
   VAR_2->i += VAR_6;
  }
 }


 FUNC_2(VAR_0, &VAR_7, sizeof(VAR_7));
 FUNC_2(VAR_1, &VAR_8, sizeof(VAR_8));

 return VAR_2;
}
