
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeout {scalar_t__ when; struct timeout* next; int what; int (* func ) (int ) ;} ;
struct protocol {int (* handler ) (struct protocol*) ;struct interface_info* local; struct protocol* next; } ;
struct interface_info {int dead; } ;
typedef scalar_t__ HANDLE ;


 int * VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 () ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int,scalar_t__*,int ,int) ;
 struct timeout* VAR_12 ;
 int FUNC_10 (struct protocol*) ;
 struct protocol* VAR_13 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct protocol*) ;
 int FUNC_13 (scalar_t__*) ;
 struct timeout* VAR_14 ;

void
FUNC_14(HANDLE VAR_15)
{
    int VAR_16, VAR_17;
    struct protocol *VAR_18;
    time_t VAR_19, VAR_20;
    HANDLE VAR_21[3];
    int VAR_22 = 2;

    VAR_21[0] = FUNC_4();
    if (!VAR_21[0])
         return;

    VAR_0 = VAR_21[0];

    VAR_21[1] = VAR_15;
    VAR_21[2] = VAR_11;

    FUNC_0();

    do {




        FUNC_13(&VAR_20);

        if (VAR_14)
        {
            struct timeout *VAR_23;

            if (VAR_14->when <= VAR_20) {
                VAR_23 = VAR_14;
                VAR_14 = VAR_14->next;
                (*(VAR_23->func))(VAR_23->what);
                VAR_23->next = VAR_12;
                VAR_12 = VAR_23;
                continue;
            }







            VAR_19 = VAR_14->when - VAR_20;
            if (VAR_19 > VAR_6 / 1000)
                VAR_19 = VAR_6 / 1000;
            VAR_17 = VAR_19 * 1000;
        }
        else
        {
            VAR_17 = VAR_5;
        }

        if (VAR_21[2] == VAR_11 && VAR_1 != VAR_7)
        {
            VAR_21[2] = FUNC_6();
            if (VAR_21[2] != VAR_11)
            {
                VAR_16 = FUNC_7(VAR_1, VAR_21[2], VAR_4 | VAR_3);
                if (VAR_16 != VAR_9)
                {
                    FUNC_5(VAR_21[2]);
                    VAR_21[2] = VAR_11;
                }
                else
                {
                    VAR_22 = 3;
                }
            }
        }
        else if (VAR_21[2] != VAR_11 && VAR_1 == VAR_7)
        {
            FUNC_5(VAR_21[2]);
            VAR_21[2] = VAR_11;

            VAR_22 = 2;
        }

        FUNC_1();
        VAR_16 = FUNC_9(VAR_22,
                                       VAR_21,
                                       VAR_2,
                                       VAR_17);
        FUNC_0();
        if (VAR_16 == VAR_10)
        {

            continue;
        }
        else if (VAR_16 == VAR_10 + 1)
        {

            break;
        }
        else if (VAR_16 == VAR_10 + 2)
        {



            FUNC_8(VAR_21[2]);
        }
        else
        {

            continue;
        }

        for (VAR_18 = VAR_13; VAR_18; VAR_18 = VAR_18->next) {
            struct interface_info *VAR_24;
            VAR_24 = VAR_18->local;
            if (VAR_24 && (VAR_18->handler != FUNC_10 ||
                        !VAR_24->dead)) {
                FUNC_3(VAR_8,("Handling %x\n", VAR_18));
                (*(VAR_18->handler))(VAR_18);
            }
        }
    } while (1);

    VAR_0 = ((void*)0);
    FUNC_2(VAR_21[0]);
    FUNC_2(VAR_21[1]);
    FUNC_5(VAR_21[2]);

    FUNC_1();
}
