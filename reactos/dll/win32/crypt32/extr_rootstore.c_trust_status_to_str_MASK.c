
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (char*,int,char*) ;

__attribute__((used)) static const char *FUNC_1(DWORD VAR_18)
{
    static char VAR_19[1024];
    int VAR_20 = 0;

    if (VAR_18 & VAR_11)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\texpired");
    if (VAR_18 & VAR_10)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\tbad time nesting");
    if (VAR_18 & VAR_14)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\trevoked");
    if (VAR_18 & VAR_9)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\tbad signature");
    if (VAR_18 & VAR_12)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\tbad usage");
    if (VAR_18 & VAR_15)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\tuntrusted root");
    if (VAR_18 & VAR_17)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tunknown revocation status");
    if (VAR_18 & VAR_8)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\tcyclic chain");
    if (VAR_18 & VAR_5)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tunsupported critical extension");
    if (VAR_18 & VAR_7)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20, "\n\tbad policy");
    if (VAR_18 & VAR_4)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tbad basic constraints");
    if (VAR_18 & VAR_6)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tbad name constraints");
    if (VAR_18 & VAR_3)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tunsupported name constraint");
    if (VAR_18 & VAR_1)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tundefined name constraint");
    if (VAR_18 & VAR_2)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tdisallowed name constraint");
    if (VAR_18 & VAR_0)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\texcluded name constraint");
    if (VAR_18 & VAR_13)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\trevocation server offline");
    if (VAR_18 & VAR_16)
        VAR_20 += FUNC_0(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "\n\tno issuance policy");
    return VAR_19;
}
