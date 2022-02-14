
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct mpv_handle {int dummy; } ;
struct TYPE_9__ {char* start; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__*) ;
 TYPE_1__ FUNC_1 (int *,TYPE_1__) ;
 char* FUNC_2 (void*,TYPE_1__) ;
 char* FUNC_3 (struct mpv_handle*,void*,char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (void*,char*) ;
 char* FUNC_8 (struct mpv_handle*,void*,char*) ;

char *FUNC_9(struct mpv_handle *VAR_0, void *VAR_1, bstr *VAR_2)
{
    void *VAR_3 = FUNC_6(((void*)0));

    bstr VAR_4;
    bstr VAR_5 = FUNC_0(*VAR_2, &VAR_4);
    char *VAR_6 = FUNC_2(VAR_3, VAR_5);
    FUNC_7(VAR_3, VAR_2->start);
    *VAR_2 = FUNC_1(((void*)0), VAR_4);

    FUNC_4(&VAR_6);

    char *VAR_7 = ((void*)0);
    if (VAR_6[0] == '\0' || VAR_6[0] == '#') {

    } else if (VAR_6[0] == '{') {
        VAR_7 = FUNC_3(VAR_0, VAR_3, VAR_6);
    } else {
        VAR_7 = FUNC_8(VAR_0, VAR_3, VAR_6);
    }

    FUNC_7(VAR_1, VAR_7);
    FUNC_5(VAR_3);
    return VAR_7;
}
