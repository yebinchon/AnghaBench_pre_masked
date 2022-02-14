
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_node {int dummy; } ;
typedef int m_option_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int*,struct mpv_node*) ;

__attribute__((used)) static int FUNC_1(const m_option_t *VAR_3, void *VAR_4, struct mpv_node *VAR_5)
{
    int64_t VAR_6;
    int VAR_7 = FUNC_0(VAR_3, &VAR_6, VAR_5);
    if (VAR_7 >= 0) {
        if (VAR_6 < VAR_1 || VAR_6 > VAR_0)
            return VAR_2;
        *(int *)VAR_4 = VAR_6;
    }
    return VAR_7;
}
