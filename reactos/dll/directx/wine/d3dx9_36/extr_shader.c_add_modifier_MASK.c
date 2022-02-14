
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_4, DWORD VAR_5)
{
    char *VAR_6 = VAR_4;
    DWORD VAR_7 = VAR_5 & VAR_3;

    if (VAR_7 & VAR_2)
        VAR_6 += FUNC_0(VAR_6, "_sat");
    if (VAR_7 & VAR_1)
        VAR_6 += FUNC_0(VAR_6, "_pp");
    if (VAR_7 & VAR_0)
        VAR_6 += FUNC_0(VAR_6, "_centroid");

    return VAR_6 - VAR_4;
}
