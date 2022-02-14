
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,char*,...) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 () ;
 char* VAR_3 ;
 int VAR_4 ;

int FUNC_3(int VAR_5) {
    static time_t VAR_6 = 0;
    static unsigned long VAR_7 = 0, VAR_8 = 0;




    if(VAR_2 == 0)
        return 0;


    if(VAR_1 == 0)



        return 1;


    time_t VAR_9 = FUNC_2();
    if(!VAR_6) VAR_6 = VAR_9;

    if(VAR_5) {
        if(VAR_8) {
            char VAR_10[VAR_0];
            FUNC_1(VAR_10, VAR_0);
            FUNC_0(VAR_4, "%s: %s LOG FLOOD PROTECTION reset for process '%s' (prevented %lu logs in the last %ld seconds).\n"
                    , VAR_10
                    , VAR_3
                    , VAR_3
                    , VAR_8
                    , VAR_9 - VAR_6
            );
        }

        VAR_6 = VAR_9;
        VAR_7 = 0;
        VAR_8 = 0;
    }


    VAR_7++;

    if(VAR_9 - VAR_6 > VAR_2) {
        if(VAR_8) {
            char VAR_11[VAR_0];
            FUNC_1(VAR_11, VAR_0);
            FUNC_0(VAR_4, "%s: %s LOG FLOOD PROTECTION resuming logging from process '%s' (prevented %lu logs in the last %ld seconds).\n"
                    , VAR_11
                    , VAR_3
                    , VAR_3
                    , VAR_8
                    , VAR_2
            );
        }


        VAR_6 = VAR_9;
        VAR_7 = 1;
        VAR_8 = 0;


        return 0;
    }

    if(VAR_7 > VAR_1) {
        if(!VAR_8) {
            char VAR_12[VAR_0];
            FUNC_1(VAR_12, VAR_0);
            FUNC_0(VAR_4, "%s: %s LOG FLOOD PROTECTION too many logs (%lu logs in %ld seconds, threshold is set to %lu logs in %ld seconds). Preventing more logs from process '%s' for %ld seconds.\n"
                    , VAR_12
                    , VAR_3
                    , VAR_7
                    , VAR_9 - VAR_6
                    , VAR_1
                    , VAR_2
                    , VAR_3
                    , VAR_6 + VAR_2 - VAR_9);
        }

        VAR_8++;





        return 1;

    }

    return 0;
}
