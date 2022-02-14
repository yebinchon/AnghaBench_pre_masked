
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct m_option {int dummy; } ;
struct bstr {int dummy; } ;
struct TYPE_2__ {int (* parse ) (struct mp_log*,struct m_option const*,struct bstr,struct bstr,void*) ;} ;


 scalar_t__ FUNC_0 (struct bstr,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct mp_log*,struct m_option const*,struct bstr,struct bstr,void*) ;

__attribute__((used)) static int FUNC_2(struct mp_log *VAR_1, const struct m_option *VAR_2,
                           struct bstr VAR_3, struct bstr VAR_4, void *VAR_5)
{
    double VAR_6;
    if (FUNC_0(VAR_4, "up") == 0) {
        VAR_6 = +1;
    } else if (FUNC_0(VAR_4, "down") == 0) {
        VAR_6 = -1;
    } else {
        return VAR_0.parse(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    }
    *(double *)VAR_5 = VAR_6;
    return 1;
}
