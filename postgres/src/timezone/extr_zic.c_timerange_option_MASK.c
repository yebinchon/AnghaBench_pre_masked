
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (char*,char**,int) ;

__attribute__((used)) static bool
FUNC_1(char *VAR_8)
{
 int64 VAR_9 = VAR_7,
    VAR_10 = VAR_6;
 char *VAR_11 = VAR_8,
      *VAR_12;

 if (*VAR_8 == '@')
 {
  VAR_3 = 0;
  VAR_9 = FUNC_0(VAR_8 + 1, &VAR_11, 10);
  if (VAR_11 == VAR_8 + 1 || (VAR_9 == VAR_1 && VAR_3 == VAR_0))
   return 0;
 }
 VAR_12 = VAR_11;
 if (VAR_11[0] == '/' && VAR_11[1] == '@')
 {
  VAR_3 = 0;
  VAR_10 = FUNC_0(VAR_11 + 2, &VAR_12, 10);
  if (VAR_12 == VAR_11 + 2 || VAR_10 == VAR_2)
   return 0;
  VAR_10 -= !(VAR_10 == VAR_1 && VAR_3 == VAR_0);
 }
 if (*VAR_12 || VAR_10 < VAR_9 || VAR_6 < VAR_9 || VAR_10 < VAR_7)
  return 0;
 VAR_5 = VAR_9 < VAR_7 ? VAR_7 : VAR_9;
 VAR_4 = VAR_6 < VAR_10 ? VAR_6 : VAR_10;
 return 1;
}
