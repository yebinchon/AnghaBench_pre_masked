
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
typedef int RemoveFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ,int,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int) ;
 int VAR_20 ;
 scalar_t__ FUNC_5 (struct statfs*) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (char const*,int) ;
 scalar_t__ FUNC_8 (char const*,char*,int ) ;
 int FUNC_9 (int,int ,int *) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,struct statfs*) ;
 scalar_t__ FUNC_12 (char const*) ;

int FUNC_13(const char *VAR_21, RemoveFlags VAR_22) {
        int VAR_23, VAR_24;
        struct statfs VAR_25;

        FUNC_3(VAR_21);



        if (FUNC_0(VAR_22, VAR_16|VAR_19))
                return -VAR_3;



        if (FUNC_8(VAR_21, "/", VAR_0))
                return FUNC_6(FUNC_2(VAR_8),
                                       "Attempted to remove entire root file system (\"%s\"), and we can't allow that.",
                                       VAR_21);

        if (FUNC_0(VAR_22, VAR_19 | VAR_18 | VAR_17)) {

                VAR_24 = FUNC_4(VAR_21, VAR_2|VAR_1);
                if (VAR_24 >= 0)
                        return VAR_24;

                if (FUNC_0(VAR_22, VAR_15) && VAR_24 == -VAR_5)
                        return 0;

                if (!FUNC_1(VAR_24, -VAR_7, -VAR_3, -VAR_6))
                        return VAR_24;


        }

        VAR_23 = FUNC_7(VAR_21, VAR_14|VAR_13|VAR_10|VAR_9|VAR_12|VAR_11);
        if (VAR_23 < 0) {
                if (FUNC_0(VAR_22, VAR_15) && VAR_20 == VAR_5)
                        return 0;

                if (!FUNC_1(VAR_20, VAR_6, VAR_4))
                        return -VAR_20;

                if (FUNC_0(VAR_22, VAR_16))
                        return 0;

                if (FUNC_0(VAR_22, VAR_18)) {

                        if (!FUNC_0(VAR_22, VAR_17)) {
                                if (FUNC_11(VAR_21, &VAR_25) < 0)
                                        return -VAR_20;

                                if (FUNC_5(&VAR_25))
                                        return FUNC_6(FUNC_2(VAR_8),
                                                               "Attempted to remove files from a disk file system under \"%s\", refusing.",
                                                               VAR_21);
                        }

                        if (FUNC_12(VAR_21) < 0) {
                                if (FUNC_0(VAR_22, VAR_15) && VAR_20 == VAR_5)
                                        return 0;

                                return -VAR_20;
                        }
                }

                return 0;
        }

        VAR_24 = FUNC_9(VAR_23, VAR_22, ((void*)0));

        if (FUNC_0(VAR_22, VAR_18) &&
            FUNC_10(VAR_21) < 0 &&
            VAR_24 >= 0 &&
            (!FUNC_0(VAR_22, VAR_15) || VAR_20 != VAR_5))
                VAR_24 = -VAR_20;

        return VAR_24;
}
