
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; int member_0; } ;
typedef int obs_source_t ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char*,char const*,int) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static char *FUNC_4(obs_source_t *VAR_0, const char *VAR_1)
{
 struct dstr VAR_2 = {0};
 int VAR_3 = 0;

 FUNC_0(&VAR_2, VAR_1);

 for (;;) {
  obs_source_t *VAR_4 =
   FUNC_2(VAR_0, VAR_2.array);
  if (!VAR_4)
   break;

  FUNC_3(VAR_4);

  FUNC_1(&VAR_2, "%s %d", VAR_1, ++VAR_3 + 1);
 }

 return VAR_2.array;
}
