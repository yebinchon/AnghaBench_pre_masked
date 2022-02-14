
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmPmgiHeader {int * free_space; } ;
typedef int WCHAR ;
typedef scalar_t__ UInt64 ;
typedef int UInt32 ;
typedef int UChar ;
typedef int Int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int **,int*,struct chmPmgiHeader*) ;
 scalar_t__ FUNC_3 (int *,int const*) ;

__attribute__((used)) static Int32 FUNC_4(UChar *VAR_2,
                        UInt32 VAR_3,
                        const WCHAR *VAR_4)
{



    struct chmPmgiHeader VAR_5;
    UInt32 VAR_6;
    int VAR_7=-1;
    UChar *VAR_8;
    UChar *VAR_9;
    UInt64 VAR_10;
    WCHAR VAR_11[VAR_0+1];


    VAR_9 = VAR_2;
    VAR_6 = VAR_1;
    if (! FUNC_2(&VAR_9, &VAR_6, &VAR_5))
        return -1;
    VAR_8 = VAR_2 + VAR_3 - (VAR_5.free_space);


    while (VAR_9 < VAR_8)
    {

        VAR_10 = FUNC_1(&VAR_9);
        if (! FUNC_0(&VAR_9, VAR_10, VAR_11))
            return -1;


        if (FUNC_3(VAR_11, VAR_4) > 0)
            return VAR_7;


        VAR_7 = (int)FUNC_1(&VAR_9);
    }

    return VAR_7;
}
