
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct duplicator_capture {int showing; float reset_timeout; scalar_t__ width; scalar_t__ duplicator; int cursor_data; scalar_t__ capture_cursor; int monitor; int source; } ;


 float VAR_0 ;
 int FUNC_0 (float) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct duplicator_capture*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct duplicator_capture*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1, float VAR_2)
{
 struct duplicator_capture *VAR_3 = VAR_1;



 if (!FUNC_7(VAR_3->source)) {
  if (VAR_3->showing) {
   FUNC_5();
   FUNC_2(VAR_3);
   FUNC_6();

   VAR_3->showing = 0;
  }
  return;



 } else if (!VAR_3->showing) {
  VAR_3->reset_timeout = VAR_0;
 }

 FUNC_5();

 if (!VAR_3->duplicator) {
  VAR_3->reset_timeout += VAR_2;

  if (VAR_3->reset_timeout >= VAR_0) {
   VAR_3->duplicator =
    FUNC_3(VAR_3->monitor);

   VAR_3->reset_timeout = 0.0f;
  }
 }

 if (!!VAR_3->duplicator) {
  if (VAR_3->capture_cursor)
   FUNC_1(&VAR_3->cursor_data);

  if (!FUNC_4(VAR_3->duplicator)) {
   FUNC_2(VAR_3);

  } else if (VAR_3->width == 0) {
   FUNC_8(VAR_3);
  }
 }

 FUNC_6();

 if (!VAR_3->showing)
  VAR_3->showing = 1;

 FUNC_0(VAR_2);
}
