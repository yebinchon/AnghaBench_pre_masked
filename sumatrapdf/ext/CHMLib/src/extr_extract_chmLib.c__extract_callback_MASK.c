
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extract_context {char* base_path; } ;
struct chmUnitInfo {char* path; scalar_t__ length; } ;
struct chmFile {int dummy; } ;
typedef int buffer ;
typedef size_t LONGUINT64 ;
typedef scalar_t__ LONGINT64 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct chmFile*,struct chmUnitInfo*,unsigned char*,size_t,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,int,size_t,int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 int * FUNC_11 (char*,char*) ;

int FUNC_12(struct chmFile *VAR_3,
              struct chmUnitInfo *VAR_4,
              void *VAR_5)
{
    LONGUINT64 VAR_6;
    char VAR_7[32768];
    struct extract_context *VAR_8 = (struct extract_context *)VAR_5;
    char *VAR_9;

    if (VAR_4->path[0] != '/')
        return VAR_0;


    if (FUNC_11(VAR_4->path, "/../") != ((void*)0))
    {

        return VAR_0;
    }

    if (FUNC_7(VAR_7, sizeof(VAR_7), "%s%s", VAR_8->base_path, VAR_4->path) > 1024)
        return VAR_1;


    VAR_6 = FUNC_9(VAR_4->path)-1;


    if (VAR_4->path[VAR_6] != '/' )
    {
        FILE *VAR_10;
        LONGINT64 VAR_11, VAR_12=VAR_4->length;
        LONGUINT64 VAR_13 = 0;

        FUNC_5("--> %s\n", VAR_4->path);
        if ((VAR_10 = FUNC_2(VAR_7, "wb")) == ((void*)0))
 {

     char VAR_14[32768];
     FUNC_8(VAR_14, VAR_7);
     VAR_9 = FUNC_10(VAR_14, '/');
     *VAR_9 = '\0';
     FUNC_6(VAR_14);
     if ((VAR_10 = FUNC_2(VAR_7, "wb")) == ((void*)0))
              return VAR_1;
 }

        while (VAR_12 != 0)
        {
            VAR_11 = FUNC_0(VAR_3, VAR_4, (unsigned char *)VAR_7, VAR_13, 32768);
            if (VAR_11 > 0)
            {
                FUNC_4(VAR_7, 1, (size_t)VAR_11, VAR_10);
                VAR_13 += VAR_11;
                VAR_12 -= VAR_11;
            }
            else
            {
                FUNC_3(VAR_2, "incomplete file: %s\n", VAR_4->path);
                break;
            }
        }

        FUNC_1(VAR_10);
    }
    else
    {
        if (FUNC_6(VAR_7) == -1)
            return VAR_1;
    }

    return VAR_0;
}
