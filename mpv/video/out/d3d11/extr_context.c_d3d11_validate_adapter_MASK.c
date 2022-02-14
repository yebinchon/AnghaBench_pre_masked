
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {int dummy; } ;
struct bstr {int start; int member_0; } ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bstr FUNC_1 (int *) ;
 int FUNC_2 (struct bstr,char*) ;
 int FUNC_3 (struct mp_log*,struct bstr,struct bstr*) ;
 int FUNC_4 (struct mp_log*,char*,int ) ;
 int FUNC_5 (struct mp_log*,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mp_log *VAR_2,
                                  const struct m_option *VAR_3,
                                  struct bstr VAR_4, struct bstr VAR_5)
{
    bool VAR_6 = FUNC_2(VAR_5, "help");
    bool VAR_7 = 0;
    struct bstr VAR_8 = { 0 };

    if (FUNC_2(VAR_5, "")) {
        return 0;
    }

    VAR_7 = FUNC_3(VAR_2,
                                                       VAR_6 ? FUNC_1(((void*)0)) : VAR_5,
                                                       VAR_6 ? &VAR_8 : ((void*)0));

    if (VAR_6) {
        FUNC_5(VAR_2, "Available D3D11 adapters:\n%.*s",
                FUNC_0(VAR_8));
        FUNC_6(VAR_8.start);
        return VAR_0;
    }

    if (!VAR_7) {
        FUNC_4(VAR_2, "No adapter matching '%.*s'!\n", FUNC_0(VAR_5));
    }

    return VAR_7 ? 0 : VAR_1;
}
