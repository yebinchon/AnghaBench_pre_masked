
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__ len; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 char FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*,char const*) ;
 int FUNC_3 (struct dstr*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct dstr *VAR_0,
     const char *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0, "%module%", VAR_2);
 if (FUNC_1(VAR_0) == '/')
  FUNC_3(VAR_0, VAR_0->len - 1);
}
