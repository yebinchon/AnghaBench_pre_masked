
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; int len; } ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (char const*,int ,int *) ;

void FUNC_2(struct dstr *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->len = FUNC_1(VAR_1, 0, &VAR_0->array);
}
