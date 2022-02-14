
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_5__ {int list_entry; void* size; void* address; } ;
typedef TYPE_1__ space ;
struct TYPE_6__ {int trim_list; int num_trim_entries; } ;
typedef TYPE_2__ device ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(device* VAR_2, uint64_t VAR_3, uint64_t VAR_4) {
    space* VAR_5 = FUNC_1(VAR_1, sizeof(space), VAR_0);
    if (!VAR_5) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_5->address = VAR_3;
    VAR_5->size = VAR_4;
    VAR_2->num_trim_entries++;

    FUNC_2(&VAR_2->trim_list, &VAR_5->list_entry);
}
