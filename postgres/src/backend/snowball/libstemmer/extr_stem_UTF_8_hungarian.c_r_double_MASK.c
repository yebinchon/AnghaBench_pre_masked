
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int lb; int* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_1) {
    { int VAR_2 = VAR_1->l - VAR_1->c;
        if (VAR_1->c - 1 <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] >> 5 != 3 || !((106790108 >> (VAR_1->p[VAR_1->c - 1] & 0x1f)) & 1)) return 0;
        if (!(FUNC_0(VAR_1, VAR_0, 23))) return 0;
        VAR_1->c = VAR_1->l - VAR_2;
    }
    return 1;
}
