
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* string; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;
struct mp_log {int dummy; } ;
typedef int m_option_t ;
typedef int bstr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (struct mp_log*,int const*,int ,int ,void*) ;
 int FUNC_3 (int const*,void*,struct mpv_node*) ;

int FUNC_4(struct mp_log *VAR_1, const m_option_t *VAR_2,
                                const char *VAR_3, void *VAR_4, struct mpv_node *VAR_5)
{
    if (VAR_5->format == VAR_0) {


        bstr VAR_6 = FUNC_0(VAR_3), VAR_7, VAR_8;
        if (FUNC_1(VAR_6, "/", &VAR_7, &VAR_8))
            VAR_6 = VAR_8;
        return FUNC_2(VAR_1, VAR_2, VAR_6, FUNC_0(VAR_5->u.string), VAR_4);
    } else {
        return FUNC_3(VAR_2, VAR_4, VAR_5);
    }
}
