
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {size_t count; int * list; } ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_1(struct RangeList *VAR_0, size_t VAR_1)
{
    FUNC_0(&VAR_0->list[VAR_1],
            &VAR_0->list[VAR_1+1],
            (VAR_0->count - VAR_1) * sizeof(VAR_0->list[VAR_1])
            );
    VAR_0->count--;
}
