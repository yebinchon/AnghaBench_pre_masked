
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_file {struct target_file* case_name; struct target_file* normalized_name; struct target_file* target_name; struct target_file* source_name; struct target_file* next; struct target_file* head; struct target_file* child; } ;
struct target_dir_hash {int dummy; } ;
struct target_dir_entry {struct target_dir_entry* case_name; struct target_dir_entry* normalized_name; struct target_dir_entry* target_name; struct target_dir_entry* source_name; struct target_dir_entry* next; struct target_dir_entry* head; struct target_dir_entry* child; } ;


 int FUNC_0 (struct target_dir_hash*,struct target_file*) ;
 int FUNC_1 (struct target_file*) ;

__attribute__((used)) static void
FUNC_2(struct target_dir_hash *VAR_0, struct target_dir_entry *VAR_1)
{
    struct target_file *VAR_2;
    struct target_dir_entry *VAR_3;

    while ((VAR_3 = VAR_1->child))
    {
        VAR_1->child = VAR_3->next;
        FUNC_2(VAR_0, VAR_3);
        FUNC_1(VAR_3);
    }
    while ((VAR_2 = VAR_1->head))
    {
        VAR_1->head = VAR_2->next;
        FUNC_1(VAR_2->source_name);
        FUNC_1(VAR_2->target_name);
        FUNC_1(VAR_2);
    }

    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_1->normalized_name);
    FUNC_1(VAR_1->case_name);
}
