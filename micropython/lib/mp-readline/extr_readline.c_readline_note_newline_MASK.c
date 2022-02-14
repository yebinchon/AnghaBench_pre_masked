
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* prompt; int orig_line_len; int cursor_pos; TYPE_1__* line; } ;
struct TYPE_3__ {int len; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;

void FUNC_2(const char *VAR_1) {
    VAR_0.orig_line_len = VAR_0.line->len;
    VAR_0.cursor_pos = VAR_0.orig_line_len;
    VAR_0.prompt = VAR_1;
    FUNC_0(VAR_1);



}
