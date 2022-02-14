
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_size; int st_mtime; int st_mode; } ;
struct dirent {char* d_name; scalar_t__ d_type; } ;
struct TYPE_8__ {TYPE_1__* next_in_memory; } ;
struct TYPE_7__ {struct TYPE_7__* first_record; struct TYPE_7__* next_in_directory; int joliet_size; int size; int flags; int date_and_time; struct TYPE_7__* parent; struct TYPE_7__* next_in_memory; } ;
typedef TYPE_1__* PDIR_RECORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,TYPE_1__*,int) ;
 TYPE_2__ VAR_2 ;

PDIR_RECORD
FUNC_5(struct dirent *VAR_3,
                     struct stat *VAR_4,
                     PDIR_RECORD VAR_5)
{
    PDIR_RECORD VAR_6;

    VAR_6 = FUNC_1(1, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0))
        FUNC_3("Insufficient memory");
    VAR_6->next_in_memory = VAR_2.next_in_memory;
    VAR_2.next_in_memory = VAR_6;



    VAR_6->parent = VAR_5;



    FUNC_4(VAR_3->d_name, VAR_6, FUNC_0(VAR_4->st_mode));


    FUNC_2(&VAR_6->date_and_time, &VAR_4->st_mtime);
    VAR_6->flags |= VAR_3->d_name[0] == '.' ? VAR_1 : 0;
    VAR_6->size = VAR_6->joliet_size = VAR_4->st_size;
    VAR_6->next_in_directory = VAR_5->first_record;
    VAR_5->first_record = VAR_6;
    return VAR_6;
}
