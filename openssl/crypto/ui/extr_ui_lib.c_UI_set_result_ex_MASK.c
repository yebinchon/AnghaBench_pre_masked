
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int number2 ;
typedef int number1 ;
struct TYPE_9__ {char* ok_chars; char* cancel_chars; } ;
struct TYPE_8__ {int result_minsize; int result_maxsize; } ;
struct TYPE_10__ {TYPE_2__ boolean_data; TYPE_1__ string_data; } ;
struct TYPE_11__ {int type; char* result_buf; int result_len; TYPE_3__ _; } ;
typedef TYPE_4__ UI_STRING ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_5__ UI ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char*,char*,char*,char*) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,char const) ;

int FUNC_6(UI *VAR_5, UI_STRING *VAR_6, const char *VAR_7, int VAR_8)
{
    VAR_5->flags &= ~VAR_0;

    switch (VAR_6->type) {
    case 129:
    case 128:
        {
            char VAR_9[FUNC_1(VAR_6->_.string_data.result_minsize) + 1];
            char VAR_10[FUNC_1(VAR_6->_.string_data.result_maxsize) + 1];

            FUNC_0(VAR_9, sizeof(VAR_9), "%d",
                         VAR_6->_.string_data.result_minsize);
            FUNC_0(VAR_10, sizeof(VAR_10), "%d",
                         VAR_6->_.string_data.result_maxsize);

            if (VAR_8 < VAR_6->_.string_data.result_minsize) {
                VAR_5->flags |= VAR_0;
                FUNC_3(VAR_1, VAR_4);
                FUNC_2(5, "You must type in ",
                                   VAR_9, " to ", VAR_10, " characters");
                return -1;
            }
            if (VAR_8 > VAR_6->_.string_data.result_maxsize) {
                VAR_5->flags |= VAR_0;
                FUNC_3(VAR_1, VAR_3);
                FUNC_2(5, "You must type in ",
                                   VAR_9, " to ", VAR_10, " characters");
                return -1;
            }
        }

        if (VAR_6->result_buf == ((void*)0)) {
            FUNC_3(VAR_1, VAR_2);
            return -1;
        }

        FUNC_4(VAR_6->result_buf, VAR_7, VAR_8);
        if (VAR_8 <= VAR_6->_.string_data.result_maxsize)
            VAR_6->result_buf[VAR_8] = '\0';
        VAR_6->result_len = VAR_8;
        break;
    case 133:
        {
            const char *VAR_11;

            if (VAR_6->result_buf == ((void*)0)) {
                FUNC_3(VAR_1, VAR_2);
                return -1;
            }

            VAR_6->result_buf[0] = '\0';
            for (VAR_11 = VAR_7; *VAR_11; VAR_11++) {
                if (FUNC_5(VAR_6->_.boolean_data.ok_chars, *VAR_11)) {
                    VAR_6->result_buf[0] = VAR_6->_.boolean_data.ok_chars[0];
                    break;
                }
                if (FUNC_5(VAR_6->_.boolean_data.cancel_chars, *VAR_11)) {
                    VAR_6->result_buf[0] = VAR_6->_.boolean_data.cancel_chars[0];
                    break;
                }
            }
        }
    case 130:
    case 131:
    case 132:
        break;
    }
    return 0;
}
