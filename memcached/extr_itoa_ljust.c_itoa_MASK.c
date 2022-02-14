
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (int,char*) ;

__attribute__((used)) static inline char* FUNC_1(uint32_t VAR_0, char* VAR_1, int VAR_2, int VAR_3) {
    switch(VAR_3) {
    case 10: VAR_2 = VAR_0 / 100000000; VAR_1 = FUNC_0( VAR_2, VAR_1 );
    case 9: VAR_0 -= VAR_2 * 100000000;
    case 8: VAR_2 = VAR_0 / 1000000; VAR_1 = FUNC_0( VAR_2, VAR_1 );
    case 7: VAR_0 -= VAR_2 * 1000000;
    case 6: VAR_2 = VAR_0 / 10000; VAR_1 = FUNC_0( VAR_2, VAR_1 );
    case 5: VAR_0 -= VAR_2 * 10000;
    case 4: VAR_2 = VAR_0 / 100; VAR_1 = FUNC_0( VAR_2, VAR_1 );
    case 3: VAR_0 -= VAR_2 * 100;
    case 2: VAR_2 = VAR_0 / 1; VAR_1 = FUNC_0( VAR_2, VAR_1 );
    case 1: ;
    }
    *VAR_1 = '\0';
    return VAR_1;
}
