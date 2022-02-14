
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Jbig2Image ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

int
FUNC_4(Jbig2Image *VAR_1, char *VAR_2)
{
    FILE *VAR_3;
    int VAR_4;

    if ((VAR_3 = FUNC_1(VAR_2, "wb")) == ((void*)0)) {
        FUNC_2(VAR_0, "unable to open '%s' for writing", VAR_2);
        return 1;
    }

    VAR_4 = FUNC_3(VAR_1, VAR_3);

    FUNC_0(VAR_3);
    return (VAR_4);
}
