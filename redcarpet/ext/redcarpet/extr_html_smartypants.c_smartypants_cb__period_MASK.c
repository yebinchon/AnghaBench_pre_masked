
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct smartypants_data {int dummy; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,char const) ;

__attribute__((used)) static size_t
FUNC_2(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 if (VAR_4 >= 3 && VAR_3[1] == '.' && VAR_3[2] == '.') {
  FUNC_0(VAR_0, "&hellip;");
  return 2;
 }

 if (VAR_4 >= 5 && VAR_3[1] == ' ' && VAR_3[2] == '.' && VAR_3[3] == ' ' && VAR_3[4] == '.') {
  FUNC_0(VAR_0, "&hellip;");
  return 4;
 }

 FUNC_1(VAR_0, VAR_3[0]);
 return 0;
}
