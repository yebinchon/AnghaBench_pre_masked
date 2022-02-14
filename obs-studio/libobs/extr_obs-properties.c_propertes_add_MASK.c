
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {struct obs_property* next; } ;
struct obs_properties {struct obs_property** last; } ;



__attribute__((used)) static inline void FUNC_0(struct obs_properties *VAR_0,
     struct obs_property *VAR_1)
{
 *VAR_0->last = VAR_1;
 VAR_0->last = &VAR_1->next;
}
