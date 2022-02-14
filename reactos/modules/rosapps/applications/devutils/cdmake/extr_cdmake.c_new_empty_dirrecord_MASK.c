
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* next_in_path_table; TYPE_1__* next_in_memory; } ;
struct TYPE_6__ {struct TYPE_6__* next_in_path_table; int flags; int date_and_time; struct TYPE_6__* next_in_memory; struct TYPE_6__* first_record; struct TYPE_6__* next_in_directory; scalar_t__ level; struct TYPE_6__* parent; } ;
typedef TYPE_1__* PDIR_RECORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static PDIR_RECORD
FUNC_1(PDIR_RECORD VAR_2, BOOL VAR_3)
{
    PDIR_RECORD VAR_4;
    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    VAR_4->parent = VAR_2;
    VAR_4->level = VAR_2->level + 1;
    VAR_4->next_in_directory = VAR_2->first_record;
    VAR_2->first_record = VAR_4;
    VAR_4->next_in_memory = VAR_1.next_in_memory;
    VAR_1.next_in_memory = VAR_4;
    VAR_4->date_and_time = VAR_2->date_and_time;
    if (VAR_3)
    {
        VAR_4->flags |= VAR_0;
        VAR_4->next_in_path_table = VAR_1.next_in_path_table;
        VAR_1.next_in_path_table = VAR_4;
    }
    return VAR_4;
}
