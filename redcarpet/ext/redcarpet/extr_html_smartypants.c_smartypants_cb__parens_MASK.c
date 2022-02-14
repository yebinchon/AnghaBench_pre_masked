
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct smartypants_data {int dummy; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,char const) ;
 char FUNC_2 (char const) ;

__attribute__((used)) static size_t
FUNC_3(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 if (VAR_4 >= 3) {
  uint8_t VAR_5 = FUNC_2(VAR_3[1]);
  uint8_t VAR_6 = FUNC_2(VAR_3[2]);

  if (VAR_5 == 'c' && VAR_6 == ')') {
   FUNC_0(VAR_0, "&copy;");
   return 2;
  }

  if (VAR_5 == 'r' && VAR_6 == ')') {
   FUNC_0(VAR_0, "&reg;");
   return 2;
  }

  if (VAR_4 >= 4 && VAR_5 == 't' && VAR_6 == 'm' && VAR_3[3] == ')') {
   FUNC_0(VAR_0, "&trade;");
   return 3;
  }
 }

 FUNC_1(VAR_0, VAR_3[0]);
 return 0;
}
