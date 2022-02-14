
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {int len; int array; } ;


 int FUNC_0 (int ,int ,int **) ;

wchar_t *FUNC_1(const struct dstr *VAR_0)
{
 wchar_t *VAR_1;
 FUNC_0(VAR_0->array, VAR_0->len, &VAR_1);
 return VAR_1;
}
