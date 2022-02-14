
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; int member_0; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char*,char*) ;

__attribute__((used)) static inline char *FUNC_2(const char *VAR_0)
{
 struct dstr VAR_1 = {0};
 FUNC_0(&VAR_1, VAR_0);
 FUNC_1(&VAR_1, "#3A", ":");
 FUNC_1(&VAR_1, "#22", "#");
 return VAR_1.array;
}
