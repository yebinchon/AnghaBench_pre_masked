
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4IO_prefs_t ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 unsigned int FUNC_1 (int * const,int *,char* const,size_t,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 (char* const) ;
 unsigned int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (char* const,char* const,int,size_t) ;
 scalar_t__ FUNC_7 (int *) ;
 size_t FUNC_8 (char* const,int,unsigned int,int *) ;
 int FUNC_9 (char* const) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_10 (size_t) ;

__attribute__((used)) static unsigned long long FUNC_11(LZ4IO_prefs_t* const VAR_2, FILE* VAR_3, FILE* VAR_4)
{
    unsigned long long VAR_5 = 0;
    unsigned VAR_6 = 0;


    char* const VAR_7 = (char*)FUNC_10((size_t)FUNC_5(VAR_0));
    char* const VAR_8 = (char*)FUNC_10(VAR_0);
    if (!VAR_7 || !VAR_8) FUNC_0(51, "Allocation error : not enough memory");


    while (1) {
        unsigned int VAR_9;


        { size_t const VAR_10 = FUNC_8(VAR_7, 1, 4, VAR_3);
            if (VAR_10 == 0) break;
            if (VAR_10 != 4) FUNC_0(52, "Read error : cannot access block size "); }
            VAR_9 = FUNC_3(VAR_7);
            if (VAR_9 > FUNC_4(VAR_0)) {

            VAR_1 = VAR_9;
            break;
        }


        { size_t const VAR_11 = FUNC_8(VAR_7, 1, VAR_9, VAR_3);
          if (VAR_11!=VAR_9) FUNC_0(52, "Read error : cannot access compressed block !"); }


        { int const VAR_12 = FUNC_6(VAR_7, VAR_8, (int)VAR_9, VAR_0);
            if (VAR_12 < 0) FUNC_0(53, "Decoding Failed ! Corrupted input detected !");
            VAR_5 += (unsigned long long)VAR_12;

            VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_8, (size_t)VAR_12, VAR_6);
    } }
    if (FUNC_7(VAR_3)) FUNC_0(54, "Read error : ferror");

    FUNC_2(VAR_4, VAR_6);


    FUNC_9(VAR_7);
    FUNC_9(VAR_8);

    return VAR_5;
}
