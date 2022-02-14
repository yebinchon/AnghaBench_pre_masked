
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SYSCACHECALLBACK {int id; int arg; int (* function ) (int ,int ,int ) ;} ;
struct RELCACHECALLBACK {int arg; int (* function ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct RELCACHECALLBACK* VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 struct SYSCACHECALLBACK* VAR_4 ;

void
FUNC_5(void)
{
 int VAR_5;

 FUNC_0();
 FUNC_2();
 FUNC_1();

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  struct SYSCACHECALLBACK *VAR_6 = VAR_4 + VAR_5;

  VAR_6->function(VAR_6->arg, VAR_6->id, 0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  struct RELCACHECALLBACK *VAR_7 = VAR_2 + VAR_5;

  VAR_7->function(VAR_7->arg, VAR_0);
 }
}
