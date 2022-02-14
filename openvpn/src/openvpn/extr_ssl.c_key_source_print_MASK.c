
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_source {scalar_t__ random2; scalar_t__ random1; scalar_t__ pre_master; } ;
struct gc_arena {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (scalar_t__,int,int ,struct gc_arena*) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(const struct key_source *VAR_1,
                 const char *VAR_2)
{
    struct gc_arena VAR_3 = FUNC_4();

    FUNC_0((void *)VAR_1->pre_master, sizeof(VAR_1->pre_master));
    FUNC_0((void *)VAR_1->random1, sizeof(VAR_1->random1));
    FUNC_0((void *)VAR_1->random2, sizeof(VAR_1->random2));

    FUNC_1(VAR_0,
         "%s pre_master: %s",
         VAR_2,
         FUNC_2(VAR_1->pre_master, sizeof(VAR_1->pre_master), 0, &VAR_3));
    FUNC_1(VAR_0,
         "%s random1: %s",
         VAR_2,
         FUNC_2(VAR_1->random1, sizeof(VAR_1->random1), 0, &VAR_3));
    FUNC_1(VAR_0,
         "%s random2: %s",
         VAR_2,
         FUNC_2(VAR_1->random2, sizeof(VAR_1->random2), 0, &VAR_3));

    FUNC_3(&VAR_3);
}
