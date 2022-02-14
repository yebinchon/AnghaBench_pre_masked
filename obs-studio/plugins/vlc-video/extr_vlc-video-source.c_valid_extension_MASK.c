
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int member_0; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char const*,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_1)
{
 struct dstr VAR_2 = {0};
 bool VAR_3 = 0;
 const char *VAR_4;
 const char *VAR_5;

 if (!VAR_1 || !*VAR_1)
  return 0;

 VAR_4 = VAR_0 + 1;
 VAR_5 = FUNC_4(VAR_4, ';');

 for (;;) {
  if (VAR_5)
   FUNC_3(&VAR_2, VAR_4, VAR_5 - VAR_4);
  else
   FUNC_1(&VAR_2, VAR_4);

  if (FUNC_0(&VAR_2, VAR_1) == 0) {
   VAR_3 = 1;
   break;
  }

  if (!VAR_5)
   break;

  VAR_4 = VAR_5 + 2;
  VAR_5 = FUNC_4(VAR_4, ';');
 }

 FUNC_2(&VAR_2);
 return VAR_3;
}
