
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ttinfo {int tt_desigidx; long tt_utoff; int tt_isdst; } ;
struct state {char* chars; int charcnt; int timecnt; scalar_t__ const* ats; size_t* types; struct ttinfo* ttis; } ;
struct TYPE_3__ {struct state state; } ;
typedef TYPE_1__ pg_tz ;
typedef scalar_t__ pg_time_t ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

bool
FUNC_1(const char *VAR_0,
        const pg_time_t *VAR_1,
        long int *VAR_2,
        int *VAR_3,
        const pg_tz *VAR_4)
{
 const struct state *VAR_5;
 const char *VAR_6;
 const struct ttinfo *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 const pg_time_t VAR_11 = *VAR_1;

 VAR_5 = &VAR_4->state;





 VAR_6 = VAR_5->chars;
 VAR_8 = 0;
 while (VAR_8 < VAR_5->charcnt)
 {
  if (FUNC_0(VAR_0, VAR_6 + VAR_8) == 0)
   break;
  while (VAR_6[VAR_8] != '\0')
   VAR_8++;
  VAR_8++;
 }
 if (VAR_8 >= VAR_5->charcnt)
  return 0;
 {
  int VAR_12 = 0;
  int VAR_13 = VAR_5->timecnt;

  while (VAR_12 < VAR_13)
  {
   int VAR_14 = (VAR_12 + VAR_13) >> 1;

   if (VAR_11 < VAR_5->ats[VAR_14])
    VAR_13 = VAR_14;
   else
    VAR_12 = VAR_14 + 1;
  }
  VAR_9 = VAR_12;
 }





 for (VAR_10 = VAR_9 - 1; VAR_10 >= 0; VAR_10--)
 {
  VAR_7 = &VAR_5->ttis[VAR_5->types[VAR_10]];
  if (VAR_7->tt_desigidx == VAR_8)
  {
   *VAR_2 = VAR_7->tt_utoff;
   *VAR_3 = VAR_7->tt_isdst;
   return 1;
  }
 }




 for (VAR_10 = VAR_9; VAR_10 < VAR_5->timecnt; VAR_10++)
 {
  VAR_7 = &VAR_5->ttis[VAR_5->types[VAR_10]];
  if (VAR_7->tt_desigidx == VAR_8)
  {
   *VAR_2 = VAR_7->tt_utoff;
   *VAR_3 = VAR_7->tt_isdst;
   return 1;
  }
 }

 return 0;
}
