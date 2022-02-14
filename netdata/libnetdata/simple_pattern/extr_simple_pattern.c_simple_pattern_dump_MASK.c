
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct simple_pattern {int * next; int * child; int match; int mode; } ;
typedef int SIMPLE_PATTERN ;


 int FUNC_0 (int ,char*,...) ;

extern void FUNC_1(uint64_t VAR_0, SIMPLE_PATTERN *VAR_1)
{
    struct simple_pattern *VAR_2 = (struct simple_pattern *)VAR_1;
    if(VAR_2==((void*)0)) {
        FUNC_0(VAR_0,"dump_pattern(NULL)");
        return;
    }
    FUNC_0(VAR_0,"dump_pattern(%p) child=%p next=%p mode=%d match=%s", VAR_2, VAR_2->child, VAR_2->next, VAR_2->mode,
          VAR_2->match);
    if(VAR_2->child!=((void*)0))
        FUNC_1(VAR_0, (SIMPLE_PATTERN*)VAR_2->child);
    if(VAR_2->next!=((void*)0))
        FUNC_1(VAR_0, (SIMPLE_PATTERN*)VAR_2->next);
}
