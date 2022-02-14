
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
typedef int linenoiseCompletions ;
struct TYPE_2__ {int type; char* full; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,size_t) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,size_t) ;

__attribute__((used)) static void FUNC_7(const char *VAR_4, linenoiseCompletions *VAR_5) {
    size_t VAR_6 = 0;
    int VAR_7;
    int VAR_8;
    size_t VAR_9;
    sds VAR_10;

    if (FUNC_6(VAR_4,"help ",5) == 0) {
        VAR_6 = 5;
        while (FUNC_0(VAR_4[VAR_6])) VAR_6++;
        VAR_7 = VAR_0 | VAR_1;
    } else {
        VAR_7 = VAR_0;
    }

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        if (!(VAR_2[VAR_8].type & VAR_7)) continue;

        VAR_9 = FUNC_5(VAR_4+VAR_6);
        if (FUNC_6(VAR_4+VAR_6,VAR_2[VAR_8].full,VAR_9) == 0) {
            VAR_10 = FUNC_4(VAR_4,VAR_6);
            VAR_10 = FUNC_2(VAR_10,VAR_2[VAR_8].full);
            FUNC_1(VAR_5,VAR_10);
            FUNC_3(VAR_10);
        }
    }
}
