
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char **VAR_0) {
    const char *VAR_1 = *VAR_0;

    if (!(FUNC_0(VAR_1)))
        return(1);
    if (!FUNC_0(VAR_1+1))
 VAR_1++;
    else if ((*VAR_1 != '0') && (FUNC_0(VAR_1 + 1)) && (!FUNC_0(VAR_1+2)))
 VAR_1 += 2;
    else if ((*VAR_1 == '1') && (FUNC_0(VAR_1 + 1)) && (FUNC_0(VAR_1 + 2)))
 VAR_1 += 3;
    else if ((*VAR_1 == '2') && (*(VAR_1 + 1) >= '0') &&
      (*(VAR_1 + 1) <= '4') && (FUNC_0(VAR_1 + 2)))
 VAR_1 += 3;
    else if ((*VAR_1 == '2') && (*(VAR_1 + 1) == '5') &&
      (*(VAR_1 + 2) >= '0') && (*(VAR_1 + 1) <= '5'))
 VAR_1 += 3;
    else
        return(1);
    *VAR_0 = VAR_1;
    return(0);
}
