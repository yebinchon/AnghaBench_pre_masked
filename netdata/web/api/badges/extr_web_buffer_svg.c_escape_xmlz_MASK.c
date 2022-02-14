
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static inline size_t FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2) {
    size_t VAR_3 = VAR_2;



    while(*VAR_1 && VAR_3) {
        switch(*VAR_1) {
            case '\\':
                *VAR_0++ = '/';
                VAR_1++;
                VAR_3--;
                break;

            case '&':
                if(VAR_3 > 5) {
                    FUNC_0(VAR_0, "&amp;");
                    VAR_3 -= 5;
                    VAR_0 += 5;
                    VAR_1++;
                }
                else goto cleanup;
                break;

            case '<':
                if(VAR_3 > 4) {
                    FUNC_0(VAR_0, "&lt;");
                    VAR_3 -= 4;
                    VAR_0 += 4;
                    VAR_1++;
                }
                else goto cleanup;
                break;

            case '>':
                if(VAR_3 > 4) {
                    FUNC_0(VAR_0, "&gt;");
                    VAR_3 -= 4;
                    VAR_0 += 4;
                    VAR_1++;
                }
                else goto cleanup;
                break;

            case '"':
                if(VAR_3 > 6) {
                    FUNC_0(VAR_0, "&quot;");
                    VAR_3 -= 6;
                    VAR_0 += 6;
                    VAR_1++;
                }
                else goto cleanup;
                break;

            case '\'':
                if(VAR_3 > 6) {
                    FUNC_0(VAR_0, "&apos;");
                    VAR_3 -= 6;
                    VAR_0 += 6;
                    VAR_1++;
                }
                else goto cleanup;
                break;

            default:
                VAR_3--;
                *VAR_0++ = *VAR_1++;
                break;
        }
    }

cleanup:
    *VAR_0 = '\0';
    return VAR_2 - VAR_3;
}
