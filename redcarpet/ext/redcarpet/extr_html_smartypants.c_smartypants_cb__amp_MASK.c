
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smartypants_data {int in_dquote; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 scalar_t__ FUNC_2 (struct buf*,int ,int const,char,int *) ;
 size_t FUNC_3 (struct buf*,struct smartypants_data*,int ,int const*,size_t,int const*,int) ;
 int FUNC_4 (int const*,size_t) ;

__attribute__((used)) static size_t
FUNC_5(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 if (VAR_4 >= 6 && FUNC_1(VAR_3, "&quot;", 6) == 0) {
  if (FUNC_2(VAR_0, VAR_2, VAR_4 >= 7 ? VAR_3[6] : 0, 'd', &VAR_1->in_dquote))
   return 5;
 }

 int VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5 > 0) {
  return (VAR_5-1) + FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3+(VAR_5-1), VAR_4-(VAR_5-1), VAR_3, VAR_5);
 }

 if (VAR_4 >= 4 && FUNC_1(VAR_3, "&#0;", 4) == 0)
  return 3;

 FUNC_0(VAR_0, '&');
 return 0;
}
