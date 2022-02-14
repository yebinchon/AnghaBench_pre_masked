
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lavf_priv {TYPE_1__* avif; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4(struct lavf_priv *VAR_0,
                                       const char *VAR_1)
{
    const char *VAR_2 = VAR_0->avif->name;
    while (1) {
        const char *VAR_3 = FUNC_1(VAR_2, ',');
        if (!VAR_3)
            return !FUNC_2(VAR_2, VAR_1);
        int VAR_4 = VAR_3 - VAR_2;
        if (VAR_4 == FUNC_3(VAR_1) && !FUNC_0(VAR_2, VAR_1, VAR_4))
            return 1;
        VAR_2 = VAR_3 + 1;
    }
}
