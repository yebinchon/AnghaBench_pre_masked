
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TimeoutEntry {scalar_t__ timestamp; TYPE_1__** prev; TYPE_1__* next; } ;
struct TYPE_2__ {struct TYPE_2__** prev; } ;



__attribute__((used)) static inline void
FUNC_0(struct TimeoutEntry *VAR_0)
{
    if (VAR_0->prev == 0 && VAR_0->next == 0)
        return;
    *(VAR_0->prev) = VAR_0->next;
    if (VAR_0->next)
        VAR_0->next->prev = VAR_0->prev;
    VAR_0->next = 0;
    VAR_0->prev = 0;
    VAR_0->timestamp = 0;
}
