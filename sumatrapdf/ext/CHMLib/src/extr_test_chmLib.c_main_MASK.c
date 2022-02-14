
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int length; int space; scalar_t__ start; } ;
struct chmFile {int dummy; } ;
typedef scalar_t__ LONGINT64 ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct chmFile* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct chmFile*,char*,struct chmUnitInfo*) ;
 scalar_t__ FUNC_3 (struct chmFile*,struct chmUnitInfo*,unsigned char*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (unsigned char*,int,unsigned int,int *) ;
 int FUNC_9 (char*,...) ;
 int VAR_1 ;

int FUNC_10(int VAR_2, char **VAR_3)
{
    struct chmFile *VAR_4;
    struct chmUnitInfo VAR_5;

    if (VAR_2 < 4)
    {
        FUNC_7(VAR_1, "usage: %s <chmfile> <filename> <destfile>\n", VAR_3[0]);
        FUNC_4(1);
    }

    VAR_4 = FUNC_1(VAR_3[1]);
    if (VAR_4 == ((void*)0))
    {
        FUNC_7(VAR_1, "failed to open %s\n", VAR_3[1]);
        FUNC_4(1);
    }

    FUNC_9("resolving %s\n", VAR_3[2]);
    if (VAR_0 == FUNC_2(VAR_4,
                                                  VAR_3[2],
                                                  &VAR_5))
    {



        unsigned char VAR_6[VAR_5.length];

        LONGINT64 VAR_7;
        FILE *VAR_8;
        FUNC_9("    object: <%d, %lu, %lu>\n",
               VAR_5.space,
               (unsigned long)VAR_5.start,
               (unsigned long)VAR_5.length);

        FUNC_9("extracting to '%s'\n", VAR_3[3]);
        VAR_7 = FUNC_3(VAR_4, &VAR_5, VAR_6, 0, VAR_5.length);
        if (VAR_7 == 0)
        {
            FUNC_9("   extract failed\n");
            return 2;
        }
        else if ((VAR_8 = FUNC_6(VAR_3[3], "wb")) == ((void*)0))
        {
            FUNC_9("   create failed\n");
            return 3;
        }
        else
        {
            FUNC_8(VAR_6, 1, (unsigned int)VAR_5.length, VAR_8);
            FUNC_5(VAR_8);
            FUNC_9("   finished\n");
        }
    }
    else
        FUNC_9("    failed\n");

    return 0;
}
