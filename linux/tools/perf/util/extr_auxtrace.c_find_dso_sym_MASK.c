
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {scalar_t__ start; scalar_t__ end; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 struct symbol* FUNC_0 (struct dso*) ;
 struct symbol* FUNC_1 (struct symbol*) ;
 scalar_t__ FUNC_2 (struct symbol*,char const*,int*,int) ;
 int FUNC_3 (struct dso*,char const*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static int FUNC_5(struct dso *VAR_1, const char *VAR_2, u64 *VAR_3,
   u64 *VAR_4, int VAR_5)
{
 struct symbol *VAR_6;
 int VAR_7 = 0;

 *VAR_3 = 0;
 *VAR_4 = 0;

 VAR_6 = FUNC_0(VAR_1);
 while (VAR_6) {
  if (*VAR_3) {
   if (!*VAR_4)
    *VAR_4 = VAR_6->start - *VAR_3;
   if (VAR_5 > 0) {
    if (*VAR_4)
     return 1;
   } else if (FUNC_2(VAR_6, VAR_2, &VAR_7, VAR_5)) {
    FUNC_3(VAR_1, VAR_2);
    return -VAR_0;
   }
  } else if (FUNC_2(VAR_6, VAR_2, &VAR_7, VAR_5)) {
   *VAR_3 = VAR_6->start;
   *VAR_4 = VAR_6->end - VAR_6->start;
  }
  VAR_6 = FUNC_1(VAR_6);
 }

 if (!*VAR_3)
  return FUNC_4(VAR_2, VAR_5);

 return 0;
}
