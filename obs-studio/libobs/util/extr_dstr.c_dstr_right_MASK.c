
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__ len; scalar_t__ array; } ;


 int FUNC_0 (struct dstr*,struct dstr*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,scalar_t__,scalar_t__) ;

void FUNC_4(struct dstr *VAR_0, const struct dstr *VAR_1, const size_t VAR_2)
{
 struct dstr VAR_3;
 FUNC_2(&VAR_3);
 FUNC_3(&VAR_3, VAR_1->array + VAR_2, VAR_1->len - VAR_2);
 FUNC_0(VAR_0, &VAR_3);
 FUNC_1(&VAR_3);
}
