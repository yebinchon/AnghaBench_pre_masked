
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_dir_entry {char* case_name; size_t hashcode; struct target_dir_entry* next_dir_hash_entry; struct target_dir_entry* child; struct target_dir_entry* next; void* normalized_name; struct target_dir_entry* parent; } ;
struct target_dir_hash {struct target_dir_entry** buckets; struct target_dir_entry root; } ;


 size_t VAR_0 ;
 struct target_dir_entry* FUNC_0 (int,int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 struct target_dir_entry* FUNC_3 (struct target_dir_hash*,char const*) ;
 int FUNC_4 (char const*,char**,char**) ;
 void* FUNC_5 (char const*) ;

struct target_dir_entry *
FUNC_6(struct target_dir_hash *VAR_1, const char *VAR_2, const char *VAR_3)
{
    struct target_dir_entry *VAR_4, *VAR_5;
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    struct target_dir_entry **VAR_9;

    if (!VAR_1->root.normalized_name)
    {
        VAR_1->root.normalized_name = FUNC_5("");
        VAR_1->root.case_name = FUNC_5("");
        VAR_1->root.hashcode = FUNC_1("");
        VAR_1->buckets[VAR_1->root.hashcode % VAR_0] = &VAR_1->root;
    }


    VAR_4 = FUNC_3(VAR_1, VAR_3);
    if (VAR_4)
        return VAR_4;
    FUNC_4(VAR_2, &VAR_6, &VAR_7);
    FUNC_4(VAR_3, &VAR_8, ((void*)0));
    VAR_5 = FUNC_6(VAR_1, VAR_6, VAR_8);
    FUNC_2(VAR_8);
    FUNC_2(VAR_6);


    if (!*VAR_7)
    {
        FUNC_2(VAR_7);
        return VAR_5;
    }


    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    VAR_4->parent = VAR_5;
    VAR_4->normalized_name = FUNC_5(VAR_3);
    VAR_4->case_name = VAR_7;
    VAR_4->hashcode = FUNC_1(VAR_3);

    VAR_4->next = VAR_5->child;
    VAR_5->child = VAR_4;

    VAR_9 = &VAR_1->buckets[VAR_4->hashcode % VAR_0];
    while (*VAR_9)
        VAR_9 = &(*VAR_9)->next_dir_hash_entry;
    *VAR_9 = VAR_4;

    return VAR_4;
}
