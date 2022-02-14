
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int app_proto; } ;
struct TCP_Control_Block {int ip_them; struct TCP_Control_Block* next; scalar_t__ port_me; scalar_t__ ip_me; scalar_t__ port_them; int timeout; TYPE_1__ banner1_state; scalar_t__ scripting_thread; scalar_t__ payload; scalar_t__ payload_length; scalar_t__ is_payload_dynamic; int seqno_them; } ;
struct TCP_ConnectionTable {unsigned int mask; int active_count; struct TCP_Control_Block* freed_list; struct TCP_Control_Block** entries; int entropy; } ;
typedef enum DestroyReason { ____Placeholder_DestroyReason } DestroyReason ;
struct TYPE_4__ {int (* cleanup ) (TYPE_1__*) ;} ;


 int FUNC_0 (int,char*,int,int,int,int,scalar_t__,int ) ;

 int FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*) ;
 unsigned int FUNC_4 (scalar_t__,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_5 (struct TCP_ConnectionTable*,struct TCP_Control_Block*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(
    struct TCP_ConnectionTable *VAR_1,
    struct TCP_Control_Block *VAR_2,
    enum DestroyReason VAR_3)
{
    unsigned VAR_4;
    struct TCP_Control_Block **VAR_5;

    FUNC_1(VAR_3);





    VAR_4 = FUNC_4( VAR_2->ip_me, VAR_2->port_me,
                        VAR_2->ip_them, VAR_2->port_them,
                        VAR_1->entropy);





    VAR_5 = &VAR_1->entries[VAR_4 & VAR_1->mask];
    while (*VAR_5 && *VAR_5 != VAR_2)
        VAR_5 = &(*VAR_5)->next;

    if (*VAR_5 == ((void*)0)) {



        FUNC_0(1, "tcb: double free: %u.%u.%u.%u : %u (0x%x)\n",
                (VAR_2->ip_them>>24)&0xFF,
                (VAR_2->ip_them>>16)&0xFF,
                (VAR_2->ip_them>> 8)&0xFF,
                (VAR_2->ip_them>> 0)&0xFF,
                VAR_2->port_them,
                VAR_2->seqno_them
                );
        return;
    }






    FUNC_5(VAR_1, VAR_2);
    if (VAR_2->is_payload_dynamic && VAR_2->payload_length && VAR_2->payload)
        FUNC_2((void*)VAR_2->payload);

    if (VAR_2->scripting_thread)
        ;
    VAR_2->scripting_thread = 0;


    switch (VAR_2->banner1_state.app_proto) {
        case 128:
            VAR_0(&VAR_2->banner1_state);
            break;
    }




    FUNC_6(VAR_2->timeout);

    VAR_2->ip_them = 0;
    VAR_2->port_them = 0;
    VAR_2->ip_me = 0;
    VAR_2->port_me = 0;

    (*VAR_5) = VAR_2->next;
    VAR_2->next = VAR_1->freed_list;
    VAR_1->freed_list = VAR_2;
    VAR_1->active_count--;
}
