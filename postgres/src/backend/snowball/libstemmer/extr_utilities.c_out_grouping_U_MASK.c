
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int l; int p; } ;


 int FUNC_0 (int ,int,int ,int*) ;

extern int FUNC_1(struct SN_env * VAR_0, const unsigned char * VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    do {
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_0->p, VAR_0->c, VAR_0->l, & VAR_5);
 if (!VAR_6) return -1;
 if (!(VAR_5 > VAR_3 || (VAR_5 -= VAR_2) < 0 || (VAR_1[VAR_5 >> 3] & (0X1 << (VAR_5 & 0X7))) == 0))
     return VAR_6;
 VAR_0->c += VAR_6;
    } while (VAR_4);
    return 0;
}
