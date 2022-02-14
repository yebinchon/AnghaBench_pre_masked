
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_entry {struct gc_entry* next; } ;
struct gc_arena {struct gc_entry* list; } ;
struct buffer {int data; } ;


 struct buffer FUNC_0 (int,struct gc_arena*) ;
 int FUNC_1 (struct gc_entry*) ;
 int FUNC_2 (struct gc_entry*,int ) ;
 int FUNC_3 (struct gc_entry*,int ) ;
 int FUNC_4 (struct buffer*,struct gc_arena*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void **VAR_0)
{
    struct gc_arena VAR_1 = FUNC_6();
    struct buffer VAR_2 = FUNC_0(1024, &VAR_1);
    struct buffer VAR_3 = FUNC_0(1024, &VAR_1);
    struct buffer VAR_4 = FUNC_0(1024, &VAR_1);

    struct gc_entry *VAR_5;

    VAR_5 = VAR_1.list;

    FUNC_2(VAR_5 + 1, VAR_4);
    FUNC_2(VAR_5->next + 1, VAR_3);
    FUNC_2(VAR_5->next->next + 1, VAR_2);

    FUNC_4(&VAR_3, &VAR_1);

    FUNC_1(VAR_1.list);

    while (VAR_5)
    {
        FUNC_3(VAR_5 + 1, VAR_3);
        VAR_5 = VAR_5->next;
    }

    FUNC_5(&VAR_1);
}
