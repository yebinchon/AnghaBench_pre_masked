
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ m_option_t ;
struct TYPE_5__ {int (* copy ) (TYPE_2__ const*,void*,void const*) ;} ;


 int FUNC_0 (TYPE_2__ const*,void*,void const*) ;

__attribute__((used)) static inline void FUNC_1(const m_option_t *VAR_0, void *VAR_1,
                                 const void *VAR_2)
{
    if (VAR_0->type->copy)
        VAR_0->type->copy(VAR_0, VAR_1, VAR_2);
}
