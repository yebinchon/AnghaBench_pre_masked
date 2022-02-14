
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;
struct filter_kernel {TYPE_1__ f; int polar; } ;


 char** VAR_0 ;
 char** VAR_1 ;
 struct filter_kernel* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const* const,char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_2, bool VAR_3)
{
    if (VAR_2 && VAR_2[0]) {
        const struct filter_kernel *VAR_4 = FUNC_0(VAR_2);
        if (VAR_4 && (!VAR_3 || !VAR_4->polar))
                return VAR_4->f.name;

        for (const char *const *VAR_5 = VAR_3 ? VAR_1
                                                : VAR_0;
             *VAR_5; VAR_5++) {
            if (FUNC_1(*VAR_5, VAR_2) == 0)
                return *VAR_5;
        }
    }
    return ((void*)0);
}
