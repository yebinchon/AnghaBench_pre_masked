
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef int FILE ;


 int FUNC_0 (char const**,unsigned int,int,int,char*,int) ;
 int FUNC_1 (char const**,unsigned int,int,int,char*,int) ;
 int FUNC_2 (int,int,double const,char*,int) ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 size_t FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(const char** VAR_5, unsigned VAR_6,
                   int VAR_7, int VAR_8,
                   const char* VAR_9)
{
    double const VAR_10 = (double)VAR_4 / 100;
    char* VAR_11 = ((void*)0);
    int VAR_12 = 0;

    if (VAR_7 > VAR_0) VAR_7 = VAR_0;
    if (VAR_8 > VAR_0) VAR_8 = VAR_0;
    if (VAR_8 < VAR_7) VAR_8 = VAR_7;
    if (VAR_8 > VAR_7) FUNC_3(2, "Benchmarking levels from %d to %d\n", VAR_7, VAR_8);

    if (VAR_9) {
        FILE* VAR_13 = ((void*)0);
        U64 VAR_14 = FUNC_6(VAR_9);
        if (!VAR_14) FUNC_4(25, "Dictionary error : could not stat dictionary file");

        VAR_13 = FUNC_8(VAR_9, "rb");
        if (!VAR_13) FUNC_4(25, "Dictionary error : could not open dictionary file");

        if (VAR_14 > VAR_1) {
            VAR_12 = VAR_1;
            if (FUNC_5(VAR_13, VAR_14 - VAR_12, VAR_2))
                FUNC_4(25, "Dictionary error : could not seek dictionary file");
        } else {
            VAR_12 = (int)VAR_14;
        }

        VAR_11 = (char *)FUNC_11(VAR_12);
        if (!VAR_11) FUNC_4(25, "Allocation error : not enough memory");

        if (FUNC_9(VAR_11, 1, VAR_12, VAR_13) != (size_t)VAR_12)
            FUNC_4(25, "Dictionary error : could not read dictionary file");

        FUNC_7(VAR_13);
    }

    if (VAR_6 == 0)
        FUNC_2(VAR_7, VAR_8, VAR_10, VAR_11, VAR_12);
    else {
        if (VAR_3)
            FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11, VAR_12);
        else
            FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11, VAR_12);
    }

    FUNC_10(VAR_11);
    return 0;
}
