
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int useconds_t ;
struct logger_stats {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ logger ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct logger_stats*) ;
 int FUNC_3 (struct logger_stats*) ;
 int FUNC_4 (struct logger_stats*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void *FUNC_8(void *VAR_6) {
    useconds_t VAR_7 = VAR_1;
    FUNC_0("LOGGER: Starting logger thread\n");


    while (VAR_3) {
        int VAR_8 = 0;
        logger *VAR_9;
        struct logger_stats VAR_10;
        FUNC_4(&VAR_10, 0, sizeof(struct logger_stats));


        if (VAR_7 > VAR_1)
            FUNC_7(VAR_7);


        FUNC_5(&VAR_5);
        for (VAR_9 = VAR_4; VAR_9 != ((void*)0); VAR_9=VAR_9->next) {

            VAR_8 += FUNC_2(VAR_9, &VAR_10);
        }

        FUNC_1(1, VAR_2);
        FUNC_6(&VAR_5);


        if (!VAR_8) {
            if (VAR_7 < VAR_0)
                VAR_7 += VAR_7 / 8;
            if (VAR_7 > VAR_0)
                VAR_7 = VAR_0;
        } else {
            VAR_7 /= 2;
            if (VAR_7 < VAR_1)
                VAR_7 = VAR_1;
        }
        FUNC_3(&VAR_10);
    }

    return ((void*)0);
}
