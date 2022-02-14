
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpv_node {int dummy; } ;
struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_2__ m_option_t ;
struct TYPE_5__ {int (* set ) (TYPE_2__ const*,void*,struct mpv_node*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,void*,struct mpv_node*) ;

__attribute__((used)) static inline int FUNC_1(const m_option_t *VAR_1, void *VAR_2,
                                    struct mpv_node *VAR_3)
{
    if (VAR_1->type->set)
        return VAR_1->type->set(VAR_1, VAR_2, VAR_3);
    return VAR_0;
}
