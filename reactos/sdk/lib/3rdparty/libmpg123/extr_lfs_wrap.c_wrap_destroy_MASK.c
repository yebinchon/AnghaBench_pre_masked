
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrap_data {struct wrap_data* indextable; } ;


 int FUNC_0 (struct wrap_data*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct wrap_data *VAR_1 = VAR_0;
 FUNC_1(VAR_0);
 if(VAR_1->indextable != ((void*)0))
 FUNC_0(VAR_1->indextable);

 FUNC_0(VAR_1);
}
