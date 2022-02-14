
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int list; } ;


 scalar_t__ FUNC_0 (struct kprobe*) ;
 scalar_t__ FUNC_1 (struct kprobe*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct kprobe *VAR_0)
{
 return FUNC_0(VAR_0) && FUNC_1(VAR_0) &&
        FUNC_2(&VAR_0->list);
}
