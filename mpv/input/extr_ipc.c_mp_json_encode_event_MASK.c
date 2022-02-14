
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * list; } ;
struct TYPE_6__ {TYPE_1__ u; int format; } ;
typedef TYPE_2__ mpv_node ;
typedef int mpv_event ;


 int VAR_0 ;
 int FUNC_0 (char**,TYPE_2__*) ;
 int FUNC_1 (void*,int *,TYPE_2__*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*) ;

char *FUNC_6(mpv_event *VAR_1)
{
    void *VAR_2 = FUNC_4(((void*)0));
    mpv_node VAR_3 = {.format = VAR_0, .u.list = ((void*)0)};

    FUNC_1(VAR_2, VAR_1, &VAR_3);

    char *VAR_4 = FUNC_5(((void*)0), "");
    FUNC_0(&VAR_4, &VAR_3);
    VAR_4 = FUNC_2(VAR_4, "\n");

    FUNC_3(VAR_2);

    return VAR_4;
}
