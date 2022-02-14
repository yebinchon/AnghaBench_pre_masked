
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4F_dctx ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int **,int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (size_t const) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,void* const,int ) ;
 int FUNC_6 (void* const) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(FILE* VAR_2, FILE* VAR_3)
{
    FUNC_4(VAR_2 != ((void*)0)); FUNC_4(VAR_3 != ((void*)0));


    void* const VAR_4 = FUNC_7(VAR_0);
    if (!VAR_4) { FUNC_8("decompress_file(src)"); return 1; }

    LZ4F_dctx* VAR_5;
    { size_t const VAR_6 = FUNC_0(&VAR_5, VAR_1);
        if (FUNC_3(VAR_6)) {
            FUNC_9("LZ4F_dctx creation error: %s\n", FUNC_2(VAR_6));
    } }

    int const VAR_7 = !VAR_5 ? 1 :
                       FUNC_5(VAR_2, VAR_3, VAR_5, VAR_4, VAR_0);

    FUNC_6(VAR_4);
    FUNC_1(VAR_5);
    return VAR_7;
}
