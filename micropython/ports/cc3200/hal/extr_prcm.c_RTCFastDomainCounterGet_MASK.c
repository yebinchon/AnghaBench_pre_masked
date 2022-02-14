
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long long,unsigned long long) ;
 unsigned long long FUNC_1 () ;

__attribute__((used)) static unsigned long long FUNC_2 (void) {






    unsigned long long VAR_0, VAR_1, VAR_2;
    unsigned int VAR_3;

    do {
        VAR_0 = FUNC_1();
        VAR_1 = FUNC_1();
        VAR_2 = FUNC_1();
        VAR_3 = 0;

        if (VAR_1 - VAR_0 <= 1) { VAR_3++; break; };
        if (VAR_2 - VAR_1 <= 1) { VAR_3++; break; };
        if (VAR_2 - VAR_0 <= 1) { VAR_3++; break; };






    } while (1);

    return (1 == VAR_3) ? VAR_1 : VAR_2;
}
