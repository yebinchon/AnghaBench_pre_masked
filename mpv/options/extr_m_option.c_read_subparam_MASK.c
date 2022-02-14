
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_15__ {int len; char* start; int member_0; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 TYPE_1__ FUNC_1 (TYPE_1__,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int,int) ;
 int FUNC_4 (TYPE_1__,char*) ;
 int FUNC_5 (TYPE_1__,char*) ;
 int FUNC_6 (TYPE_1__,TYPE_1__*,int ) ;
 int FUNC_7 (struct mp_log*,char*,int,...) ;

__attribute__((used)) static int FUNC_8(struct mp_log *VAR_1, bstr VAR_2, char *VAR_3,
                         bstr *VAR_4, bstr *VAR_5)
{
    bstr VAR_6 = *VAR_4;
    bstr VAR_7 = {0};

    if (FUNC_2(&VAR_6, "\"")) {
        int VAR_8 = FUNC_5(VAR_6, "\"");
        VAR_7 = FUNC_3(VAR_6, 0, VAR_8);
        VAR_6 = FUNC_1(VAR_6, VAR_8);
        if (!FUNC_4(VAR_6, "\"")) {
            FUNC_7(VAR_1, "Terminating '\"' missing for '%.*s'\n",
                   FUNC_0(VAR_2));
            return VAR_0;
        }
        VAR_6 = FUNC_1(VAR_6, 1);
    } else if (FUNC_2(&VAR_6, "[")) {
        bstr VAR_9 = VAR_6;
        int VAR_10 = 1;
        while (VAR_6.len && VAR_10 > 0) {
            if (VAR_6.start[0] == '[') {
                VAR_10++;
            } else if (VAR_6.start[0] == ']') {
                VAR_10--;
            }
            VAR_6 = FUNC_1(VAR_6, 1);
        }
        if (VAR_10 != 0) {
            FUNC_7(VAR_1, "Terminating ']' missing for '%.*s'\n",
                   FUNC_0(VAR_2));
            return VAR_0;
        }
        VAR_7 = FUNC_3(VAR_9, 0, VAR_9.len - VAR_6.len - 1);
    } else if (FUNC_2(&VAR_6, "%")) {
        int VAR_11 = FUNC_6(VAR_6, &VAR_6, 0);
        if (!FUNC_4(VAR_6, "%") || (VAR_11 > VAR_6.len - 1)) {
            FUNC_7(VAR_1, "Invalid length %d for '%.*s'\n",
                   VAR_11, FUNC_0(VAR_2));
            return VAR_0;
        }
        VAR_7 = FUNC_3(VAR_6, 1, VAR_11 + 1);
        VAR_6 = FUNC_1(VAR_6, VAR_11 + 1);
    } else {


        int VAR_12 = FUNC_5(VAR_6, VAR_3);
        VAR_7 = FUNC_3(VAR_6, 0, VAR_12);
        VAR_6 = FUNC_1(VAR_6, VAR_12);
    }

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;
    return 0;
}
