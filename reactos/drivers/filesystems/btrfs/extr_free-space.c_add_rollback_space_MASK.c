
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_4__ {int * chunk; void* length; void* address; int * list_size; int * list; } ;
typedef TYPE_1__ rollback_space ;
typedef int chunk ;
typedef int LIST_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(LIST_ENTRY* VAR_4, bool VAR_5, LIST_ENTRY* VAR_6, LIST_ENTRY* VAR_7, uint64_t VAR_8, uint64_t VAR_9, chunk* VAR_10) {
    rollback_space* VAR_11;

    VAR_11 = FUNC_1(VAR_1, sizeof(rollback_space), VAR_0);
    if (!VAR_11) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_11->list = VAR_6;
    VAR_11->list_size = VAR_7;
    VAR_11->address = VAR_8;
    VAR_11->length = VAR_9;
    VAR_11->chunk = VAR_10;

    FUNC_2(VAR_4, VAR_5 ? VAR_2 : VAR_3, VAR_11);
}
