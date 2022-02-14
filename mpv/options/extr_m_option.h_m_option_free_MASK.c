
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* type; } ;
typedef TYPE_2__ m_option_t ;
struct TYPE_4__ {int (* free ) (void*) ;} ;


 int FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(const m_option_t *VAR_0, void *VAR_1)
{
    if (VAR_0->type->free)
        VAR_0->type->free(VAR_1);
}
