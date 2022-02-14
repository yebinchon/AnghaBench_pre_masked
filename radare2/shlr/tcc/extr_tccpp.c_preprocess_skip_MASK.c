
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {void** buf_ptr; int line_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void** FUNC_5 (void**) ;
 void** FUNC_6 (void**) ;
 void** FUNC_7 (void**,int,int *) ;
 scalar_t__ FUNC_8 () ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 uint8_t *VAR_17;

 VAR_17 = VAR_11->buf_ptr;
 VAR_13 = 0;
redo_start:
 VAR_14 = 1;
 VAR_16 = 0;
 while (FUNC_8 () == 0) {
redo_no_start:
  VAR_15 = *VAR_17;
  switch (VAR_15) {
  case ' ':
  case '\t':
  case '\f':
  case '\v':
  case '\r':
   VAR_17++;
   goto redo_no_start;
  case '\n':
   VAR_11->line_num++;
   VAR_17++;
   goto redo_start;
  case '\\':
   VAR_11->buf_ptr = VAR_17;
   VAR_15 = FUNC_1 ();
   if (VAR_15 == VAR_0) {
    FUNC_0 ("#endif");
    return;
   } else if (VAR_15 == '\\') {
    VAR_10 = VAR_11->buf_ptr[0];
    FUNC_2 ();
   }
   VAR_17 = VAR_11->buf_ptr;
   goto redo_no_start;

  case '\"':
  case '\'':
   if (VAR_16) {
    goto _default;
   }
   VAR_17 = FUNC_7 (VAR_17, VAR_15, ((void*)0));
   if (VAR_17 == ((void*)0)) {
    return;
   }
   break;

  case '/':
   if (VAR_16) {
    goto _default;
   }
   VAR_11->buf_ptr = VAR_17;
   VAR_10 = *VAR_17;
   FUNC_3 ();
   VAR_17 = VAR_11->buf_ptr;
   if (VAR_10 == '*') {
    VAR_17 = FUNC_5 (VAR_17);
   } else if (VAR_10 == '/') {
    VAR_17 = FUNC_6 (VAR_17);
   }
   break;
  case '#':
   VAR_17++;
   if (VAR_14) {
    VAR_11->buf_ptr = VAR_17;
    FUNC_4 ();
    VAR_17 = VAR_11->buf_ptr;
    if (VAR_13 == 0 &&
        (VAR_12 == VAR_2 || VAR_12 == VAR_1 || VAR_12 == VAR_3)) {
     goto the_end;
    }
    if (VAR_12 == VAR_5 || VAR_12 == VAR_6 || VAR_12 == VAR_7) {
     VAR_13++;
    } else if (VAR_12 == VAR_3) {
     VAR_13--;
    } else if (VAR_12 == VAR_4 || VAR_12 == VAR_9) {
     VAR_16 = 1;
    } else if (VAR_12 == VAR_8) {
     goto redo_start;
    }
   }
   break;
_default:
  default:
   VAR_17++;
   break;
  }
  VAR_14 = 0;
 }
the_end:
 ;
 VAR_11->buf_ptr = VAR_17;
}
