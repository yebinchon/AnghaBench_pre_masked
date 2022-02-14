
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ h; scalar_t__ i; scalar_t__ s; scalar_t__ us; scalar_t__ y; scalar_t__ m; scalar_t__ d; scalar_t__ z; scalar_t__ dst; scalar_t__ zone_type; int is_localtime; int * tz_info; int * tz_abbr; int have_time; scalar_t__ have_date; } ;
typedef TYPE_1__ timelib_time ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

void FUNC_2(timelib_time *VAR_3, timelib_time *VAR_4, int VAR_5)
{
 if (!(VAR_5 & VAR_1) && VAR_3->have_date && !VAR_3->have_time) {
  VAR_3->h = 0;
  VAR_3->i = 0;
  VAR_3->s = 0;
  VAR_3->us = 0;
 }
 if (
  VAR_3->y != VAR_2 || VAR_3->m != VAR_2 || VAR_3->d != VAR_2 ||
  VAR_3->h != VAR_2 || VAR_3->i != VAR_2 || VAR_3->s != VAR_2
 ) {
  if (VAR_3->us == VAR_2) VAR_3->us = 0;
 } else {
  if (VAR_3->us == VAR_2) VAR_3->us = VAR_4->us != VAR_2 ? VAR_4->us : 0;
 }
 if (VAR_3->y == VAR_2) VAR_3->y = VAR_4->y != VAR_2 ? VAR_4->y : 0;
 if (VAR_3->m == VAR_2) VAR_3->m = VAR_4->m != VAR_2 ? VAR_4->m : 0;
 if (VAR_3->d == VAR_2) VAR_3->d = VAR_4->d != VAR_2 ? VAR_4->d : 0;
 if (VAR_3->h == VAR_2) VAR_3->h = VAR_4->h != VAR_2 ? VAR_4->h : 0;
 if (VAR_3->i == VAR_2) VAR_3->i = VAR_4->i != VAR_2 ? VAR_4->i : 0;
 if (VAR_3->s == VAR_2) VAR_3->s = VAR_4->s != VAR_2 ? VAR_4->s : 0;
 if (VAR_3->z == VAR_2) VAR_3->z = VAR_4->z != VAR_2 ? VAR_4->z : 0;
 if (VAR_3->dst == VAR_2) VAR_3->dst = VAR_4->dst != VAR_2 ? VAR_4->dst : 0;

 if (!VAR_3->tz_abbr) {
  VAR_3->tz_abbr = VAR_4->tz_abbr ? FUNC_0(VAR_4->tz_abbr) : ((void*)0);
 }
 if (!VAR_3->tz_info) {
  VAR_3->tz_info = VAR_4->tz_info ? (!(VAR_5 & VAR_0) ? FUNC_1(VAR_4->tz_info) : VAR_4->tz_info) : ((void*)0);
 }
 if (VAR_3->zone_type == 0 && VAR_4->zone_type != 0) {
  VAR_3->zone_type = VAR_4->zone_type;


    VAR_3->is_localtime = 1;
 }



}
