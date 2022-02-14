
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int WriteStringFileFlags ;
typedef char const FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char,char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (int ,struct timespec*) ;
 char* FUNC_9 (char const*,char*) ;

int FUNC_10(
                FILE *VAR_6,
                const char *VAR_7,
                WriteStringFileFlags VAR_8,
                struct timespec *VAR_9) {

        bool VAR_10;
        int VAR_11;

        FUNC_0(VAR_6);
        FUNC_0(VAR_7);

        if (FUNC_2(VAR_6))
                return -VAR_0;

        VAR_10 = !(VAR_8 & VAR_2) && !FUNC_1(VAR_7, "\n");

        if (VAR_10 && (VAR_8 & VAR_3)) {



                VAR_7 = FUNC_9(VAR_7, "\n");
                VAR_10 = 0;
        }

        if (FUNC_7(VAR_7, VAR_6) == VAR_1)
                return -VAR_5;

        if (VAR_10)
                if (FUNC_6('\n', VAR_6) == VAR_1)
                        return -VAR_5;

        if (VAR_8 & VAR_4)
                VAR_11 = FUNC_4(VAR_6);
        else
                VAR_11 = FUNC_3(VAR_6);
        if (VAR_11 < 0)
                return VAR_11;

        if (VAR_9) {
                struct timespec VAR_12[2] = {*VAR_9, *VAR_9};

                if (FUNC_8(FUNC_5(VAR_6), VAR_12) < 0)
                        return -VAR_5;
        }

        return 0;
}
