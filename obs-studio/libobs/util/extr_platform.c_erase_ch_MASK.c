
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__ array; int member_0; } ;


 int FUNC_0 (struct dstr*,scalar_t__) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,struct dstr*,size_t) ;

__attribute__((used)) static void FUNC_3(struct dstr *VAR_0, size_t VAR_1)
{
 struct dstr VAR_2 = {0};
 FUNC_2(&VAR_2, VAR_0, VAR_1);
 FUNC_0(&VAR_2, VAR_0->array + VAR_1 + 1);
 FUNC_1(VAR_0);
 *VAR_0 = VAR_2;
}
