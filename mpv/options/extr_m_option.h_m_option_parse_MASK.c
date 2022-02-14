
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {int dummy; } ;
struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ m_option_t ;
struct TYPE_5__ {int (* parse ) (struct mp_log*,TYPE_2__ const*,struct bstr,struct bstr,void*) ;} ;


 int FUNC_0 (struct mp_log*,TYPE_2__ const*,struct bstr,struct bstr,void*) ;

__attribute__((used)) static inline int FUNC_1(struct mp_log *VAR_0, const m_option_t *VAR_1,
                                 struct bstr VAR_2, struct bstr VAR_3, void *VAR_4)
{
    return VAR_1->type->parse(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
