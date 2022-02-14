
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
struct gstr {scalar_t__ max_width; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct menu*,struct gstr*) ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct gstr*) ;
 int FUNC_5 (struct gstr*) ;
 struct gstr FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct menu *VAR_1)
{
 struct gstr VAR_2 = FUNC_6();

 VAR_2.max_width = FUNC_0(VAR_0) - 10;
 FUNC_1(VAR_1, &VAR_2);

 FUNC_3(FUNC_2(VAR_1), FUNC_5(&VAR_2));
 FUNC_4(&VAR_2);
}
