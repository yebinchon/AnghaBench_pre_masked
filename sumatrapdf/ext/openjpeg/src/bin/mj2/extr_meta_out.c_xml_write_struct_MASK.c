
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_mj2_t ;
typedef int opj_event_mgr_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int *,int *,unsigned int,int *) ;

int FUNC_2(FILE* VAR_0, FILE *VAR_1, opj_mj2_t * VAR_2,
                     unsigned int VAR_3, char* VAR_4, opj_event_mgr_t *VAR_5)
{

    if (VAR_4 != ((void*)0)) {
        FUNC_0(VAR_1, "<?xml version=\"1.0\" standalone=\"no\"?>\n");


        VAR_4[6] =
            '\0';
        FUNC_0(VAR_1, "<!DOCTYPE MJ2_File %s \"%s\">\n", VAR_4, VAR_4 + 7);
        VAR_4[6] = ' ';
    } else {
        FUNC_0(VAR_1, "<?xml version=\"1.0\" standalone=\"yes\"?>\n");
    }

    FUNC_0(VAR_1, "<MJ2_File>\n");
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
    FUNC_0(VAR_1, "</MJ2_File>");
    return 0;
}
