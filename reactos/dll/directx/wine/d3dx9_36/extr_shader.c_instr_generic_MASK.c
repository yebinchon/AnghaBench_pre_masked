
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instr_info {char* name; int length; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(const struct instr_info *VAR_5, DWORD **VAR_6, char *VAR_7, BOOL VAR_8)
{
    char *VAR_9 = VAR_7;
    int VAR_10;

    VAR_9 += FUNC_2(VAR_9, "    %s", VAR_5->name);
    (*VAR_6)++;

    if (VAR_5->length)
    {
        VAR_9 += FUNC_0(VAR_9, **VAR_6);

        for (VAR_10 = 0; VAR_10 < VAR_5->length; VAR_10++)
        {
            VAR_9 += FUNC_2(VAR_9, "%s ", VAR_10 ? "," : "");

            if ((VAR_10 != 0) && ((**VAR_6 & VAR_2) != VAR_1))
            {
                if ((**VAR_6 & VAR_2) == VAR_0)
                    VAR_9 += FUNC_2(VAR_9, "-");
                else
                    VAR_9 += FUNC_2(VAR_9, "*");
            }

            VAR_9 += FUNC_1(VAR_9, **VAR_6, VAR_10 == 0, VAR_8);

            if (*(*VAR_6)++ & VAR_3)
            {
                VAR_9 += FUNC_2(VAR_9, "[");
                VAR_9 += FUNC_1(VAR_9, **VAR_6, VAR_4, VAR_4);
                VAR_9 += FUNC_2(VAR_9, "]");
                (*VAR_6)++;
            }
        }
    }
    VAR_9 += FUNC_2(VAR_9, "\n");
    return VAR_9 - VAR_7;
}
