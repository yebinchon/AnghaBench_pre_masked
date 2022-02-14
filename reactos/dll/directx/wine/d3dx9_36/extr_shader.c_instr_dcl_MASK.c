
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instr_info {int dummy; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ,int ) ;
 char** VAR_9 ;
 int FUNC_2 (char*,char*,...) ;
 char** VAR_10 ;

__attribute__((used)) static int FUNC_3(const struct instr_info *VAR_11, DWORD **VAR_12, char *VAR_13, BOOL VAR_14)
{
    DWORD VAR_15 = *++*VAR_12;
    DWORD VAR_16 = *++*VAR_12;
    DWORD VAR_17 = (VAR_15 & VAR_3) >> VAR_4;
    DWORD VAR_18 = (VAR_15 & VAR_1) >> VAR_2;
    char *VAR_19 = VAR_13;

    VAR_19 += FUNC_2(VAR_19, "    dcl");
    if (VAR_14)
    {
        if (VAR_15 & VAR_5)
            VAR_19 += FUNC_2(VAR_19, "_%s", (VAR_17 <= VAR_7) ?
                VAR_10[(VAR_15 & VAR_5) >> VAR_6] : "???");
    }
    else
    {
        VAR_19 += FUNC_2(VAR_19, "_%s", (VAR_17 <= VAR_0) ? VAR_9[VAR_17] : "???");
        if (VAR_18)
            VAR_19 += FUNC_2(VAR_19, "%d", VAR_18);
    }

    VAR_19 += FUNC_0(VAR_19, VAR_16);
    VAR_19 += FUNC_2(VAR_19, " ");
    VAR_19 += FUNC_1(VAR_19, VAR_16, VAR_8, VAR_8);
    VAR_19 += FUNC_2(VAR_19, "\n");
    (*VAR_12)++;
    return VAR_19 - VAR_13;
}
