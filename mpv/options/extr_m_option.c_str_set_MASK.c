
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* string; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;
typedef int m_option_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,char**) ;
 int FUNC_1 (int const*,void*,char**) ;

__attribute__((used)) static int FUNC_2(const m_option_t *VAR_3, void *VAR_4, struct mpv_node *VAR_5)
{
    if (VAR_5->format != VAR_0)
        return VAR_2;
    char *VAR_6 = VAR_5->u.string;
    int VAR_7 = VAR_6 ? FUNC_0(VAR_3, &VAR_6) : VAR_1;
    if (VAR_7 >= 0)
        FUNC_1(VAR_3, VAR_4, &VAR_6);
    return VAR_7;
}
