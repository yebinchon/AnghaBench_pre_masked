
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {int r_time; int r_day; int r_type; int r_week; int r_mon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (char const*,int *,int,int) ;
 char* FUNC_1 (char const*,int*) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_8, struct rule *const VAR_9)
{
 if (*VAR_8 == 'J')
 {



  VAR_9->r_type = VAR_4;
  ++VAR_8;
  VAR_8 = FUNC_0(VAR_8, &VAR_9->r_day, 1, VAR_1);
 }
 else if (*VAR_8 == 'M')
 {



  VAR_9->r_type = VAR_6;
  ++VAR_8;
  VAR_8 = FUNC_0(VAR_8, &VAR_9->r_mon, 1, VAR_5);
  if (VAR_8 == ((void*)0))
   return ((void*)0);
  if (*VAR_8++ != '.')
   return ((void*)0);
  VAR_8 = FUNC_0(VAR_8, &VAR_9->r_week, 1, 5);
  if (VAR_8 == ((void*)0))
   return ((void*)0);
  if (*VAR_8++ != '.')
   return ((void*)0);
  VAR_8 = FUNC_0(VAR_8, &VAR_9->r_day, 0, VAR_2 - 1);
 }
 else if (FUNC_2(*VAR_8))
 {



  VAR_9->r_type = VAR_3;
  VAR_8 = FUNC_0(VAR_8, &VAR_9->r_day, 0, VAR_0 - 1);
 }
 else
  return ((void*)0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 if (*VAR_8 == '/')
 {



  ++VAR_8;
  VAR_8 = FUNC_1(VAR_8, &VAR_9->r_time);
 }
 else
  VAR_9->r_time = 2 * VAR_7;
 return VAR_8;
}
