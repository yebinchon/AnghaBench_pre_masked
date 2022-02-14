
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {char* array; } ;
struct lexer {int dummy; } ;


 int FUNC_0 (struct lexer*,struct strref*) ;
 int FUNC_1 (struct strref*) ;

__attribute__((used)) static inline bool FUNC_2(struct lexer *VAR_0)
{
 struct strref VAR_1;
 bool VAR_2 = 1;

 FUNC_1(&VAR_1);

 while (1) {
  if (!FUNC_0(VAR_0, &VAR_1)) {
   VAR_2 = 0;
   break;
  }
  if (*VAR_1.array == '\n')
   break;
 }

 return VAR_2;
}
