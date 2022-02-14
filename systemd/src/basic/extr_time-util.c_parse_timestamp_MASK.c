
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_5__ {int return_value; int usec; } ;
typedef TYPE_1__ ParseTimestampResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_1__* FUNC_3 (int *,int,int,int,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int *,int) ;
 int FUNC_7 (char*,int,int *) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char*) ;
 char* FUNC_10 (char const*,int) ;
 char* FUNC_11 (char const*,char) ;
 scalar_t__ FUNC_12 (char*,int ) ;
 int * VAR_12 ;
 int FUNC_13 () ;

int FUNC_14(const char *VAR_13, usec_t *VAR_14) {
        char *VAR_15, *VAR_16 = ((void*)0);
        ParseTimestampResult *VAR_17, VAR_18;
        int VAR_19;

        VAR_15 = FUNC_11(VAR_13, ' ');
        if (VAR_15 != ((void*)0) && FUNC_12(VAR_15 + 1, VAR_6))
                VAR_16 = VAR_15 + 1;

        if (!VAR_16 || FUNC_2(VAR_13, " UTC"))
                return FUNC_6(VAR_13, VAR_14, 0);

        VAR_17 = FUNC_3(((void*)0), sizeof *VAR_17, VAR_10|VAR_11, VAR_9|VAR_7, -1, 0);
        if (VAR_17 == VAR_8)
                return FUNC_5();

        VAR_19 = FUNC_7("(sd-timestamp)", VAR_4|VAR_2|VAR_3|VAR_5, ((void*)0));
        if (VAR_19 < 0) {
                (void) FUNC_4(VAR_17, sizeof *VAR_17);
                return VAR_19;
        }
        if (VAR_19 == 0) {
                bool VAR_20 = 1;
                char *VAR_21;


                VAR_21 = FUNC_9(":", VAR_16);

                if (FUNC_8("TZ", VAR_21, 1) != 0) {
                        VAR_17->return_value = FUNC_5();
                        FUNC_1(VAR_0);
                }

                FUNC_13();



                VAR_20 = !FUNC_0(VAR_16, VAR_12[0], VAR_12[1]);


                if (VAR_20)
                        VAR_13 = FUNC_10(VAR_13, VAR_15 - VAR_13);

                VAR_17->return_value = FUNC_6(VAR_13, &VAR_17->usec, VAR_20);

                FUNC_1(VAR_1);
        }

        VAR_18 = *VAR_17;
        if (FUNC_4(VAR_17, sizeof *VAR_17) != 0)
                return FUNC_5();

        if (VAR_18.return_value == 0 && VAR_14)
                *VAR_14 = VAR_18.usec;

        return VAR_18.return_value;
}
