
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {scalar_t__ list; } ;
struct buffer {int data; } ;


 struct buffer FUNC_0 (int,struct gc_arena*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct buffer*,struct gc_arena*) ;
 int FUNC_4 (struct gc_arena*) ;
 struct gc_arena FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void **VAR_0)
{
    struct gc_arena VAR_1 = FUNC_5();
    struct buffer VAR_2 = FUNC_0(1024, &VAR_1);

    FUNC_2(VAR_1.list + 1, VAR_2.data);
    FUNC_3(&VAR_2, &VAR_1);
    FUNC_1(VAR_1.list);

    FUNC_4(&VAR_1);
}
