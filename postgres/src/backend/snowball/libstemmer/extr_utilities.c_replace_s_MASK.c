
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct SN_env {int l; int c; int const* p; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 () ;
 int const* FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*,int const*,int) ;

extern int FUNC_6(struct SN_env * VAR_0, int VAR_1, int VAR_2, int VAR_3, const symbol * VAR_4, int * VAR_5)
{
    int VAR_6;
    int VAR_7;
    if (VAR_0->p == ((void*)0)) {
        VAR_0->p = FUNC_3();
        if (VAR_0->p == ((void*)0)) return -1;
    }
    VAR_6 = VAR_3 - (VAR_2 - VAR_1);
    VAR_7 = FUNC_2(VAR_0->p);
    if (VAR_6 != 0) {
        if (VAR_6 + VAR_7 > FUNC_0(VAR_0->p)) {
            VAR_0->p = FUNC_4(VAR_0->p, VAR_6 + VAR_7);
            if (VAR_0->p == ((void*)0)) return -1;
        }
        FUNC_5(VAR_0->p + VAR_2 + VAR_6,
                VAR_0->p + VAR_2,
                (VAR_7 - VAR_2) * sizeof(symbol));
        FUNC_1(VAR_0->p, VAR_6 + VAR_7);
        VAR_0->l += VAR_6;
        if (VAR_0->c >= VAR_2)
            VAR_0->c += VAR_6;
        else if (VAR_0->c > VAR_1)
            VAR_0->c = VAR_1;
    }
    if (VAR_3) FUNC_5(VAR_0->p + VAR_1, VAR_4, VAR_3 * sizeof(symbol));
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_6;
    return 0;
}
