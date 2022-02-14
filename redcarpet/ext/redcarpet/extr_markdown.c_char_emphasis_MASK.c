
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct sd_markdown {int ext_flags; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 size_t FUNC_2 (struct buf*,struct sd_markdown*,char*,size_t,char) ;
 size_t FUNC_3 (struct buf*,struct sd_markdown*,char*,size_t,char) ;
 size_t FUNC_4 (struct buf*,struct sd_markdown*,char*,size_t,char) ;

__attribute__((used)) static size_t
FUNC_5(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4, size_t VAR_5)
{
 uint8_t VAR_6 = VAR_3[0];
 size_t VAR_7;

 if (VAR_2->ext_flags & VAR_0) {
  if (VAR_4 > 0 && FUNC_0(VAR_3[-1]))
   return 0;
 }

 if (VAR_5 > 2 && VAR_3[1] != VAR_6) {


  if (VAR_6 == '~' || VAR_6 == '=' || FUNC_1(VAR_3[1]) || (VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3 + 1, VAR_5 - 1, VAR_6)) == 0)
   return 0;

  return VAR_7 + 1;
 }

 if (VAR_5 > 3 && VAR_3[1] == VAR_6 && VAR_3[2] != VAR_6) {
  if (FUNC_1(VAR_3[2]) || (VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3 + 2, VAR_5 - 2, VAR_6)) == 0)
   return 0;

  return VAR_7 + 2;
 }

 if (VAR_5 > 4 && VAR_3[1] == VAR_6 && VAR_3[2] == VAR_6 && VAR_3[3] != VAR_6) {
  if (VAR_6 == '~' || VAR_6 == '=' || FUNC_1(VAR_3[3]) || (VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3 + 3, VAR_5 - 3, VAR_6)) == 0)
   return 0;

  return VAR_7 + 3;
 }

 return 0;
}
