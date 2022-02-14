
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct CEvent {void* data; int id; } ;
struct TYPE_3__ {int mutex; int * pipefd; } ;
typedef TYPE_1__ CEventManager ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__) ;

void
FUNC_4 (CEventManager *VAR_1, uint32_t VAR_2,
                          void *VAR_3)
{
    FUNC_1 (&VAR_1->mutex);

    struct CEvent VAR_4;
    char *VAR_5 = (char *) &VAR_4;

    VAR_4.id = VAR_2;
    VAR_4.data = VAR_3;
    if (FUNC_3(VAR_1->pipefd[1], VAR_5, VAR_0) != VAR_0) {
        FUNC_0 ("add event error\n");
    }

    FUNC_2 (&VAR_1->mutex);
}
