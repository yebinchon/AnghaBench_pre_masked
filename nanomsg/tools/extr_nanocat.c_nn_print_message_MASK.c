
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int echo_format; } ;
typedef TYPE_1__ nn_options_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int,int,int ) ;
 int FUNC_4 (char) ;
 int VAR_0 ;

void FUNC_5 (nn_options_t *VAR_1, char *VAR_2, int VAR_3)
{
    switch (VAR_1->echo_format) {
    case 128:
        return;
    case 129:
        FUNC_3 (VAR_2, 1, VAR_3, VAR_0);
        break;
    case 133:
        for (; VAR_3 > 0; --VAR_3, ++VAR_2) {
            if (FUNC_4 (*VAR_2)) {
                FUNC_2 (*VAR_2, VAR_0);
            } else {
                FUNC_2 ('.', VAR_0);
            }
        }
        FUNC_2 ('\n', VAR_0);
        break;
    case 130:
        FUNC_2 ('"', VAR_0);
        for (; VAR_3 > 0; --VAR_3, ++VAR_2) {
            switch (*VAR_2) {
            case '\n':
                FUNC_1 (VAR_0, "\\n");
                break;
            case '\r':
                FUNC_1 (VAR_0, "\\r");
                break;
            case '\\':
            case '\"':
                FUNC_1 (VAR_0, "\\%c", *VAR_2);
                break;
            default:
                if (FUNC_4 (*VAR_2)) {
                    FUNC_2 (*VAR_2, VAR_0);
                } else {
                    FUNC_1 (VAR_0, "\\x%02x", (unsigned char)*VAR_2);
                }
            }
        }
        FUNC_1 (VAR_0, "\"\n");
        break;
    case 131:
        if (VAR_3 < 256) {
            FUNC_2 ('\xc4', VAR_0);
            FUNC_2 (VAR_3, VAR_0);
            FUNC_3 (VAR_2, 1, VAR_3, VAR_0);
        } else if (VAR_3 < 65536) {
            FUNC_2 ('\xc5', VAR_0);
            FUNC_2 (VAR_3 >> 8, VAR_0);
            FUNC_2 (VAR_3 & 0xff, VAR_0);
            FUNC_3 (VAR_2, 1, VAR_3, VAR_0);
        } else {
            FUNC_2 ('\xc6', VAR_0);
            FUNC_2 (VAR_3 >> 24, VAR_0);
            FUNC_2 ((VAR_3 >> 16) & 0xff, VAR_0);
            FUNC_2 ((VAR_3 >> 8) & 0xff, VAR_0);
            FUNC_2 (VAR_3 & 0xff, VAR_0);
            FUNC_3 (VAR_2, 1, VAR_3, VAR_0);
        }
        break;
    case 132:
        FUNC_2 ('"', VAR_0);
        for (; VAR_3 > 0; --VAR_3, ++VAR_2) {
             FUNC_1 (VAR_0, "\\x%02x", (unsigned char)*VAR_2);
        }
        FUNC_1 (VAR_0, "\"\n");
        break;

    }
    FUNC_0 (VAR_0);
}
