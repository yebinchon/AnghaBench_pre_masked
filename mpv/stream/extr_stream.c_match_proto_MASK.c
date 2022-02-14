
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_0, const char *VAR_1)
{
    int VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 > 0) {
        if (FUNC_3(VAR_0, VAR_1, VAR_2) == 0 && FUNC_4("://", VAR_0 + VAR_2, 3) == 0)
            return VAR_0 + VAR_2 + 3;
    } else if (!FUNC_1(FUNC_0(VAR_0))) {
        return VAR_0;
    }
    return ((void*)0);
}
