
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct smartypants_data {int in_squote; int in_dquote; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,char const*,size_t) ;
 scalar_t__ FUNC_2 (struct buf*,char,char const,char,int *) ;
 int FUNC_3 (char const*,size_t) ;
 char FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;

__attribute__((used)) static size_t
FUNC_6(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4,
       const uint8_t *VAR_5, size_t VAR_6)
{
 if (VAR_4 >= 2) {
  uint8_t VAR_7 = FUNC_4(VAR_3[1]);
  int VAR_8 = FUNC_3(VAR_3+1, VAR_4-1);


  if (VAR_8 > 0) {
   uint8_t VAR_9 = (VAR_4 > 1+VAR_8) ? VAR_3[1+VAR_8] : 0;
   if (FUNC_2(VAR_0, VAR_2, VAR_9, 'd', &VAR_1->in_dquote))
    return VAR_8;
  }

  if (FUNC_2(VAR_0, VAR_2, VAR_4 > 0 ? VAR_3[1] : 0, 's', &VAR_1->in_squote))
   return 0;


  if (FUNC_5(VAR_7)) {
   FUNC_0(VAR_0, "&rsquo;");
   return 0;
  }


  if ((VAR_7 == 's' || VAR_7 == 't' || VAR_7 == 'm' || VAR_7 == 'd') &&
   (VAR_4 == 3 || FUNC_5(VAR_3[2]))) {
   FUNC_0(VAR_0, "&rsquo;");
   return 0;
  }


  if (VAR_4 >= 3) {
   uint8_t VAR_10 = FUNC_4(VAR_3[2]);

   if (((VAR_7 == 'r' && VAR_10 == 'e') ||
    (VAR_7 == 'l' && VAR_10 == 'l') ||
    (VAR_7 == 'v' && VAR_10 == 'e')) &&
    (VAR_4 == 4 || FUNC_5(VAR_3[3]))) {
    FUNC_0(VAR_0, "&rsquo;");
    return 0;
   }
  }
 }

 FUNC_1(VAR_0, VAR_5, VAR_6);
 return 0;
}
