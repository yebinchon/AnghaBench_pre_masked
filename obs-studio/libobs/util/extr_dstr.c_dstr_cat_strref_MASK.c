
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int len; int array; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,int ,int ) ;

void FUNC_1(struct dstr *VAR_0, const struct strref *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->array, VAR_1->len);
}
