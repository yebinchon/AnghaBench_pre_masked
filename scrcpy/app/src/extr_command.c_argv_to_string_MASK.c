
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static size_t
FUNC_3(const char *const *VAR_0, char *VAR_1, size_t VAR_2) {
    size_t VAR_3 = 0;
    bool VAR_4 = 1;
    while (*VAR_0) {
        const char *VAR_5 = *VAR_0;
        size_t VAR_6 = FUNC_2(VAR_5);

        if (VAR_3 + VAR_6 + 8 >= VAR_2) {

            FUNC_0(VAR_3 < VAR_2 - 4);
            FUNC_1(&VAR_1[VAR_3], "...", 3);
            VAR_3 += 3;
            break;
        }
        if (VAR_4) {
            VAR_4 = 0;
        } else {
            VAR_1[VAR_3++] = ',';
            VAR_1[VAR_3++] = ' ';
        }
        VAR_1[VAR_3++] = '[';
        FUNC_1(&VAR_1[VAR_3], VAR_5, VAR_6);
        VAR_3 += VAR_6;
        VAR_1[VAR_3++] = ']';
        VAR_0++;
    }
    FUNC_0(VAR_3 < VAR_2);
    VAR_1[VAR_3] = '\0';
    return VAR_3;
}
