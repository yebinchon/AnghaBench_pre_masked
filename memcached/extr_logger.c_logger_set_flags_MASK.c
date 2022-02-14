
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int eflags; } ;
typedef TYPE_1__ logger_watcher ;
struct TYPE_6__ {int mutex; int eflags; struct TYPE_6__* next; } ;
typedef TYPE_2__ logger ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_2(void) {
    logger *VAR_3 = ((void*)0);
    int VAR_4 = 0;
    uint16_t VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        logger_watcher *VAR_6 = VAR_2[VAR_4];
        if (VAR_6 == ((void*)0))
            continue;

        VAR_5 |= VAR_6->eflags;
    }
    for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3=VAR_3->next) {
        FUNC_0(&VAR_3->mutex);
        VAR_3->eflags = VAR_5;
        FUNC_1(&VAR_3->mutex);
    }
    return;
}
