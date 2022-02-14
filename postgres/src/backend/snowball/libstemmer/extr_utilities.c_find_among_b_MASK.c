
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct among {int s_size; int* s; int (* function ) (struct SN_env*) ;int result; int substring_i; } ;
struct SN_env {int c; int lb; int* p; } ;


 int FUNC_0 (struct SN_env*) ;

extern int FUNC_1(struct SN_env * VAR_0, const struct among * VAR_1, int VAR_2) {

    int VAR_3 = 0;
    int VAR_4 = VAR_2;

    int VAR_5 = VAR_0->c; int VAR_6 = VAR_0->lb;
    symbol * VAR_7 = VAR_0->p + VAR_5 - 1;

    const struct among * VAR_8;

    int VAR_9 = 0;
    int VAR_10 = 0;

    int VAR_11 = 0;

    while(1) {
        int VAR_12 = VAR_3 + ((VAR_4 - VAR_3) >> 1);
        int VAR_13 = 0;
        int VAR_14 = VAR_9 < VAR_10 ? VAR_9 : VAR_10;
        VAR_8 = VAR_1 + VAR_12;
        {
            int VAR_15; for (VAR_15 = VAR_8->s_size - 1 - VAR_14; VAR_15 >= 0; VAR_15--) {
                if (VAR_5 - VAR_14 == VAR_6) { VAR_13 = -1; break; }
                VAR_13 = VAR_7[- VAR_14] - VAR_8->s[VAR_15];
                if (VAR_13 != 0) break;
                VAR_14++;
            }
        }
        if (VAR_13 < 0) { VAR_4 = VAR_12; VAR_10 = VAR_14; }
                 else { VAR_3 = VAR_12; VAR_9 = VAR_14; }
        if (VAR_4 - VAR_3 <= 1) {
            if (VAR_3 > 0) break;
            if (VAR_4 == VAR_3) break;
            if (VAR_11) break;
            VAR_11 = 1;
        }
    }
    while(1) {
        VAR_8 = VAR_1 + VAR_3;
        if (VAR_9 >= VAR_8->s_size) {
            VAR_0->c = VAR_5 - VAR_8->s_size;
            if (VAR_8->function == 0) return VAR_8->result;
            {
                int VAR_16 = VAR_8->function(VAR_0);
                VAR_0->c = VAR_5 - VAR_8->s_size;
                if (VAR_16) return VAR_8->result;
            }
        }
        VAR_3 = VAR_8->substring_i;
        if (VAR_3 < 0) return 0;
    }
}
