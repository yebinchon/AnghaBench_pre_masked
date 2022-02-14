
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* get ) (TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(json_stream *VAR_1)
{
    int VAR_2 = VAR_1->source.get(&VAR_1->source);
    if (VAR_2 == VAR_0) {
        FUNC_0(VAR_1, "%s", "unterminated string literal in escape");
        return -1;
    } else if (VAR_2 == 'u') {
        if (FUNC_2(VAR_1) != 0)
            return -1;
    } else {
        switch (VAR_2) {
        case '\\':
        case 'b':
        case 'f':
        case 'n':
        case 'r':
        case 't':
        case '/':
        case '"':
            {
                const char *VAR_3 = "\\bfnrt/\"";
                char *VAR_4 = (char*) FUNC_3(VAR_3, VAR_2);
                if (FUNC_1(VAR_1, "\\\b\f\n\r\t/\""[VAR_4 - VAR_3]) != 0)
                    return -1;
            }
            break;
        default:
            FUNC_0(VAR_1, "bad escaped byte, '%c'", VAR_2);
            return -1;
        }
    }
    return 0;
}
