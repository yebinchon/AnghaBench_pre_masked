
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* insts; int len; int sub; } ;
typedef TYPE_1__ ByteProg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char const) ;
 int VAR_5 ;
 int FUNC_1 (int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_12, ByteProg *VAR_13, int VAR_14)
{
    char *VAR_15 = VAR_14 ? ((void*)0) : VAR_13->insts;
    int VAR_16 = VAR_8;
    int VAR_17 = VAR_8;
    int VAR_18 = 0;

    for (; *VAR_12 && *VAR_12 != ')'; VAR_12++) {
        switch (*VAR_12) {
        case '\\':
            VAR_12++;
            if (!*VAR_12) return ((void*)0);
            if ((*VAR_12 | 0x20) == 'd' || (*VAR_12 | 0x20) == 's' || (*VAR_12 | 0x20) == 'w') {
                VAR_17 = VAR_8;
                FUNC_0(VAR_8++, VAR_7);
                FUNC_0(VAR_8++, *VAR_12);
                VAR_13->len++;
                break;
            }
        default:
            VAR_17 = VAR_8;
            FUNC_0(VAR_8++, VAR_2);
            FUNC_0(VAR_8++, *VAR_12);
            VAR_13->len++;
            break;
        case '.':
            VAR_17 = VAR_8;
            FUNC_0(VAR_8++, VAR_0);
            VAR_13->len++;
            break;
        case '[': {
            int VAR_19;
            VAR_17 = VAR_8;
            VAR_12++;
            if (*VAR_12 == '^') {
                FUNC_0(VAR_8++, VAR_4);
                VAR_12++;
            } else {
                FUNC_0(VAR_8++, VAR_3);
            }
            VAR_8++;
            VAR_13->len++;
            for (VAR_19 = 0; *VAR_12 != ']'; VAR_12++, VAR_19++) {
                if (*VAR_12 == '\\') {
                    ++VAR_12;
                }
                if (!*VAR_12) return ((void*)0);
                FUNC_0(VAR_8++, *VAR_12);
                if (VAR_12[1] == '-' && VAR_12[2] != ']') {
                    VAR_12 += 2;
                }
                FUNC_0(VAR_8++, *VAR_12);
            }
            FUNC_0(VAR_17 + 1, VAR_19);
            break;
        }
        case '(': {
            VAR_17 = VAR_8;
            int VAR_20 = 0;
            int VAR_21 = VAR_12[1] != '?' || VAR_12[2] != ':';

            if (VAR_21) {
                VAR_20 = ++VAR_13->sub;
                FUNC_0(VAR_8++, VAR_10);
                FUNC_0(VAR_8++, 2 * VAR_20);
                VAR_13->len++;
            } else {
                    VAR_12 += 2;
            }

            VAR_12 = FUNC_3(VAR_12 + 1, VAR_13, VAR_14);
            if (VAR_12 == ((void*)0) || *VAR_12 != ')') return ((void*)0);

            if (VAR_21) {
                FUNC_0(VAR_8++, VAR_10);
                FUNC_0(VAR_8++, 2 * VAR_20 + 1);
                VAR_13->len++;
            }

            break;
        }
        case '?':
            if (VAR_8 == VAR_17) return ((void*)0);
            FUNC_1(VAR_17, 2, VAR_8);
            if (VAR_12[1] == '?') {
                FUNC_0(VAR_17, VAR_9);
                VAR_12++;
            } else {
                FUNC_0(VAR_17, VAR_11);
            }
            FUNC_0(VAR_17 + 1, FUNC_2(VAR_17, VAR_8));
            VAR_13->len++;
            VAR_17 = VAR_8;
            break;
        case '*':
            if (VAR_8 == VAR_17) return ((void*)0);
            FUNC_1(VAR_17, 2, VAR_8);
            FUNC_0(VAR_8, VAR_6);
            FUNC_0(VAR_8 + 1, FUNC_2(VAR_8, VAR_17));
            VAR_8 += 2;
            if (VAR_12[1] == '?') {
                FUNC_0(VAR_17, VAR_9);
                VAR_12++;
            } else {
                FUNC_0(VAR_17, VAR_11);
            }
            FUNC_0(VAR_17 + 1, FUNC_2(VAR_17, VAR_8));
            VAR_13->len += 2;
            VAR_17 = VAR_8;
            break;
        case '+':
            if (VAR_8 == VAR_17) return ((void*)0);
            if (VAR_12[1] == '?') {
                FUNC_0(VAR_8, VAR_11);
                VAR_12++;
            } else {
                FUNC_0(VAR_8, VAR_9);
            }
            FUNC_0(VAR_8 + 1, FUNC_2(VAR_8, VAR_17));
            VAR_8 += 2;
            VAR_13->len++;
            VAR_17 = VAR_8;
            break;
        case '|':
            if (VAR_18) {
                FUNC_0(VAR_18, FUNC_2(VAR_18, VAR_8) + 1);
            }
            FUNC_1(VAR_16, 2, VAR_8);
            FUNC_0(VAR_8++, VAR_6);
            VAR_18 = VAR_8++;
            FUNC_0(VAR_16, VAR_11);
            FUNC_0(VAR_16 + 1, FUNC_2(VAR_16, VAR_8));
            VAR_13->len += 2;
            VAR_17 = VAR_8;
            break;
        case '^':
            FUNC_0(VAR_8++, VAR_1);
            VAR_13->len++;
            VAR_17 = VAR_8;
            break;
        case '$':
            FUNC_0(VAR_8++, VAR_5);
            VAR_13->len++;
            VAR_17 = VAR_8;
            break;
        }
    }

    if (VAR_18) {
        FUNC_0(VAR_18, FUNC_2(VAR_18, VAR_8) + 1);
    }
    return VAR_12;
}
