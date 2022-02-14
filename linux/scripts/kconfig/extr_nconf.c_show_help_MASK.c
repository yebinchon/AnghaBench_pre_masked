
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
struct gstr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct menu*,struct gstr*) ;
 int FUNC_1 (struct menu*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct gstr*) ;
 int FUNC_4 (struct gstr*) ;
 struct gstr FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct menu *VAR_1)
{
 struct gstr VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_5();
 FUNC_0(VAR_1, &VAR_2);
 FUNC_2(VAR_0, FUNC_1(VAR_1), FUNC_4(&VAR_2));
 FUNC_3(&VAR_2);
}
