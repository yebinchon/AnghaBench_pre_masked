
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(const char *VAR_0, const char *VAR_1,
         struct dstr *VAR_2)
{
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2, VAR_0);

 return FUNC_2(VAR_2->array);
}
