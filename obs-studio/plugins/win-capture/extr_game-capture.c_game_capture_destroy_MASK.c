
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int config; int executable; int class; int title; int cursor_data; scalar_t__ hotkey_pair; } ;


 int FUNC_0 (struct game_capture*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (struct game_capture*) ;

__attribute__((used)) static void FUNC_8(void *VAR_0)
{
 struct game_capture *VAR_1 = VAR_0;
 FUNC_7(VAR_1);

 if (VAR_1->hotkey_pair)
  FUNC_5(VAR_1->hotkey_pair);

 FUNC_4();
 FUNC_1(&VAR_1->cursor_data);
 FUNC_6();

 FUNC_2(&VAR_1->title);
 FUNC_2(&VAR_1->class);
 FUNC_2(&VAR_1->executable);
 FUNC_3(&VAR_1->config);
 FUNC_0(VAR_1);
}
