
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TimeoutEntry {scalar_t__ prev; scalar_t__ next; } ;



__attribute__((used)) static inline void
FUNC_0(struct TimeoutEntry *VAR_0)
{
    VAR_0->next = 0;
    VAR_0->prev = 0;
}
