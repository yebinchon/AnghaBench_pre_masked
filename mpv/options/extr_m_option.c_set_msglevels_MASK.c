
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_node {int dummy; } ;
typedef int m_option_t ;
struct TYPE_2__ {int (* set ) (int const*,char***,struct mpv_node*) ;int (* free ) (char***) ;int (* copy ) (int const*,void*,char***) ;} ;


 int FUNC_0 (int ,char**) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,char***,struct mpv_node*) ;
 int FUNC_2 (int const*,void*,char***) ;
 int FUNC_3 (char***) ;

__attribute__((used)) static int FUNC_4(const m_option_t *VAR_2, void *VAR_3,
                             struct mpv_node *VAR_4)
{
    char **VAR_5 = ((void*)0);
    int VAR_6 = VAR_0.set(VAR_2, &VAR_5, VAR_4);
    if (VAR_6 >= 0)
        VAR_6 = FUNC_0(VAR_1, VAR_5);

    if (VAR_6 >= 0)
        VAR_0.copy(VAR_2, VAR_3, &VAR_5);
    VAR_0.free(&VAR_5);
    return VAR_6;
}
