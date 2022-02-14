
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*) ;
 int VAR_0 ;

int FUNC_9(int VAR_1, char **VAR_2)
{
    BIO *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    CMS_ContentInfo *VAR_5 = ((void*)0);
    int VAR_6 = 1;

    FUNC_6();
    FUNC_4();



    VAR_3 = FUNC_1("smcomp.txt", "r");

    if (!VAR_3)
        goto err;


    VAR_5 = FUNC_7(VAR_3, ((void*)0));

    if (!VAR_5)
        goto err;

    VAR_4 = FUNC_1("smuncomp.txt", "w");
    if (!VAR_4)
        goto err;


    if (!FUNC_3(VAR_5, VAR_4, ((void*)0), 0))
        goto err;

    VAR_6 = 0;

 err:

    if (VAR_6) {
        FUNC_8(VAR_0, "Error Uncompressing Data\n");
        FUNC_5(VAR_0);
    }

    FUNC_2(VAR_5);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    return VAR_6;
}
