
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int m_profile_t ;
struct TYPE_32__ {scalar_t__ recursion_depth; } ;
typedef TYPE_1__ m_config_t ;
typedef int loc ;
struct TYPE_33__ {long long len; char* start; int member_0; } ;
typedef TYPE_2__ bstr ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,...) ;
 TYPE_2__ FUNC_2 (TYPE_2__,long long) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__,char*) ;
 int FUNC_5 (TYPE_2__,TYPE_2__*) ;
 TYPE_2__ FUNC_6 (TYPE_2__,int ,int) ;
 int FUNC_7 (TYPE_2__,char*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__ FUNC_8 (TYPE_2__) ;
 TYPE_2__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__,char) ;
 char* FUNC_11 (void*,TYPE_2__) ;
 long long FUNC_12 (TYPE_2__,TYPE_2__*,int) ;
 int * FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int *,TYPE_2__,TYPE_2__) ;
 int FUNC_16 (int *,TYPE_2__) ;
 scalar_t__ FUNC_17 (char) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (char*,int,char*,char const*,int) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (void*) ;
 void* FUNC_22 (int *) ;

int FUNC_23(m_config_t *VAR_0, const char *VAR_1, bstr VAR_2,
                   char *VAR_3, int VAR_4)
{
    m_profile_t *VAR_5 = FUNC_13(VAR_0, VAR_3);
    void *VAR_6 = FUNC_22(((void*)0));
    int VAR_7 = 0;
    int VAR_8 = 0;

    FUNC_3(&VAR_2, "\xEF\xBB\xBF");

    while (VAR_2.len) {
        FUNC_21(VAR_6);
        bool VAR_9 = 0;

        VAR_7++;
        char VAR_10[512];
        FUNC_19(VAR_10, sizeof(VAR_10), "%s:%d:", VAR_1, VAR_7);

        bstr VAR_11 = FUNC_9(FUNC_5(VAR_2, &VAR_2));
        if (!FUNC_18(&VAR_11))
            continue;


        if (FUNC_3(&VAR_11, "[")) {
            bstr VAR_12;
            if (!FUNC_7(VAR_11, "]", &VAR_12, &VAR_11)) {
                FUNC_1(VAR_0, "%s missing closing ]\n", VAR_10);
                goto error;
            }
            if (FUNC_18(&VAR_11)) {
                FUNC_1(VAR_0, "%s unparseable extra characters: '%.*s'\n",
                       VAR_10, FUNC_0(VAR_11));
                goto error;
            }
            VAR_5 = FUNC_13(VAR_0, FUNC_11(VAR_6, VAR_12));
            continue;
        }

        FUNC_3(&VAR_11, "--");

        bstr VAR_13 = VAR_11;
        while (VAR_11.len && (FUNC_17(VAR_11.start[0]) || VAR_11.start[0] == '_' ||
                            VAR_11.start[0] == '-'))
            VAR_11 = FUNC_2(VAR_11, 1);
        VAR_13.len = VAR_13.len - VAR_11.len;
        FUNC_18(&VAR_11);

        bstr VAR_14 = {0};
        if (FUNC_3(&VAR_11, "=")) {
            FUNC_18(&VAR_11);
            if (VAR_11.len && (VAR_11.start[0] == '"' || VAR_11.start[0] == '\'')) {

                char VAR_15[2] = {VAR_11.start[0], 0};
                VAR_11 = FUNC_2(VAR_11, 1);
                if (!FUNC_7(VAR_11, VAR_15, &VAR_14, &VAR_11)) {
                    FUNC_1(VAR_0, "%s unterminated quote\n", VAR_10);
                    goto error;
                }
            } else if (FUNC_3(&VAR_11, "%")) {

                bstr VAR_16;
                long long VAR_17 = FUNC_12(VAR_11, &VAR_16, 10);
                if (VAR_16.len == VAR_11.len || !FUNC_3(&VAR_16, "%") ||
                    VAR_17 > VAR_16.len)
                {
                    FUNC_1(VAR_0, "%s fixed-length quoting expected - put "
                           "\"quotes\" around the option value if you did not "
                           "intend to use this, but your option value starts "
                           "with '%%'\n", VAR_10);
                    goto error;
                }
                VAR_14 = FUNC_6(VAR_16, 0, VAR_17);
                VAR_11 = FUNC_2(VAR_16, VAR_17);
            } else {

                int VAR_18 = FUNC_10(VAR_11, '#');
                VAR_14 = FUNC_8(VAR_18 < 0 ? VAR_11 : FUNC_6(VAR_11, 0, VAR_18));
                VAR_11.len = 0;
            }
        }
        if (FUNC_18(&VAR_11)) {
            FUNC_1(VAR_0, "%s unparseable extra characters: '%.*s'\n",
                   VAR_10, FUNC_0(VAR_11));
            goto error;
        }

        int VAR_19;
        if (FUNC_4(VAR_13, "profile-desc")) {
            FUNC_16(VAR_5, VAR_14);
            VAR_19 = 0;
        } else {
            VAR_19 = FUNC_15(VAR_0, VAR_5, VAR_13, VAR_14);
        }
        if (VAR_19 < 0) {
            FUNC_1(VAR_0, "%s setting option %.*s='%.*s' failed.\n",
                   VAR_10, FUNC_0(VAR_13), FUNC_0(VAR_14));
            goto error;
        }

        VAR_9 = 1;
    error:
        if (!VAR_9)
            VAR_8++;
        if (VAR_8 > 16) {
            FUNC_1(VAR_0, "%s: too many errors, stopping.\n", VAR_1);
            break;
        }
    }

    if (VAR_0->recursion_depth == 0)
        FUNC_14(VAR_0, VAR_4);

    FUNC_20(VAR_6);
    return 1;
}
