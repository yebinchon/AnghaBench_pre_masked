
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int OPJ_UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;

int FUNC_2(char* VAR_2, unsigned int *VAR_3, unsigned int *VAR_4,
                    unsigned int *VAR_5, unsigned int *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8[4];
    char VAR_9[] = ",";
    char *VAR_10 = ((void*)0);
    VAR_10 = FUNC_1(VAR_2, VAR_9);

    while ((VAR_10 != ((void*)0)) && (VAR_7 < 4)) {
        VAR_8[VAR_7] = FUNC_0(VAR_10);
        VAR_10 = FUNC_1(((void*)0), VAR_9);
        VAR_7++;
    }

    if (VAR_7 != 4) {
        return VAR_0;
    } else {
        *VAR_3 = (OPJ_UINT32)VAR_8[0];
        *VAR_4 = (OPJ_UINT32)VAR_8[1];
        *VAR_5 = (OPJ_UINT32)VAR_8[2];
        *VAR_6 = (OPJ_UINT32)VAR_8[3];
        return VAR_1;
    }
}
