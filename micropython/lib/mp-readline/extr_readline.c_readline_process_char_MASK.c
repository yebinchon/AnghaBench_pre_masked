
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ escape_seq; int orig_line_len; size_t cursor_pos; char* prompt; int* escape_seq_buf; int hist_cur; TYPE_1__* line; } ;
struct TYPE_9__ {size_t len; char* buf; } ;


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
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int ** FUNC_1 (int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int VAR_16 ;
 size_t FUNC_6 (char*,int,int *,char const**) ;
 int VAR_17 ;
 int FUNC_7 (scalar_t__) ;
 TYPE_8__ VAR_18 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,size_t) ;
 int FUNC_11 (TYPE_1__*,size_t,int ) ;
 int FUNC_12 (TYPE_1__*,size_t,int) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;

int FUNC_15(int VAR_19) {
    size_t VAR_20 = VAR_18.line->len;
    int VAR_21 = 0;
    bool VAR_22 = 0;
    int VAR_23 = 0;
    if (VAR_18.escape_seq == VAR_14) {
        if (VAR_0 <= VAR_19 && VAR_19 <= VAR_4 && FUNC_13(VAR_18.line) == VAR_18.orig_line_len) {

            return VAR_19;
        } else if (VAR_19 == VAR_0) {

            goto home_key;





        } else if (VAR_19 == VAR_2) {

            return VAR_19;





        } else if (VAR_19 == VAR_4) {

            goto end_key;
        } else if (VAR_19 == '\r') {

            FUNC_4("\r\n");
            FUNC_7(FUNC_14(VAR_18.line) + VAR_18.orig_line_len);
            return 0;
        } else if (VAR_19 == 27) {

            VAR_18.escape_seq = VAR_10;
        } else if (VAR_19 == 8 || VAR_19 == 127) {

            if (VAR_18.cursor_pos > VAR_18.orig_line_len) {
                int VAR_24 = 1;



                FUNC_9(VAR_18.line, VAR_18.cursor_pos - VAR_24, VAR_24);

                VAR_21 = VAR_24;
                VAR_22 = 1;
            }
        } else if (32 <= VAR_19 && VAR_19 <= 126) {

            FUNC_12(VAR_18.line, VAR_18.cursor_pos, VAR_19);

            VAR_22 = 1;
            VAR_23 = 1;
        }
    } else if (VAR_18.escape_seq == VAR_10) {
        switch (VAR_19) {
            case '[':
                VAR_18.escape_seq = VAR_11;
                break;
            case 'O':
                VAR_18.escape_seq = VAR_13;
                break;
            default:
                FUNC_0("(ESC %d)", VAR_19);
                VAR_18.escape_seq = VAR_14;
        }
    } else if (VAR_18.escape_seq == VAR_11) {
        if ('0' <= VAR_19 && VAR_19 <= '9') {
            VAR_18.escape_seq = VAR_12;
            VAR_18.escape_seq_buf[0] = VAR_19;
        } else {
            VAR_18.escape_seq = VAR_14;
            if (VAR_19 == 'A') {




                if (VAR_18.hist_cur + 1 < (int)VAR_15 && FUNC_1(VAR_17)[VAR_18.hist_cur + 1] != ((void*)0)) {

                    VAR_18.hist_cur += 1;

                    VAR_18.line->len = VAR_18.orig_line_len;
                    FUNC_8(VAR_18.line, FUNC_1(VAR_17)[VAR_18.hist_cur]);

                    VAR_21 = VAR_18.cursor_pos - VAR_18.orig_line_len;
                    VAR_22 = 1;
                    VAR_23 = VAR_18.line->len - VAR_18.orig_line_len;
                }
            } else if (VAR_19 == 'B') {




                if (VAR_18.hist_cur >= 0) {

                    VAR_18.hist_cur -= 1;

                    FUNC_10(VAR_18.line, VAR_18.line->len - VAR_18.orig_line_len);
                    if (VAR_18.hist_cur >= 0) {
                        FUNC_8(VAR_18.line, FUNC_1(VAR_17)[VAR_18.hist_cur]);
                    }

                    VAR_21 = VAR_18.cursor_pos - VAR_18.orig_line_len;
                    VAR_22 = 1;
                    VAR_23 = VAR_18.line->len - VAR_18.orig_line_len;
                }
            } else if (VAR_19 == 'C') {




                if (VAR_18.cursor_pos < VAR_18.line->len) {
                    VAR_23 = 1;
                }
            } else if (VAR_19 == 'D') {




                if (VAR_18.cursor_pos > VAR_18.orig_line_len) {
                    VAR_21 = 1;
                }
            } else if (VAR_19 == 'H') {

                goto home_key;
            } else if (VAR_19 == 'F') {

                goto end_key;
            } else {
                FUNC_0("(ESC [ %d)", VAR_19);
            }
        }
    } else if (VAR_18.escape_seq == VAR_12) {
        if (VAR_19 == '~') {
            if (VAR_18.escape_seq_buf[0] == '1' || VAR_18.escape_seq_buf[0] == '7') {
home_key:
                VAR_21 = VAR_18.cursor_pos - VAR_18.orig_line_len;
            } else if (VAR_18.escape_seq_buf[0] == '4' || VAR_18.escape_seq_buf[0] == '8') {
end_key:
                VAR_23 = VAR_18.line->len - VAR_18.cursor_pos;
            } else if (VAR_18.escape_seq_buf[0] == '3') {




                if (VAR_18.cursor_pos < VAR_18.line->len) {
                    FUNC_9(VAR_18.line, VAR_18.cursor_pos, 1);
                    VAR_22 = 1;
                }
            } else {
                FUNC_0("(ESC [ %c %d)", VAR_18.escape_seq_buf[0], VAR_19);
            }
        } else {
            FUNC_0("(ESC [ %c %d)", VAR_18.escape_seq_buf[0], VAR_19);
        }
        VAR_18.escape_seq = VAR_14;
    } else if (VAR_18.escape_seq == VAR_13) {
        switch (VAR_19) {
            case 'H':
                goto home_key;
            case 'F':
                goto end_key;
            default:
                FUNC_0("(ESC O %d)", VAR_19);
                VAR_18.escape_seq = VAR_14;
        }
    } else {
        VAR_18.escape_seq = VAR_14;
    }


    if (VAR_21 > 0) {
        FUNC_3(VAR_21);
        VAR_18.cursor_pos -= VAR_21;
    }
    if (VAR_22) {
        if (VAR_18.line->len < VAR_20) {

            FUNC_2(VAR_20 - VAR_18.cursor_pos);
        }

        FUNC_5(VAR_18.line->buf + VAR_18.cursor_pos, VAR_18.line->len - VAR_18.cursor_pos);

        FUNC_3(VAR_18.line->len - (VAR_18.cursor_pos + VAR_23));
        VAR_18.cursor_pos += VAR_23;
    } else if (VAR_23 > 0) {

        FUNC_5(VAR_18.line->buf + VAR_18.cursor_pos, VAR_23);
        VAR_18.cursor_pos += VAR_23;
    }

    return -1;
}
