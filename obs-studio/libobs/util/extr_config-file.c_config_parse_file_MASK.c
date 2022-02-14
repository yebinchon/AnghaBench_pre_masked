
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;
struct darray {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lexer*) ;
 int FUNC_2 (struct lexer*) ;
 int FUNC_3 (struct lexer*,char*) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char**) ;
 int FUNC_6 (struct darray*,struct lexer*) ;

__attribute__((used)) static int FUNC_7(struct darray *VAR_2, const char *VAR_3,
        bool VAR_4)
{
 char *VAR_5;
 struct lexer VAR_6;
 FILE *VAR_7;

 VAR_7 = FUNC_4(VAR_3, "rb");
 if (VAR_4 && !VAR_7)
  VAR_7 = FUNC_4(VAR_3, "w+");
 if (!VAR_7)
  return VAR_0;

 FUNC_5(VAR_7, &VAR_5);
 FUNC_0(VAR_7);

 if (!VAR_5)
  return VAR_1;

 FUNC_2(&VAR_6);
 FUNC_3(&VAR_6, VAR_5);

 FUNC_6(VAR_2, &VAR_6);

 FUNC_1(&VAR_6);
 return VAR_1;
}
