
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
typedef TYPE_1__ vstr_t ;
struct TYPE_5__ {int hist_cur; char const* prompt; int orig_line_len; int cursor_pos; scalar_t__* escape_seq_buf; int escape_seq; TYPE_1__* line; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;

void FUNC_2(vstr_t *VAR_2, const char *VAR_3) {
    VAR_1.line = VAR_2;
    VAR_1.orig_line_len = VAR_2->len;
    VAR_1.escape_seq = VAR_0;
    VAR_1.escape_seq_buf[0] = 0;
    VAR_1.hist_cur = -1;
    VAR_1.cursor_pos = VAR_1.orig_line_len;
    VAR_1.prompt = VAR_3;
    FUNC_0(VAR_3);



}
