
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* lines; TYPE_1__* words; } ;
typedef TYPE_4__ procfile ;
struct TYPE_12__ {size_t len; TYPE_2__* lines; } ;
struct TYPE_11__ {size_t first; char* words; } ;
struct TYPE_10__ {char* len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,size_t,char*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_4__*) ;
 size_t FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (TYPE_4__*,size_t,size_t) ;
 size_t FUNC_5 (TYPE_4__*,size_t) ;

void FUNC_6(procfile *VAR_1) {
    size_t VAR_2 = FUNC_3(VAR_1), VAR_3;
    char *VAR_4;
    (void)VAR_4;

    FUNC_0(VAR_0, "File '%s' with %zu lines and %zu words", FUNC_2(VAR_1), VAR_1->lines->len, VAR_1->words->len);

    for(VAR_3 = 0; FUNC_1(VAR_3 < VAR_2) ;VAR_3++) {
        size_t VAR_5 = FUNC_5(VAR_1, VAR_3);

        FUNC_0(VAR_0, " line %zu starts at word %zu and has %zu words", VAR_3, VAR_1->lines->lines[VAR_3].first, VAR_1->lines->lines[VAR_3].words);

        size_t VAR_6;
        for(VAR_6 = 0; FUNC_1(VAR_6 < VAR_5) ;VAR_6++) {
            VAR_4 = FUNC_4(VAR_1, VAR_3, VAR_6);
            FUNC_0(VAR_0, "     [%zu.%zu] '%s'", VAR_3, VAR_6, VAR_4);
        }
    }
}
