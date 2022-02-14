
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct smartypants_data {int dummy; } ;
struct buf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct buf*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*,size_t,char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static size_t
FUNC_3(struct buf *VAR_2, struct smartypants_data *VAR_3, uint8_t VAR_4, const uint8_t *VAR_5, size_t VAR_6)
{
 static const char *VAR_7[] = {
   "pre", "code", "var", "samp", "kbd", "math", "script", "style"
 };
 static const size_t VAR_8 = 8;

 size_t VAR_9 = 0;
 size_t VAR_10, VAR_11 = 0;

 while (VAR_11 < VAR_6 && VAR_5[VAR_11] != '>')
  VAR_11++;

 for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
  if (FUNC_1(VAR_5, VAR_6, VAR_7[VAR_10]) == VAR_1)
   break;
 }

 if (VAR_10 < VAR_8) {
  for (;;) {
   while (VAR_11 < VAR_6 && VAR_5[VAR_11] != '<')
    VAR_11++;

   if (VAR_11 == VAR_6)
    break;

   if (FUNC_1(VAR_5 + VAR_11, VAR_6 - VAR_11, VAR_7[VAR_10]) == VAR_0)
    break;

   VAR_11++;
  }

  while (VAR_11 < VAR_6 && VAR_5[VAR_11] != '>')
   VAR_11++;
 }

 if (FUNC_1(VAR_5, VAR_6, "a") == VAR_0) {
  while (VAR_11 < VAR_6 && VAR_5[VAR_11] != '>')
   VAR_11++;

  VAR_9 = 1;
 }

 FUNC_0(VAR_2, VAR_5, VAR_11 + 1);




 if (VAR_9 && FUNC_2("&#39;", VAR_5+(VAR_11+1), 5) == 0) {
  FUNC_0(VAR_2, "&rsquo;", 7);
  VAR_11 += 5;
 }

 return VAR_11;
}
