
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct cookie_list_type {int secure; struct cookie_list_type* next; void* domain; void* path; void* value; void* name; } ;
typedef int int64_t ;


 void* FUNC_0 (struct cookie_list_type*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct mp_log*,char const*,int *) ;
 scalar_t__ FUNC_3 (char**,char**) ;
 struct cookie_list_type* FUNC_4 (void*,int ) ;

__attribute__((used)) static struct cookie_list_type *FUNC_5(void *VAR_1,
                                                  struct mp_log *VAR_2,
                                                  const char *VAR_3)
{
    char *VAR_4, *VAR_5;
    int64_t VAR_6;

    VAR_4 = VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_6);
    if (!VAR_4)
        return ((void*)0);

    struct cookie_list_type *VAR_7 = ((void*)0);
    while (*VAR_4) {
        char *VAR_8[7];
        if (FUNC_3(&VAR_4, VAR_8)) {
            struct cookie_list_type *VAR_9;
            VAR_9 = FUNC_4(VAR_1, VAR_0);
            VAR_9->name = FUNC_0(VAR_9, VAR_8[5]);
            VAR_9->value = FUNC_0(VAR_9, VAR_8[6]);
            VAR_9->path = FUNC_0(VAR_9, VAR_8[2]);
            VAR_9->domain = FUNC_0(VAR_9, VAR_8[0]);
            VAR_9->secure = (*(VAR_8[3]) == 't') || (*(VAR_8[3]) == 'T');
            VAR_9->next = VAR_7;
            VAR_7 = VAR_9;
        }
    }
    FUNC_1(VAR_5);
    return VAR_7;
}
