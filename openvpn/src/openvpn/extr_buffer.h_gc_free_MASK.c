
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {scalar_t__ list_special; scalar_t__ list; } ;


 int FUNC_0 (struct gc_arena*) ;
 int FUNC_1 (struct gc_arena*) ;

__attribute__((used)) static inline void
FUNC_2(struct gc_arena *VAR_0)
{
    if (VAR_0->list)
    {
        FUNC_0(VAR_0);
    }
    if (VAR_0->list_special)
    {
        FUNC_1(VAR_0);
    }
}
