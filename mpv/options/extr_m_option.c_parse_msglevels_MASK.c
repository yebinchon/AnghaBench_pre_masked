
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {int dummy; } ;
typedef int m_option_t ;
struct TYPE_2__ {int (* parse ) (struct mp_log*,int const*,struct bstr,struct bstr,char***) ;int (* free ) (char***) ;int (* copy ) (int const*,void*,char***) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bstr,char*) ;
 int FUNC_1 (struct mp_log*,char**) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct mp_log*,char*) ;
 int FUNC_3 (struct mp_log*,int const*,struct bstr,struct bstr,char***) ;
 int FUNC_4 (int const*,void*,char***) ;
 int FUNC_5 (char***) ;

__attribute__((used)) static int FUNC_6(struct mp_log *VAR_2, const m_option_t *VAR_3,
                           struct bstr VAR_4, struct bstr VAR_5, void *VAR_6)
{
    if (FUNC_0(VAR_5, "help")) {
        FUNC_2(VAR_2, "Syntax:\n\n   --msglevel=module1=level,module2=level,...\n\n"
                     "'module' is output prefix as shown with -v, or a prefix\n"
                     "of it. level is one of:\n\n"
                     "  fatal error warn info status v debug trace\n\n"
                     "The level specifies the minimum log level a message\n"
                     "must have to be printed.\n"
                     "The special module name 'all' affects all modules.\n");
        return VAR_0;
    }

    char **VAR_7 = ((void*)0);
    int VAR_8 = VAR_1.parse(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);
    if (VAR_8 >= 0)
        VAR_8 = FUNC_1(VAR_2, VAR_7);

    if (VAR_8 >= 0)
        VAR_1.copy(VAR_3, VAR_6, &VAR_7);
    VAR_1.free(&VAR_7);
    return VAR_8;
}
