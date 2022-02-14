
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tzstate ;
struct state {int dummy; } ;
struct TYPE_5__ {char* TZname; int state; } ;
struct TYPE_4__ {TYPE_2__ tz; } ;
typedef TYPE_1__ pg_tz_cache ;
typedef TYPE_2__ pg_tz ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct state*,int) ;
 int FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char*,char*,struct state*,int) ;
 int FUNC_9 (char*,struct state*,int) ;

pg_tz *
FUNC_10(const char *VAR_5)
{
 pg_tz_cache *VAR_6;
 struct state VAR_7;
 char VAR_8[VAR_3 + 1];
 char VAR_9[VAR_3 + 1];
 char *VAR_10;

 if (FUNC_7(VAR_5) > VAR_3)
  return ((void*)0);

 if (!VAR_4)
  if (!FUNC_2())
   return ((void*)0);







 VAR_10 = VAR_8;
 while (*VAR_5)
  *VAR_10++ = FUNC_4((unsigned char) *VAR_5++);
 *VAR_10 = '\0';

 VAR_6 = (pg_tz_cache *) FUNC_1(VAR_4,
           VAR_8,
           VAR_2,
           ((void*)0));
 if (VAR_6)
 {

  return &VAR_6->tz;
 }




 if (FUNC_5(VAR_8, "GMT") == 0)
 {
  if (!FUNC_9(VAR_8, &VAR_7, 1))
  {

   FUNC_0(VAR_0, "could not initialize GMT time zone");
  }

  FUNC_6(VAR_9, VAR_8);
 }
 else if (FUNC_8(VAR_8, VAR_9, &VAR_7, 1) != 0)
 {
  if (VAR_8[0] == ':' || !FUNC_9(VAR_8, &VAR_7, 0))
  {

   return ((void*)0);
  }

  FUNC_6(VAR_9, VAR_8);
 }


 VAR_6 = (pg_tz_cache *) FUNC_1(VAR_4,
           VAR_8,
           VAR_1,
           ((void*)0));


 FUNC_6(VAR_6->tz.TZname, VAR_9);
 FUNC_3(&VAR_6->tz.state, &VAR_7, sizeof(VAR_7));

 return &VAR_6->tz;
}
