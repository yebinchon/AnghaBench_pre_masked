
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ce_unbind {int res; int ce; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct ce_unbind *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_2(&VAR_1);
 VAR_4 = FUNC_0(VAR_3->ce, FUNC_4());
 if (VAR_4 == -VAR_0)
  VAR_4 = FUNC_1(VAR_3->ce);
 VAR_3->res = VAR_4;
 FUNC_3(&VAR_1);
}
