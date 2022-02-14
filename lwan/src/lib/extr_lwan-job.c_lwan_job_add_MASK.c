
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {int (* cb ) (void*) ;int jobs; void* data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int (*) (void*)) ;
 struct job* FUNC_2 (int,int) ;
 int FUNC_3 (struct job*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;

void FUNC_9(bool (*VAR_2)(void *VAR_3), void *VAR_4)
{
    FUNC_1(VAR_2);

    struct job *VAR_5 = FUNC_2(1, sizeof(*VAR_5));
    if (!VAR_5)
        FUNC_5("calloc");

    VAR_5->cb = VAR_2;
    VAR_5->data = VAR_4;

    if (FUNC_0(!FUNC_7(&VAR_1))) {
        FUNC_4(&VAR_0, &VAR_5->jobs);
        FUNC_8(&VAR_1);
    } else {
        FUNC_6("Couldn't lock job mutex");
        FUNC_3(VAR_5);
    }
}
