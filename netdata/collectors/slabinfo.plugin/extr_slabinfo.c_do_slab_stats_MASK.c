
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; int obj_filling; int mem_waste; struct slabinfo* next; int mem_usage; } ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,...) ;
 struct slabinfo* FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

unsigned int FUNC_4(int VAR_5) {

    static unsigned int VAR_6 = 0;
    struct slabinfo *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);


    while (VAR_4) {

        VAR_7 = FUNC_1();


        if (FUNC_3(VAR_6 == 0)) {

            FUNC_0("CHART %s.%s '' 'Memory Usage' 'B' '%s' '' line %d %d %s\n"
                , VAR_2
                , "slabmemory"
                , VAR_0
                , VAR_1
                , VAR_5
                , VAR_3
            );
            for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
                FUNC_0("DIMENSION %s '' absolute 1 1\n", VAR_8->name);
            }


            FUNC_0("CHART %s.%s '' 'Object Filling' '%%' '%s' '' line %d %d %s\n"
                , VAR_2
                , "slabfilling"
                , VAR_0
                , VAR_1 + 1
                , VAR_5
                , VAR_3
            );
            for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
                FUNC_0("DIMENSION %s '' absolute 1 1\n", VAR_8->name);
            }


            FUNC_0("CHART %s.%s '' 'Memory waste' 'B' '%s' '' line %d %d %s\n"
                , VAR_2
                , "slabwaste"
                , VAR_0
                , VAR_1 + 2
                , VAR_5
                , VAR_3
            );
            for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
                FUNC_0("DIMENSION %s '' absolute 1 1\n", VAR_8->name);
            }
        }





        FUNC_0("BEGIN %s.%s\n"
            , VAR_2
            , "slabmemory"
        );
        for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
            FUNC_0("SET %s = %lu\n"
                , VAR_8->name
                , VAR_8->mem_usage
            );
        }
        FUNC_0("END\n");




        FUNC_0("BEGIN %s.%s\n"
            , VAR_2
            , "slabfilling"
        );
        for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
            FUNC_0("SET %s = %u\n"
                , VAR_8->name
                , VAR_8->obj_filling
            );
        }
        FUNC_0("END\n");




        FUNC_0("BEGIN %s.%s\n"
            , VAR_2
            , "slabwaste"
        );
        for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
            FUNC_0("SET %s = %lu\n"
                , VAR_8->name
                , VAR_8->mem_waste
            );
        }
        FUNC_0("END\n");


        VAR_6++;

        FUNC_2(VAR_5);
    }

    return VAR_6;
}
