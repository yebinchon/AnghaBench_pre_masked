
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__ array; } ;


 int FUNC_0 (struct dstr*,struct dstr const*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,scalar_t__,size_t const) ;

void FUNC_4(struct dstr *VAR_0, const struct dstr *VAR_1, const size_t VAR_2,
       const size_t VAR_3)
{
 struct dstr VAR_4;
 FUNC_2(&VAR_4);
 FUNC_0(&VAR_4, VAR_1);
 FUNC_3(VAR_0, VAR_4.array + VAR_2, VAR_3);
 FUNC_1(&VAR_4);
}
