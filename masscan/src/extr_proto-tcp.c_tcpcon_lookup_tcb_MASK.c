
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Control_Block {unsigned int ip_me; unsigned int ip_them; unsigned short port_me; unsigned short port_them; struct TCP_Control_Block* next; } ;
struct TCP_ConnectionTable {unsigned int mask; struct TCP_Control_Block** entries; int entropy; } ;


 int FUNC_0 (struct TCP_Control_Block*,struct TCP_Control_Block*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int,int ) ;

struct TCP_Control_Block *
FUNC_2(
    struct TCP_ConnectionTable *VAR_0,
    unsigned VAR_1, unsigned VAR_2,
    unsigned VAR_3, unsigned VAR_4)
{
    unsigned VAR_5;
    struct TCP_Control_Block VAR_6;
    struct TCP_Control_Block *VAR_7;

    VAR_6.ip_me = VAR_1;
    VAR_6.ip_them = VAR_2;
    VAR_6.port_me = (unsigned short)VAR_3;
    VAR_6.port_them = (unsigned short)VAR_4;

    VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_2, VAR_4, VAR_0->entropy);

    VAR_7 = VAR_0->entries[VAR_5 & VAR_0->mask];
    while (VAR_7 && !FUNC_0(VAR_7, &VAR_6)) {
        VAR_7 = VAR_7->next;
    }

    return VAR_7;
}
