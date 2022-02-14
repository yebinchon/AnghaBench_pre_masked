
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct cookie_list_type {struct cookie_list_type* next; scalar_t__ secure; int domain; int path; int value; int name; } ;


 struct cookie_list_type* FUNC_0 (void*,struct mp_log*,char*) ;
 char* FUNC_1 (char*,char*,int ,int ,int ,int ,char*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *) ;
 char* FUNC_4 (void*,char*) ;

char *FUNC_5(void *VAR_0, struct mp_log *VAR_1, char *VAR_2)
{
    void *VAR_3 = FUNC_3(((void*)0));
    struct cookie_list_type *VAR_4 = ((void*)0);
    if (VAR_2 && VAR_2[0])
        VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);

    char *VAR_5 = FUNC_4(VAR_0, "");

    while (VAR_4) {
        VAR_5 = FUNC_1(VAR_5,
                    "%s=%s; path=%s; domain=%s; %s\n", VAR_4->name, VAR_4->value,
                    VAR_4->path, VAR_4->domain, VAR_4->secure ? "secure" : "");
        VAR_4 = VAR_4->next;
    }

    FUNC_2(VAR_3);
    return VAR_5;
}
