
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (int *,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_2 ;

int FUNC_9(int VAR_3, char **VAR_4)
{
    BIO *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    CMS_ContentInfo *VAR_7 = ((void*)0);
    int VAR_8 = 1;





    int VAR_9 = VAR_0;

    FUNC_6();
    FUNC_4();



    VAR_5 = FUNC_1("comp.txt", "r");

    if (!VAR_5)
        goto err;


    VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_9);

    if (!VAR_7)
        goto err;

    VAR_6 = FUNC_1("smcomp.txt", "w");
    if (!VAR_6)
        goto err;


    if (!FUNC_7(VAR_6, VAR_7, VAR_5, VAR_9))
        goto err;

    VAR_8 = 0;

 err:

    if (VAR_8) {
        FUNC_8(VAR_2, "Error Compressing Data\n");
        FUNC_5(VAR_2);
    }

    FUNC_2(VAR_7);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    return VAR_8;
}
