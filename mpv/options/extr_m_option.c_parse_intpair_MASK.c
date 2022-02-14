
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {int dummy; } ;
struct bstr {scalar_t__ len; } ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bstr FUNC_1 (struct bstr,int) ;
 int FUNC_2 (struct bstr,char*) ;
 int FUNC_3 (struct bstr,struct bstr*,int) ;
 int FUNC_4 (struct mp_log*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mp_log *VAR_2, const struct m_option *VAR_3,
                         struct bstr VAR_4, struct bstr VAR_5, void *VAR_6)
{
    if (VAR_5.len == 0)
        return VAR_1;

    struct bstr VAR_7 = VAR_5;
    int VAR_8 = -1;
    int VAR_9 = FUNC_3(VAR_7, &VAR_7, 10);
    if (VAR_7.len == VAR_5.len)
        goto bad;
    if (VAR_7.len > 0) {
        if (!FUNC_2(VAR_7, "-"))
            goto bad;
        VAR_7 = FUNC_1(VAR_7, 1);
    }
    if (VAR_7.len > 0)
        VAR_8 = FUNC_3(VAR_7, &VAR_7, 10);
    if (VAR_7.len > 0)
        goto bad;

    if (VAR_6) {
        int *VAR_10 = VAR_6;
        VAR_10[0] = VAR_9;
        VAR_10[1] = VAR_8;
    }

    return 1;

bad:
    FUNC_4(VAR_2, "Invalid integer range "
           "specification for option %.*s: %.*s\n",
           FUNC_0(VAR_4), FUNC_0(VAR_5));
    return VAR_0;
}
