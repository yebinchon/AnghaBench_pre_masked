
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* type; } ;
typedef TYPE_2__ m_option_t ;
struct TYPE_6__ {char* (* pretty_print ) (TYPE_2__ const*,void const*) ;} ;


 char* FUNC_0 (TYPE_2__ const*,void const*) ;
 char* FUNC_1 (TYPE_2__ const*,void const*) ;

__attribute__((used)) static inline char *FUNC_2(const m_option_t *VAR_0,
                                          const void *VAR_1)
{
    if (VAR_0->type->pretty_print)
        return VAR_0->type->pretty_print(VAR_0, VAR_1);
    else
        return FUNC_0(VAR_0, VAR_1);
}
