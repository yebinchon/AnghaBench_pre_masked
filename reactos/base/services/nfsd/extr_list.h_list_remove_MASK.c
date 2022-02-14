
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_4__ {TYPE_1__* prev; } ;
struct TYPE_3__ {TYPE_2__* next; } ;


 int FUNC_0 (struct list_entry*) ;
 int FUNC_1 (struct list_entry*) ;

__attribute__((used)) static void FUNC_2(
    struct list_entry *VAR_0)
{
    if (!FUNC_0(VAR_0)) {
        VAR_0->next->prev = VAR_0->prev;
        VAR_0->prev->next = VAR_0->next;
        FUNC_1(VAR_0);
    }
}
