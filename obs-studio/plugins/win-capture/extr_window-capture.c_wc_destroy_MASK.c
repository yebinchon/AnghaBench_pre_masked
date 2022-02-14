
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_capture {struct window_capture* executable; struct window_capture* class; struct window_capture* title; int capture; } ;


 int FUNC_0 (struct window_capture*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct window_capture *VAR_1 = VAR_0;

 if (VAR_1) {
  FUNC_2();
  FUNC_1(&VAR_1->capture);
  FUNC_3();

  FUNC_0(VAR_1->title);
  FUNC_0(VAR_1->class);
  FUNC_0(VAR_1->executable);

  FUNC_0(VAR_1);
 }
}
