
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_mday; char tm_year; char tm_mon; char tm_hour; char tm_min; char tm_sec; } ;
typedef scalar_t__ int64_t ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (struct tm*,int ,int) ;
 scalar_t__ FUNC_3 (struct tm*) ;

__attribute__((used)) static int64_t
FUNC_4(fz_context *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 struct tm VAR_6;
 time_t VAR_7;

 if (!VAR_1)
  return 0;

 FUNC_2(&VAR_6, 0, sizeof VAR_6);
 VAR_6.tm_mday = 1;

 VAR_2 = 1;
 VAR_3 = 0;
 VAR_4 = 0;

 if (VAR_1[0] == 'D' && VAR_1[1] == ':')
  VAR_1 += 2;

 if (!FUNC_1(VAR_1[0]) || !FUNC_1(VAR_1[1]) || !FUNC_1(VAR_1[2]) || !FUNC_1(VAR_1[3]))
 {
  FUNC_0(VAR_0, "invalid date format (missing year)");
  return 0;
 }
 VAR_6.tm_year = (VAR_1[0]-'0')*1000 + (VAR_1[1]-'0')*100 + (VAR_1[2]-'0')*10 + (VAR_1[3]-'0') - 1900;
 VAR_1 += 4;

 if (FUNC_1(VAR_1[0]) && FUNC_1(VAR_1[1]))
 {
  VAR_6.tm_mon = (VAR_1[0]-'0')*10 + (VAR_1[1]-'0') - 1;
  VAR_1 += 2;
  if (FUNC_1(VAR_1[0]) && FUNC_1(VAR_1[1]))
  {
   VAR_6.tm_mday = (VAR_1[0]-'0')*10 + (VAR_1[1]-'0');
   VAR_1 += 2;
   if (FUNC_1(VAR_1[0]) && FUNC_1(VAR_1[1]))
   {
    VAR_6.tm_hour = (VAR_1[0]-'0')*10 + (VAR_1[1]-'0');
    VAR_1 += 2;
    if (FUNC_1(VAR_1[0]) && FUNC_1(VAR_1[1]))
    {
     VAR_6.tm_min = (VAR_1[0]-'0')*10 + (VAR_1[1]-'0');
     VAR_1 += 2;
     if (FUNC_1(VAR_1[0]) && FUNC_1(VAR_1[1]))
     {
      VAR_6.tm_sec = (VAR_1[0]-'0')*10 + (VAR_1[1]-'0');
      VAR_1 += 2;
     }
    }
   }
  }
 }

 if (VAR_1[0] == 'Z')
 {
  VAR_1 += 1;
 }
 else if ((VAR_1[0] == '-' || VAR_1[0] == '+') && FUNC_1(VAR_1[1]) && FUNC_1(VAR_1[2]))
 {
  VAR_2 = (VAR_1[0] == '-') ? -1 : 1;
  VAR_3 = (VAR_1[1]-'0')*10 + (VAR_1[2]-'0');
  VAR_1 += 3;
  if (VAR_1[0] == '\'' && FUNC_1(VAR_1[1]) && FUNC_1(VAR_1[2]))
  {
   VAR_4 = (VAR_1[1]-'0')*10 + (VAR_1[2]-'0');
   VAR_1 += 3;
   if (VAR_1[0] == '\'')
    VAR_1 += 1;
  }
 }

 if (VAR_1[0] != 0)
  FUNC_0(VAR_0, "invalid date format (garbage at end)");

 VAR_7 = FUNC_3(&VAR_6);
 if (VAR_7 == (time_t)-1)
 {
  FUNC_0(VAR_0, "date overflow error");
  return 0;
 }

 VAR_5 = VAR_2 * (VAR_3 * 3600 + VAR_4 * 60);
 return VAR_7 - VAR_5;
}
