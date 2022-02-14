
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* client ;
struct TYPE_5__ {size_t randomkeys_keyspacelen; } ;
struct TYPE_4__ {size_t randlen; char** randptr; } ;


 TYPE_3__ VAR_0 ;
 size_t FUNC_0 () ;

__attribute__((used)) static void FUNC_1(client VAR_1) {
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->randlen; VAR_2++) {
        char *VAR_3 = VAR_1->randptr[VAR_2]+11;
        size_t VAR_4 = 0;
        if (VAR_0.randomkeys_keyspacelen != 0)
            VAR_4 = FUNC_0() % VAR_0.randomkeys_keyspacelen;
        size_t VAR_5;

        for (VAR_5 = 0; VAR_5 < 12; VAR_5++) {
            *VAR_3 = '0'+VAR_4%10;
            VAR_4/=10;
            VAR_3--;
        }
    }
}
