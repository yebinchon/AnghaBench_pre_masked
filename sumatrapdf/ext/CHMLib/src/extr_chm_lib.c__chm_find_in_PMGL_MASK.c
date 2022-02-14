
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmPmglHeader {int * free_space; } ;
typedef int UInt64 ;
typedef int UInt32 ;
typedef int UChar ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int **,int,char*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,unsigned int*,int,struct chmPmglHeader*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static UChar *FUNC_5(UChar *VAR_2,
                         UInt32 VAR_3,
                         const char *VAR_4)
{



    struct chmPmglHeader VAR_5;
    unsigned int VAR_6;
    UChar *VAR_7;
    UChar *VAR_8;
    UChar *VAR_9;
    UInt64 VAR_10;
    char VAR_11[VAR_0+1];


    VAR_8 = VAR_2;
    VAR_6 = VAR_1;
    if (! FUNC_3(&VAR_8, &VAR_6, VAR_3, &VAR_5))
        return ((void*)0);
    VAR_7 = VAR_2 + VAR_3 - (VAR_5.free_space);


    while (VAR_8 < VAR_7)
    {

        VAR_9 = VAR_8;
        VAR_10 = FUNC_1(&VAR_8);
        if (VAR_10 > VAR_0)
            return ((void*)0);
        if (! FUNC_0(&VAR_8, VAR_10, VAR_11))
            return ((void*)0);


        if (! FUNC_4(VAR_11, VAR_4))
            return VAR_9;

        FUNC_2(&VAR_8);
    }

    return ((void*)0);
}
