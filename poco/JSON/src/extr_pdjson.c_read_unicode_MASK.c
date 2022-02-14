
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* get ) (TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,long) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 long FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(json_stream *VAR_1)
{
    long VAR_2, VAR_3, VAR_4;

    if ((VAR_2 = FUNC_2(VAR_1)) == -1) {
        return -1;
    }

    if (VAR_2 >= 0xd800 && VAR_2 <= 0xdbff) {



        VAR_3 = VAR_2;

        int VAR_5 = VAR_1->source.get(&VAR_1->source);
        if (VAR_5 == VAR_0) {
            FUNC_1(VAR_1, "%s", "unterminated string literal in unicode");
            return -1;
        } else if (VAR_5 != '\\') {
            FUNC_1(VAR_1, "invalid continuation for surrogate pair: '%c', "
                             "expected '\\'", VAR_5);
            return -1;
        }

        VAR_5 = VAR_1->source.get(&VAR_1->source);
        if (VAR_5 == VAR_0) {
            FUNC_1(VAR_1, "%s", "unterminated string literal in unicode");
            return -1;
        } else if (VAR_5 != 'u') {
            FUNC_1(VAR_1, "invalid continuation for surrogate pair: '%c', "
                             "expected 'u'", VAR_5);
            return -1;
        }

        if ((VAR_4 = FUNC_2(VAR_1)) == -1) {
            return -1;
        }

        if (VAR_4 < 0xdc00 || VAR_4 > 0xdfff) {
            FUNC_1(VAR_1, "invalid surrogate pair continuation \\u%04lx out "
                             "of range (dc00-dfff)", VAR_4);
            return -1;
        }

        VAR_2 = ((VAR_3 - 0xd800) * 0x400) + ((VAR_4 - 0xdc00) + 0x10000);
    } else if (VAR_2 >= 0xdc00 && VAR_2 <= 0xdfff) {
            FUNC_1(VAR_1, "dangling surrogate \\u%04lx", VAR_2);
            return -1;
    }

    return FUNC_0(VAR_1, VAR_2);
}
