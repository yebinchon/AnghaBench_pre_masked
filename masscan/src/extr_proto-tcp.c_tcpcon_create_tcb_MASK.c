
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short port; } ;
struct TCP_Control_Block {unsigned int ip_me; unsigned int ip_them; unsigned short port_me; unsigned short port_them; unsigned int seqno_me; unsigned int seqno_them; unsigned int ackno_me; unsigned int ackno_them; unsigned char ttl; int banout; int timeout; TYPE_1__ banner1_state; int when_created; struct TCP_Control_Block* next; } ;
struct TCP_ConnectionTable {unsigned int mask; int active_count; struct TCP_Control_Block** entries; struct TCP_Control_Block* freed_list; int entropy; } ;


 int FUNC_0 (struct TCP_Control_Block*,struct TCP_Control_Block*) ;
 struct TCP_Control_Block* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct TCP_Control_Block*,struct TCP_Control_Block*,int) ;
 int FUNC_4 (struct TCP_Control_Block*,int ,int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_6 (int ) ;

struct TCP_Control_Block *
FUNC_7(
    struct TCP_ConnectionTable *VAR_1,
    unsigned VAR_2, unsigned VAR_3,
    unsigned VAR_4, unsigned VAR_5,
    unsigned VAR_6, unsigned VAR_7,
    unsigned VAR_8)
{
    unsigned VAR_9;
    struct TCP_Control_Block VAR_10;
    struct TCP_Control_Block *VAR_11;

    VAR_10.ip_me = VAR_2;
    VAR_10.ip_them = VAR_3;
    VAR_10.port_me = (unsigned short)VAR_4;
    VAR_10.port_them = (unsigned short)VAR_5;

    VAR_9 = FUNC_5(VAR_2, VAR_4, VAR_3, VAR_5, VAR_1->entropy);
    VAR_11 = VAR_1->entries[VAR_9 & VAR_1->mask];
    while (VAR_11 && !FUNC_0(VAR_11, &VAR_10)) {
        VAR_11 = VAR_11->next;
    }
    if (VAR_11 == ((void*)0)) {
        if (VAR_1->freed_list) {
            VAR_11 = VAR_1->freed_list;
            VAR_1->freed_list = VAR_11->next;
        } else {
            VAR_11 = FUNC_1(sizeof(*VAR_11));
        }
        FUNC_4(VAR_11, 0, sizeof(*VAR_11));
        VAR_11->next = VAR_1->entries[VAR_9 & VAR_1->mask];
        VAR_1->entries[VAR_9 & VAR_1->mask] = VAR_11;
        FUNC_3(VAR_11, &VAR_10, 12);
        VAR_11->seqno_me = VAR_6;
        VAR_11->seqno_them = VAR_7;
        VAR_11->ackno_me = VAR_7;
        VAR_11->ackno_them = VAR_6;
        VAR_11->when_created = VAR_0;
        VAR_11->banner1_state.port = VAR_10.port_them;
        VAR_11->ttl = (unsigned char)VAR_8;

        FUNC_6(VAR_11->timeout);
        FUNC_2(&VAR_11->banout);

        VAR_1->active_count++;
    }

    return VAR_11;
}
