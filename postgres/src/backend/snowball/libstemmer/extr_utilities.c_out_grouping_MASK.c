
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {size_t c; size_t l; int* p; } ;



extern int FUNC_0(struct SN_env * VAR_0, const unsigned char * VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    do {
 int VAR_5;
 if (VAR_0->c >= VAR_0->l) return -1;
 VAR_5 = VAR_0->p[VAR_0->c];
 if (!(VAR_5 > VAR_3 || (VAR_5 -= VAR_2) < 0 || (VAR_1[VAR_5 >> 3] & (0X1 << (VAR_5 & 0X7))) == 0))
     return 1;
 VAR_0->c++;
    } while (VAR_4);
    return 0;
}
