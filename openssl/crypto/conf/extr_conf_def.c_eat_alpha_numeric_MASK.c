
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ flag_dollarid; } ;
typedef TYPE_1__ CONF ;


 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 char* FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static char *FUNC_4(CONF *VAR_0, char *VAR_1)
{
    for (;;) {
        if (FUNC_2(VAR_0, *VAR_1)) {
            VAR_1 = FUNC_3(VAR_0, VAR_1);
            continue;
        }
        if (!(FUNC_0(VAR_0, *VAR_1)
              || (VAR_0->flag_dollarid && FUNC_1(VAR_0, *VAR_1))))
            return VAR_1;
        VAR_1++;
    }
}
