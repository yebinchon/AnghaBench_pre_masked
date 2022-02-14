
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum SvcP_RecordType { ____Placeholder_SvcP_RecordType } SvcP_RecordType ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static enum SvcP_RecordType
FUNC_2(const char *VAR_0, size_t *VAR_1, size_t VAR_2)
{
    static const struct {
        const char *name;
        size_t length;
        enum SvcP_RecordType type;
    } VAR_3[] = {
        {"exclude", 7, 138},
        {"probe", 5, 134},
        {"match", 5, 136},
        {"softmatch", 9, 132},
        {"ports", 5, 135},
        {"sslports", 8, 131},
        {"totalwaitms", 11, 129},
        {"tcpwrappedms",12, 130},
        {"rarity", 6, 133},
        {"fallback", 8, 137},
        {0, 128}
    };

    size_t VAR_4;
    size_t VAR_5 = *VAR_1;
    size_t VAR_6;
    size_t VAR_7;
    enum SvcP_RecordType VAR_8;


    VAR_7 = VAR_5;
    while (VAR_5 < VAR_2 && !FUNC_0(VAR_0[VAR_5]))
        VAR_5++;
    VAR_6 = VAR_5 - VAR_7;
    while (VAR_5 < VAR_2 && FUNC_0(VAR_0[VAR_5]))
        VAR_5++;
    *VAR_1 = VAR_5;


    for (VAR_4=0; VAR_3[VAR_4].name; VAR_4++) {
        if (VAR_6 != VAR_3[VAR_4].length)
            continue;
        if (FUNC_1(VAR_0+VAR_7, VAR_3[VAR_4].name, VAR_6) == 0) {
            break;
        }
    }
    VAR_8 = VAR_3[VAR_4].type;


    return VAR_8;
}
