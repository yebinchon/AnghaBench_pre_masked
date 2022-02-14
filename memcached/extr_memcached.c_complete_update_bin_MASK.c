
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef int protocol_binary_response_status ;
struct TYPE_20__ {int size; int used; char* data; struct TYPE_20__* next; } ;
typedef TYPE_4__ item_chunk ;
struct TYPE_21__ {int it_flags; int nbytes; int nkey; } ;
typedef TYPE_5__ item ;
typedef enum store_item_type { ____Placeholder_store_item_type } store_item_type ;
struct TYPE_22__ {int ritem; int const cmd; TYPE_5__* item; int sfd; TYPE_3__* thread; } ;
typedef TYPE_6__ conn ;
struct TYPE_18__ {int mutex; TYPE_1__* slab_stats; } ;
struct TYPE_19__ {TYPE_2__ stats; } ;
struct TYPE_17__ {int set_cmds; } ;



 int VAR_0 ;
 size_t FUNC_0 (TYPE_5__*) ;
 char* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int,int ) ;
 int FUNC_6 (int ,int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int ,int,int ) ;
 int FUNC_8 (int ,int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_5__*,int const,TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*,int ,int *,int ) ;
 int FUNC_15 (TYPE_6__*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_16(conn *VAR_5) {
    protocol_binary_response_status VAR_6 = VAR_1;
    enum store_item_type VAR_7 = 136;
    FUNC_9(VAR_5 != ((void*)0));

    item *VAR_8 = VAR_5->item;

    FUNC_11(&VAR_5->thread->stats.mutex);
    VAR_5->thread->stats.slab_stats[FUNC_0(VAR_8)].set_cmds++;
    FUNC_12(&VAR_5->thread->stats.mutex);



    if ((VAR_8->it_flags & VAR_0) == 0) {
        *(FUNC_1(VAR_8) + VAR_8->nbytes - 2) = '\r';
        *(FUNC_1(VAR_8) + VAR_8->nbytes - 1) = '\n';
    } else {
        FUNC_9(VAR_5->ritem);
        item_chunk *VAR_9 = (item_chunk *) VAR_5->ritem;
        if (VAR_9->size == VAR_9->used)
            VAR_9 = VAR_9->next;
        FUNC_9(VAR_9->size - VAR_9->used >= 2);
        VAR_9->data[VAR_9->used] = '\r';
        VAR_9->data[VAR_9->used + 1] = '\n';
        VAR_9->used += 2;
    }

    VAR_7 = FUNC_13(VAR_8, VAR_5->cmd, VAR_5);
    switch (VAR_7) {
    case 129:

        FUNC_15(VAR_5, ((void*)0), 0, 0, 0);
        break;
    case 138:
        FUNC_14(VAR_5, VAR_2, ((void*)0), 0);
        break;
    case 137:
        FUNC_14(VAR_5, VAR_3, ((void*)0), 0);
        break;
    case 136:
    case 128:
    case 135:
        if (VAR_5->cmd == 134) {
            VAR_6 = VAR_2;
        } else if(VAR_5->cmd == 131) {
            VAR_6 = VAR_3;
        } else {
            VAR_6 = VAR_4;
        }
        FUNC_14(VAR_5, VAR_6, ((void*)0), 0);
    }

    FUNC_10(VAR_5->item);
    VAR_5->item = 0;
}
