
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int segment ;
struct TYPE_2__ {int verbose; char* last_message; int repeats; char* type; int severity; } ;
typedef TYPE_1__ jbig2dec_params_t ;
typedef int int32_t ;
typedef int Jbig2Severity ;






 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, const char *VAR_2, Jbig2Severity VAR_3, int32_t VAR_4)
{
    jbig2dec_params_t *VAR_5 = (jbig2dec_params_t *) VAR_1;
    char *VAR_6;
    char VAR_7[22];
    int VAR_8;
    char *VAR_9;

    switch (VAR_3) {
    case 131:
        if (VAR_5->verbose < 3)
            return;
        VAR_6 = "DEBUG";
        break;
    case 129:
        if (VAR_5->verbose < 2)
            return;
        VAR_6 = "info";
        break;
    case 128:
        if (VAR_5->verbose < 1)
            return;
        VAR_6 = "WARNING";
        break;
    case 130:
        VAR_6 = "FATAL ERROR";
        break;
    default:
        VAR_6 = "unknown message";
        break;
    }
    if (VAR_4 == -1)
        VAR_7[0] = '\0';
    else
        FUNC_3(VAR_7, sizeof(VAR_7), "(segment 0x%02x)", VAR_4);

    VAR_8 = FUNC_3(((void*)0), 0, "jbig2dec %s %s %s", VAR_6, VAR_2, VAR_7);
    if (VAR_8 < 0) {
        return;
    }

    VAR_9 = FUNC_2(VAR_8 + 1);
    if (VAR_9 == ((void*)0)) {
        return;
    }

    VAR_8 = FUNC_3(VAR_9, VAR_8 + 1, "jbig2dec %s %s %s", VAR_6, VAR_2, VAR_7);
    if (VAR_8 < 0)
    {
        FUNC_1(VAR_9);
        return;
    }

    if (VAR_5->last_message != ((void*)0) && FUNC_4(VAR_9, VAR_5->last_message)) {
        if (VAR_5->repeats > 1)
            FUNC_0(VAR_0, "jbig2dec %s last message repeated %d times\n", VAR_5->type, VAR_5->repeats);
        FUNC_0(VAR_0, "%s\n", VAR_9);
        FUNC_1(VAR_5->last_message);
        VAR_5->last_message = VAR_9;
        VAR_5->severity = VAR_3;
        VAR_5->type = VAR_6;
        VAR_5->repeats = 0;
    } else if (VAR_5->last_message != ((void*)0)) {
        VAR_5->repeats++;
        if (VAR_5->repeats % 1000000 == 0)
            FUNC_0(VAR_0, "jbig2dec %s last message repeated %d times so far\n", VAR_5->type, VAR_5->repeats);
        FUNC_1(VAR_9);
    } else if (VAR_5->last_message == ((void*)0)) {
        FUNC_0(VAR_0, "%s\n", VAR_9);
        VAR_5->last_message = VAR_9;
        VAR_5->severity = VAR_3;
        VAR_5->type = VAR_6;
        VAR_5->repeats = 0;
    }
}
