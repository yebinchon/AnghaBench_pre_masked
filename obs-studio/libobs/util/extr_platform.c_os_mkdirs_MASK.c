
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; } ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char*,char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(const char *VAR_0)
{
 struct dstr VAR_1;
 int VAR_2;

 FUNC_1(&VAR_1, VAR_0);
 FUNC_2(&VAR_1, "\\", "/");
 VAR_2 = FUNC_3(VAR_1.array);
 FUNC_0(&VAR_1);
 return VAR_2;
}
