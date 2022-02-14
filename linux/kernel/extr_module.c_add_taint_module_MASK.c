
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int taints; } ;
typedef enum lockdep_ok { ____Placeholder_lockdep_ok } lockdep_ok ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct module *VAR_0, unsigned VAR_1,
        enum lockdep_ok VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, &VAR_0->taints);
}
