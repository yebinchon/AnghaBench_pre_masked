
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (int *,char const*,int,char*,char const*,char const*,char*,char const*,int ,char const*,int ) ;

int FUNC_3(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3,
                 const char *VAR_4, const char *VAR_5, size_t VAR_6)
{
    if ((VAR_4 == ((void*)0)) ^ (VAR_5 == ((void*)0)))
      return 1;
    if (VAR_4 == ((void*)0) || FUNC_1(VAR_4, VAR_5, VAR_6) == 0) {
        FUNC_2(((void*)0), VAR_0, VAR_1, "string", VAR_2, VAR_3, "!=",
                                 VAR_4, VAR_4 == ((void*)0) ? 0 : FUNC_0(VAR_4, VAR_6),
                                 VAR_5, VAR_5 == ((void*)0) ? 0 : FUNC_0(VAR_5, VAR_6));
        return 0;
    }
    return 1;
}
