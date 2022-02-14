
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_file {char* target_name; void* source_name; struct target_file* next; } ;
struct target_dir_hash {int dummy; } ;
struct target_dir_entry {struct target_file* head; } ;


 struct target_file* FUNC_0 (int,int) ;
 struct target_dir_entry* FUNC_1 (struct target_dir_hash*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char**,char**) ;
 void* FUNC_5 (char const*) ;

struct target_file *
FUNC_6(struct target_dir_hash *VAR_0, const char *VAR_1, const char *VAR_2)
{
    struct target_file *VAR_3;
    struct target_dir_entry *VAR_4;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    char *VAR_7;


    FUNC_4(VAR_2, &VAR_5, &VAR_6);
    if (!*VAR_6)
    {
        FUNC_2(VAR_5);
        FUNC_2(VAR_6);
        return ((void*)0);
    }
    VAR_7 = FUNC_5(VAR_5);
    FUNC_3(VAR_7);
    VAR_4 = FUNC_1(VAR_0, VAR_5, VAR_7);
    FUNC_2(VAR_7);
    FUNC_2(VAR_5);


    VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    VAR_3->next = VAR_4->head;
    VAR_4->head = VAR_3;
    VAR_3->source_name = FUNC_5(VAR_1);
    VAR_3->target_name = VAR_6;

    return VAR_3;
}
