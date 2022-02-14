
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct smartypants_data {int dummy; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,char const) ;
 scalar_t__ FUNC_2 (char const) ;
 char FUNC_3 (char const) ;

__attribute__((used)) static size_t
FUNC_4(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 if (FUNC_2(VAR_2) && VAR_4 >= 3) {
  if (VAR_3[0] == '1' && VAR_3[1] == '/' && VAR_3[2] == '2') {
   if (VAR_4 == 3 || FUNC_2(VAR_3[3])) {
    FUNC_0(VAR_0, "&frac12;");
    return 2;
   }
  }

  if (VAR_3[0] == '1' && VAR_3[1] == '/' && VAR_3[2] == '4') {
   if (VAR_4 == 3 || FUNC_2(VAR_3[3]) ||
    (VAR_4 >= 5 && FUNC_3(VAR_3[3]) == 't' && FUNC_3(VAR_3[4]) == 'h')) {
    FUNC_0(VAR_0, "&frac14;");
    return 2;
   }
  }

  if (VAR_3[0] == '3' && VAR_3[1] == '/' && VAR_3[2] == '4') {
   if (VAR_4 == 3 || FUNC_2(VAR_3[3]) ||
    (VAR_4 >= 6 && FUNC_3(VAR_3[3]) == 't' && FUNC_3(VAR_3[4]) == 'h' && FUNC_3(VAR_3[5]) == 's')) {
    FUNC_0(VAR_0, "&frac34;");
    return 2;
   }
  }
 }

 FUNC_1(VAR_0, VAR_3[0]);
 return 0;
}
