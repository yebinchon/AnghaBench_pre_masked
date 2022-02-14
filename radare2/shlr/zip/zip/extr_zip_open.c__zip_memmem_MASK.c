
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const,size_t) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static unsigned char *
FUNC_2(const unsigned char *VAR_0, size_t VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
    const unsigned char *VAR_4;

    if ((VAR_1 < VAR_3) || (VAR_3 == 0))
 return ((void*)0);
    VAR_4 = VAR_0-1;
    while ((VAR_4=(const unsigned char *)
         FUNC_0(VAR_4+1, VAR_2[0], (size_t)(VAR_0-(VAR_4+1))+(size_t)(VAR_1-VAR_3)+1)) != ((void*)0)) {
 if (FUNC_1(VAR_4+1, VAR_2+1, VAR_3-1)==0)
     return (unsigned char *)VAR_4;
    }

    return ((void*)0);
}
