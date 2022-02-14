
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* buf_ptr; int line_num; } ;
typedef int CString ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static uint8_t *FUNC_6(uint8_t *VAR_2,
    int VAR_3, CString *VAR_4)
{
 int VAR_5;
 VAR_2++;
 while (FUNC_5 () == 0) {
  VAR_5 = *VAR_2;
  if (VAR_5 == VAR_3) {
   break;
  } else if (VAR_5 == '\\') {
   VAR_1->buf_ptr = VAR_2;
   VAR_5 = FUNC_3 ();
   VAR_2 = VAR_1->buf_ptr;
   if (VAR_5 == VAR_0) {
unterminated_string:

    FUNC_4 ("missing terminating %c character", VAR_3);
    return ((void*)0);
   } else if (VAR_5 == '\\') {

    FUNC_0 (VAR_5, VAR_2);
    if (VAR_5 == '\n') {
     VAR_1->line_num++;
     VAR_2++;
    } else if (VAR_5 == '\r') {
     FUNC_0 (VAR_5, VAR_2);
     if (VAR_5 != '\n') {
      FUNC_2 ("'\n' after '\r'");
      return ((void*)0);
     }
     VAR_1->line_num++;
     VAR_2++;
    } else if (VAR_5 == VAR_0) {
     goto unterminated_string;
    } else {
     if (VAR_4) {
      FUNC_1 (VAR_4, '\\');
      FUNC_1 (VAR_4, VAR_5);
     }
     VAR_2++;
    }
   }
  } else if (VAR_5 == '\n') {
   VAR_1->line_num++;
   goto add_char;
  } else if (VAR_5 == '\r') {
   FUNC_0 (VAR_5, VAR_2);
   if (VAR_5 != '\n') {
    if (VAR_4) {
     FUNC_1 (VAR_4, '\r');
    }
   } else {
    VAR_1->line_num++;
    goto add_char;
   }
  } else {
add_char:
   if (VAR_4) {
    FUNC_1 (VAR_4, VAR_5);
   }
   VAR_2++;
  }
 }
 VAR_2++;
 return VAR_2;
}
