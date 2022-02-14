
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int ForkFlags ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int,int,int,int,int) ;
 int FUNC_4 (char const*,int const*,size_t,int,int *) ;
 int FUNC_5 (char const*,int ,int ) ;

int FUNC_6(
                const char *VAR_13,
                const char *VAR_14,
                const int VAR_15[],
                size_t VAR_16,
                ForkFlags VAR_17,
                int VAR_18,
                int VAR_19,
                int VAR_20,
                int VAR_21,
                int VAR_22,
                pid_t *VAR_23) {

        int VAR_24;





        VAR_24 = FUNC_4(VAR_13, VAR_15, VAR_16, (VAR_17|VAR_2) & ~(VAR_7|VAR_5|VAR_4), VAR_23);
        if (VAR_24 < 0)
                return VAR_24;
        if (VAR_24 == 0) {
                pid_t VAR_25;



                VAR_24 = FUNC_3(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
                if (VAR_24 < 0) {
                        FUNC_2(FUNC_0(VAR_17, VAR_3) ? VAR_11 : VAR_10, VAR_24, "Failed to join namespace: %m");
                        FUNC_1(VAR_0);
                }


                VAR_24 = FUNC_4(VAR_14, VAR_15, VAR_16, VAR_17 & ~(VAR_9|VAR_8|VAR_1|VAR_6), &VAR_25);
                if (VAR_24 < 0)
                        FUNC_1(VAR_0);
                if (VAR_24 == 0) {

                        if (VAR_23)
                                *VAR_23 = VAR_25;
                        return 0;
                }

                VAR_24 = FUNC_5(VAR_14, VAR_25, FUNC_0(VAR_17, VAR_3) ? VAR_12 : 0);
                if (VAR_24 < 0)
                        FUNC_1(VAR_0);

                FUNC_1(VAR_24);
        }

        return 1;
}
