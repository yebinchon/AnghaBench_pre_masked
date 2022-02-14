
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_weak_ref {int weak_refs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_weak_ref *VAR_0)
{
 return FUNC_0(&VAR_0->weak_refs) == -1;
}
