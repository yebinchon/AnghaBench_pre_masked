
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* buf_ptr; int line_num; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

uint8_t *FUNC_3(uint8_t *VAR_2)
{
 int VAR_3;

 VAR_2++;
 for (;;) {

  for (;;) {
   VAR_3 = *VAR_2;
   if (VAR_3 == '\n' || VAR_3 == '*' || VAR_3 == '\\') {
    break;
   }
   VAR_2++;
   VAR_3 = *VAR_2;
   if (VAR_3 == '\n' || VAR_3 == '*' || VAR_3 == '\\') {
    break;
   }
   VAR_2++;
  }

  if (VAR_3 == '\n') {
   VAR_1->line_num++;
   VAR_2++;
  } else if (VAR_3 == '*') {
   VAR_2++;
   for (;;) {
    VAR_3 = *VAR_2;
    if (VAR_3 == '*') {
     VAR_2++;
    } else if (VAR_3 == '/') {
     goto end_of_comment;
    } else if (VAR_3 == '\\') {
     VAR_1->buf_ptr = VAR_2;
     VAR_3 = FUNC_1 ();
     VAR_2 = VAR_1->buf_ptr;
     if (VAR_3 == '\\') {

      while (VAR_3 == '\\') {
       FUNC_0 (VAR_3, VAR_2);
       if (VAR_3 == '\n') {
        VAR_1->line_num++;
        FUNC_0 (VAR_3, VAR_2);
       } else if (VAR_3 == '\r') {
        FUNC_0 (VAR_3, VAR_2);
        if (VAR_3 == '\n') {
         VAR_1->line_num++;
         FUNC_0 (VAR_3, VAR_2);
        }
       } else {
        goto after_star;
       }
      }
     }
    } else {
     break;
    }
   }
after_star:
   ;
  } else {

   VAR_1->buf_ptr = VAR_2;
   VAR_3 = FUNC_1 ();
   VAR_2 = VAR_1->buf_ptr;
   if (VAR_3 == VAR_0) {
    FUNC_2 ("unexpected end of file in comment");
   } else if (VAR_3 == '\\') {
    VAR_2++;
   }
  }
 }
end_of_comment:
 VAR_2++;
 return VAR_2;
}
