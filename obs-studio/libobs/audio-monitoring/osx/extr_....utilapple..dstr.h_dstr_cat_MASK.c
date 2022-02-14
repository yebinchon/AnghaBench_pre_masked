
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static inline void FUNC_2(struct dstr *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 if (!VAR_1 || !*VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
