
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extract_context {char* base_path; } ;
struct chmFile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chmFile*) ;
 int FUNC_1 (struct chmFile*,int ,int ,void*) ;
 struct chmFile* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

int FUNC_6(int VAR_3, char **VAR_4)
{
    struct chmFile *VAR_5;
    struct extract_context VAR_6;

    if (VAR_3 < 3)
    {
        FUNC_4(VAR_2, "usage: %s <chmfile> <outdir>\n", VAR_4[0]);
        FUNC_3(1);
    }

    VAR_5 = FUNC_2(VAR_4[1]);
    if (VAR_5 == ((void*)0))
    {
        FUNC_4(VAR_2, "failed to open %s\n", VAR_4[1]);
        FUNC_3(1);
    }

    FUNC_5("%s:\n", VAR_4[1]);
    VAR_6.base_path = VAR_4[2];
    if (! FUNC_1(VAR_5,
                        VAR_0,
                        VAR_1,
                        (void *)&VAR_6))
        FUNC_5("   *** ERROR ***\n");

    FUNC_0(VAR_5);

    return 0;
}
