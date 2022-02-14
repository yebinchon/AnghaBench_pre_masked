
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int timelib_tzinfo ;
struct TYPE_8__ {scalar_t__ first_last_day_of; scalar_t__ have_special_relative; scalar_t__ have_weekday_relative; } ;
struct TYPE_9__ {int sse_uptodate; TYPE_1__ relative; scalar_t__ have_relative; void* sse; int s; int i; int h; int d; int y; int m; } ;
typedef TYPE_2__ timelib_time ;
typedef void* timelib_sll ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(timelib_time* VAR_0, timelib_tzinfo* VAR_1)
{
 timelib_sll VAR_2 = 0;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 VAR_2 += FUNC_7(VAR_0->y);
 VAR_2 += FUNC_5(VAR_0->m, VAR_0->y);
 VAR_2 += FUNC_4(VAR_0->d);
 VAR_2 += FUNC_6(VAR_0->h, VAR_0->i, VAR_0->s);
 VAR_0->sse = VAR_2;

 VAR_2 += FUNC_3(VAR_0, VAR_1);
 VAR_0->sse = VAR_2;

 VAR_0->sse_uptodate = 1;
 VAR_0->have_relative = VAR_0->relative.have_weekday_relative = VAR_0->relative.have_special_relative = VAR_0->relative.first_last_day_of = 0;
}
