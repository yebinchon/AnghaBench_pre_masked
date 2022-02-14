
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int len; int array; } ;


 int FUNC_0 (int ,int ,char**) ;

char *FUNC_1(const struct dstr *VAR_0)
{
 char *VAR_1;
 FUNC_0(VAR_0->array, VAR_0->len, &VAR_1);
 return VAR_1;
}
