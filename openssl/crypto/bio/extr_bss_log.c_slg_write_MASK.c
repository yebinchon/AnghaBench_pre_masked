
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_2, const char *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_4;
    char *VAR_6;
    char *VAR_7;
    int VAR_8, VAR_9;
    static const struct {
        int strl;
        char str[10];
        int log_level;
    } VAR_10[] = {
        {
            6, "PANIC ", 132
        },
        {
            6, "EMERG ", 132
        },
        {
            4, "EMR ", 132
        },
        {
            6, "ALERT ", 135
        },
        {
            4, "ALR ", 135
        },
        {
            5, "CRIT ", 134
        },
        {
            4, "CRI ", 134
        },
        {
            6, "ERROR ", 131
        },
        {
            4, "ERR ", 131
        },
        {
            8, "WARNING ", 128
        },
        {
            5, "WARN ", 128
        },
        {
            4, "WAR ", 128
        },
        {
            7, "NOTICE ", 129
        },
        {
            5, "NOTE ", 129
        },
        {
            4, "NOT ", 129
        },
        {
            5, "INFO ", 130
        },
        {
            4, "INF ", 130
        },
        {
            6, "DEBUG ", 133
        },
        {
            4, "DBG ", 133
        },
        {
            0, "", 131
        }

    };

    if ((VAR_6 = FUNC_2(VAR_4 + 1)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    FUNC_3(VAR_6, VAR_3, VAR_4);
    VAR_6[VAR_4] = '\0';

    VAR_9 = 0;
    while (FUNC_4(VAR_6, VAR_10[VAR_9].str, VAR_10[VAR_9].strl) != 0)
        VAR_9++;
    VAR_8 = VAR_10[VAR_9].log_level;
    VAR_7 = VAR_6 + VAR_10[VAR_9].strl;

    FUNC_5(VAR_2, VAR_8, VAR_7);

    FUNC_1(VAR_6);
    return VAR_5;
}
