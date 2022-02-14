
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; scalar_t__ len; int member_0; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,scalar_t__) ;
 char* FUNC_2 () ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static inline char *FUNC_4(const char *VAR_0)
{
 static size_t VAR_1 = 0;
 struct dstr VAR_2 = {0};

 if (VAR_1 == 0) {
  const char *VAR_3 = FUNC_2();
  VAR_1 = FUNC_3(VAR_3);
 }

 FUNC_0(&VAR_2, VAR_0);
 FUNC_1(&VAR_2, VAR_2.len - VAR_1);
 return VAR_2.array;
}
