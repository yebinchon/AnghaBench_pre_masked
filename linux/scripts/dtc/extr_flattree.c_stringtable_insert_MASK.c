
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int len; scalar_t__ val; } ;


 struct data FUNC_0 (struct data,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct data *VAR_0, const char *VAR_1)
{
 int VAR_2;



 for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++) {
  if (FUNC_1(VAR_1, VAR_0->val + VAR_2))
   return VAR_2;
 }

 *VAR_0 = FUNC_0(*VAR_0, VAR_1, FUNC_2(VAR_1)+1);
 return VAR_2;
}
