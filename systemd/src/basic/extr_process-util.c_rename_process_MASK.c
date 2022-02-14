
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,size_t) ;
 char* FUNC_7 (int *,size_t,int,int,int,int ) ;
 int FUNC_8 (char*,size_t) ;
 scalar_t__ FUNC_9 (int ,char const*,...) ;
 char* VAR_13 ;
 int VAR_14 ;
 char** VAR_15 ;
 size_t FUNC_10 (char const*) ;
 int FUNC_11 (char*,char const*,size_t) ;

int FUNC_12(const char VAR_16[]) {
        static size_t VAR_17 = 0;
        static char *VAR_18 = ((void*)0);
        bool VAR_19 = 0;
        size_t VAR_20;
        if (FUNC_3(VAR_16))
                return -VAR_0;

        if (!FUNC_2())
                return -VAR_1;



        VAR_20 = FUNC_10(VAR_16);



        if (FUNC_9(VAR_10, VAR_16) < 0)
                FUNC_5(VAR_12, "PR_SET_NAME failed: %m");
        if (VAR_20 >= VAR_11)
                VAR_19 = 1;


        if (VAR_13) {
                size_t VAR_21;

                VAR_21 = FUNC_10(VAR_13);
                FUNC_11(VAR_13, VAR_16, VAR_21);
                if (VAR_20 > VAR_21)
                        VAR_19 = 1;
        }
        if (FUNC_1() != 0)
                FUNC_4("Skipping PR_SET_MM, as we don't have privileges.");
        else if (VAR_17 < VAR_20+1) {
                size_t VAR_22;
                char *VAR_23;

                VAR_22 = FUNC_0(VAR_20+1);
                VAR_23 = FUNC_7(((void*)0), VAR_22, VAR_5|VAR_6, VAR_4|VAR_2, -1, 0);
                if (VAR_23 == VAR_3) {
                        FUNC_5(VAR_12, "mmap() failed: %m");
                        goto use_saved_argv;
                }

                FUNC_11(VAR_23, VAR_16, VAR_22);


                if (FUNC_9(VAR_7, VAR_9, (unsigned long) VAR_23, 0, 0) < 0) {
                        FUNC_5(VAR_12, "PR_SET_MM_ARG_START failed, attempting PR_SET_MM_ARG_END hack: %m");

                        if (FUNC_9(VAR_7, VAR_8, (unsigned long) VAR_23 + VAR_20 + 1, 0, 0) < 0) {
                                FUNC_5(VAR_12, "PR_SET_MM_ARG_END hack failed, proceeding without: %m");
                                (void) FUNC_8(VAR_23, VAR_22);
                                goto use_saved_argv;
                        }

                        if (FUNC_9(VAR_7, VAR_9, (unsigned long) VAR_23, 0, 0) < 0) {
                                FUNC_5(VAR_12, "PR_SET_MM_ARG_START still failed, proceeding without: %m");
                                goto use_saved_argv;
                        }
                } else {



                        if (FUNC_9(VAR_7, VAR_8, (unsigned long) VAR_23 + VAR_20 + 1, 0, 0) < 0)
                                FUNC_5(VAR_12, "PR_SET_MM_ARG_END failed, proceeding without: %m");
                }

                if (VAR_18)
                        (void) FUNC_8(VAR_18, VAR_17);

                VAR_18 = VAR_23;
                VAR_17 = VAR_22;
        } else {
                FUNC_11(VAR_18, VAR_16, VAR_17);


                if (FUNC_9(VAR_7, VAR_8, (unsigned long) VAR_18 + VAR_20 + 1, 0, 0) < 0)
                        FUNC_5(VAR_12, "PR_SET_MM_ARG_END failed, proceeding without: %m");
        }

use_saved_argv:



        if (VAR_14 > 0) {
                int VAR_24;

                if (VAR_15[0]) {
                        size_t VAR_25;

                        VAR_25 = FUNC_10(VAR_15[0]);
                        FUNC_11(VAR_15[0], VAR_16, VAR_25);
                        if (VAR_20 > VAR_25)
                                VAR_19 = 1;
                }

                for (VAR_24 = 1; VAR_24 < VAR_14; VAR_24++) {
                        if (!VAR_15[VAR_24])
                                break;

                        FUNC_6(VAR_15[VAR_24], FUNC_10(VAR_15[VAR_24]));
                }
        }

        return !VAR_19;
}
