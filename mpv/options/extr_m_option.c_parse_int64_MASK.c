
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct bstr {int dummy; } ;
typedef int m_option_t ;
typedef long long int64_t ;


 int FUNC_0 (struct mp_log*,int const*,struct bstr,struct bstr,long long*) ;

__attribute__((used)) static int FUNC_1(struct mp_log *VAR_0, const m_option_t *VAR_1,
                       struct bstr VAR_2, struct bstr VAR_3, void *VAR_4)
{
    long long VAR_5;
    int VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
    if (VAR_6 >= 0 && VAR_4)
        *(int64_t *)VAR_4 = VAR_5;
    return VAR_6;
}
