
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPVOID ;
typedef int LONG ;
typedef int IFont ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,int *,int **) ;

__attribute__((used)) static void FUNC_7(void)
{
    LPVOID VAR_3 = ((void*)0);
    HRESULT VAR_4;
    IFont* VAR_5 = ((void*)0);
    LONG VAR_6;

    VAR_4 = FUNC_6(((void*)0), &VAR_1, ((void*)0));
    FUNC_0(VAR_4, VAR_0);

    VAR_4 = FUNC_6(((void*)0), &VAR_1, &VAR_3);
    VAR_5 = VAR_3;

    FUNC_0(VAR_4, VAR_2);
    FUNC_5(VAR_5 != ((void*)0),"OCFI (NULL,..) returns NULL, instead of !NULL\n");

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_2( VAR_5, &VAR_1, &VAR_3);
    FUNC_0(VAR_4, VAR_2);


    VAR_6 = FUNC_1(VAR_5);
    FUNC_5(VAR_6 == 3 ||
       FUNC_4(VAR_6 == 1),
           "IFont_QI expected ref value 3 but instead got %d\n", VAR_6);
    FUNC_3(VAR_5);

    FUNC_5(VAR_3 != ((void*)0),"IFont_QI does return NULL, instead of a ptr\n");

    FUNC_3(VAR_5);
    FUNC_3(VAR_5);
}
