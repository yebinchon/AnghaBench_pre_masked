
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mutex; int entry_map; int * buf; } ;
typedef TYPE_1__ logger ;
struct TYPE_9__ {int logger_buf_size; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

logger *FUNC_7(void) {
    FUNC_0("LOGGER: Creating and linking new logger instance\n");
    logger *VAR_3 = FUNC_2(1, sizeof(logger));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->buf = FUNC_1(VAR_2.logger_buf_size);
    if (VAR_3->buf == ((void*)0)) {
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    VAR_3->entry_map = VAR_0;

    FUNC_5(&VAR_3->mutex, ((void*)0));
    FUNC_6(VAR_1, VAR_3);


    FUNC_4(VAR_3);
    return VAR_3;
}
