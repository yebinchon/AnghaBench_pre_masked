
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int itsName ;
typedef int WCHAR ;
typedef scalar_t__ GpStatus ;
typedef int GpFontFamily ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int ,int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7 (void)
{
    GpFontFamily *VAR_8, *VAR_9;
    WCHAR VAR_10[VAR_3];
    GpStatus VAR_11;


    VAR_11 = FUNC_1 (VAR_6 , ((void*)0), ((void*)0));
    FUNC_5 (VAR_1, VAR_11);




    VAR_11 = FUNC_1 (VAR_7, ((void*)0), &VAR_8);
    FUNC_5 (VAR_0, VAR_11);


    VAR_11 = FUNC_1 (VAR_4, ((void*)0), &VAR_8);
    FUNC_5 (VAR_0, VAR_11);
    if(VAR_11 == VAR_5) FUNC_2(VAR_8);

    VAR_11 = FUNC_1 (VAR_6, ((void*)0), &VAR_8);
    FUNC_5 (VAR_5, VAR_11);

    VAR_11 = FUNC_3 (VAR_8, VAR_10, VAR_2);
    FUNC_5 (VAR_5, VAR_11);
    FUNC_5 (0, FUNC_6(VAR_10, VAR_6));

    if (0)
    {

        VAR_11 = FUNC_3 (VAR_8, ((void*)0), VAR_2);
        FUNC_5 (VAR_5, VAR_11);
    }


    FUNC_4 (VAR_10, sizeof(VAR_10));
    VAR_11 = FUNC_0(VAR_8, &VAR_9);
    FUNC_5 (VAR_5, VAR_11);
    FUNC_2(VAR_8);
    VAR_11 = FUNC_3(VAR_9, VAR_10, VAR_2);
    FUNC_5(VAR_5, VAR_11);
    FUNC_5(0, FUNC_6(VAR_10, VAR_6));

    FUNC_2(VAR_9);
}
