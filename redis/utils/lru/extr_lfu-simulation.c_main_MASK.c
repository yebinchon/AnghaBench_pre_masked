
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct entry {scalar_t__ ctime; scalar_t__ hits; void* decrtime; void* counter; } ;


 void* VAR_0 ;
 int FUNC_0 (struct entry*) ;
 int VAR_1 ;
 struct entry* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (struct entry*) ;
 int FUNC_5 (long,struct entry*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;
 void* FUNC_7 (scalar_t__) ;

int FUNC_8(void) {
    time_t VAR_3 = FUNC_6(((void*)0));
    time_t VAR_4 = VAR_3;
    time_t VAR_5 = VAR_3;
    struct entry *VAR_6 = FUNC_1(sizeof(*VAR_6)*VAR_1);
    long VAR_7;


    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        VAR_6[VAR_7].counter = VAR_0;
        VAR_6[VAR_7].decrtime = FUNC_7(VAR_3);
        VAR_6[VAR_7].hits = 0;
        VAR_6[VAR_7].ctime = FUNC_6(((void*)0));
    }

    while(1) {
        time_t VAR_8 = FUNC_6(((void*)0));
        long VAR_9;


        for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
            FUNC_4(VAR_6+(FUNC_3()%VAR_1));
        }



        if (VAR_8-VAR_3 < VAR_2) {

            VAR_9 = 1;
            while((FUNC_3() % 21) != 0 && VAR_9 < VAR_1) VAR_9 *= 2;
            if (VAR_9 > VAR_1) VAR_9 = VAR_1;
            VAR_9 = FUNC_3() % VAR_9;
        } else {

            VAR_9 = FUNC_3() % VAR_1;
        }
        if ((VAR_9 < 10 || VAR_9 > 14) && (VAR_9 < VAR_1-5))
            FUNC_0(VAR_6+VAR_9);



        if (VAR_4 <= VAR_8) {
            VAR_9 = 10+(FUNC_3()%10);
            VAR_6[VAR_9].counter = VAR_0;
            VAR_6[VAR_9].decrtime = FUNC_7(FUNC_6(((void*)0)));
            VAR_6[VAR_9].hits = 0;
            VAR_6[VAR_9].ctime = FUNC_6(((void*)0));
            VAR_4 = VAR_8+10;
        }


        if (VAR_5 != VAR_8) {
            FUNC_2("=============================\n");
            FUNC_2("Current minutes time: %d\n", (int)FUNC_7(VAR_8));
            FUNC_2("Access method: %s\n",
                (VAR_8-VAR_3 < VAR_2) ? "power-law" : "flat");

            for (VAR_7 = 0; VAR_7 < 20; VAR_7++)
                FUNC_5(VAR_7,VAR_6+VAR_7);

            for (VAR_7 = VAR_1-20; VAR_7 < VAR_1; VAR_7++)
                FUNC_5(VAR_7,VAR_6+VAR_7);
            VAR_5 = VAR_8;
        }
    }
    return 0;
}
