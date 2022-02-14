
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {scalar_t__ pid; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct machine *VAR_1)
{
 return VAR_1 ? VAR_1->pid == VAR_0 : 0;
}
