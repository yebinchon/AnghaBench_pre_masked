
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smartypants_data {int dummy; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,int const) ;

__attribute__((used)) static size_t
FUNC_1(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 if (VAR_4 < 2)
  return 0;

 switch (VAR_3[1]) {
 case '\\':
 case '"':
 case '\'':
 case '.':
 case '-':
 case '`':
  FUNC_0(VAR_0, VAR_3[1]);
  return 1;

 default:
  FUNC_0(VAR_0, '\\');
  return 0;
 }
}
