
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ttinfo {int tt_isdst; long tt_utoff; } ;
struct state {int timecnt; int typecnt; scalar_t__ const* ats; int* types; struct ttinfo* ttis; scalar_t__ goahead; scalar_t__ goback; } ;
struct TYPE_3__ {struct state state; } ;
typedef TYPE_1__ pg_tz ;
typedef scalar_t__ pg_time_t ;
typedef scalar_t__ int64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(const pg_time_t *VAR_2,
      long int *VAR_3,
      int *VAR_4,
      pg_time_t *VAR_5,
      long int *VAR_6,
      int *VAR_7,
      const pg_tz *VAR_8)
{
 const struct state *VAR_9;
 const struct ttinfo *VAR_10;
 int VAR_11;
 int VAR_12;
 const pg_time_t VAR_13 = *VAR_2;

 VAR_9 = &VAR_8->state;
 if (VAR_9->timecnt == 0)
 {

  VAR_11 = 0;
  while (VAR_9->ttis[VAR_11].tt_isdst)
   if (++VAR_11 >= VAR_9->typecnt)
   {
    VAR_11 = 0;
    break;
   }
  VAR_10 = &VAR_9->ttis[VAR_11];
  *VAR_3 = VAR_10->tt_utoff;
  *VAR_4 = VAR_10->tt_isdst;
  return 0;
 }
 if ((VAR_9->goback && VAR_13 < VAR_9->ats[0]) ||
  (VAR_9->goahead && VAR_13 > VAR_9->ats[VAR_9->timecnt - 1]))
 {

  pg_time_t VAR_14 = VAR_13;
  pg_time_t VAR_15;
  pg_time_t VAR_16;
  int64 VAR_17;
  int VAR_18;

  if (VAR_13 < VAR_9->ats[0])
   VAR_15 = VAR_9->ats[0] - VAR_13;
  else
   VAR_15 = VAR_13 - VAR_9->ats[VAR_9->timecnt - 1];
  --VAR_15;
  VAR_16 = VAR_15 / VAR_1 / VAR_0;
  ++VAR_16;
  VAR_17 = VAR_16;
  if (VAR_16 - VAR_17 >= 1 || VAR_17 - VAR_16 >= 1)
   return -1;
  VAR_15 = VAR_17;
  VAR_15 *= VAR_1;
  VAR_15 *= VAR_0;
  if (VAR_13 < VAR_9->ats[0])
   VAR_14 += VAR_15;
  else
   VAR_14 -= VAR_15;
  if (VAR_14 < VAR_9->ats[0] ||
   VAR_14 > VAR_9->ats[VAR_9->timecnt - 1])
   return -1;

  VAR_18 = FUNC_0(&VAR_14, VAR_3,
           VAR_4,
           VAR_5,
           VAR_6,
           VAR_7,
           VAR_8);
  if (VAR_13 < VAR_9->ats[0])
   *VAR_5 -= VAR_15;
  else
   *VAR_5 += VAR_15;
  return VAR_18;
 }

 if (VAR_13 >= VAR_9->ats[VAR_9->timecnt - 1])
 {

  VAR_11 = VAR_9->types[VAR_9->timecnt - 1];
  VAR_10 = &VAR_9->ttis[VAR_11];
  *VAR_3 = VAR_10->tt_utoff;
  *VAR_4 = VAR_10->tt_isdst;
  return 0;
 }
 if (VAR_13 < VAR_9->ats[0])
 {

  VAR_11 = 0;
  while (VAR_9->ttis[VAR_11].tt_isdst)
   if (++VAR_11 >= VAR_9->typecnt)
   {
    VAR_11 = 0;
    break;
   }
  VAR_10 = &VAR_9->ttis[VAR_11];
  *VAR_3 = VAR_10->tt_utoff;
  *VAR_4 = VAR_10->tt_isdst;
  *VAR_5 = VAR_9->ats[0];

  VAR_11 = VAR_9->types[0];
  VAR_10 = &VAR_9->ttis[VAR_11];
  *VAR_6 = VAR_10->tt_utoff;
  *VAR_7 = VAR_10->tt_isdst;
  return 1;
 }

 {
  int VAR_19 = 1;
  int VAR_20 = VAR_9->timecnt - 1;

  while (VAR_19 < VAR_20)
  {
   int VAR_21 = (VAR_19 + VAR_20) >> 1;

   if (VAR_13 < VAR_9->ats[VAR_21])
    VAR_20 = VAR_21;
   else
    VAR_19 = VAR_21 + 1;
  }
  VAR_11 = VAR_19;
 }
 VAR_12 = VAR_9->types[VAR_11 - 1];
 VAR_10 = &VAR_9->ttis[VAR_12];
 *VAR_3 = VAR_10->tt_utoff;
 *VAR_4 = VAR_10->tt_isdst;
 *VAR_5 = VAR_9->ats[VAR_11];
 VAR_12 = VAR_9->types[VAR_11];
 VAR_10 = &VAR_9->ttis[VAR_12];
 *VAR_6 = VAR_10->tt_utoff;
 *VAR_7 = VAR_10->tt_isdst;
 return 1;
}
