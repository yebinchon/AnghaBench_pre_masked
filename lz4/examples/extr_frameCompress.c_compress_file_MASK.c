
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_2; int member_1; } ;
typedef TYPE_1__ compressResult_t ;
typedef int LZ4F_compressionContext_t ;
typedef int FILE ;


 size_t const VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t const,int *) ;
 size_t FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t const) ;
 int FUNC_4 (int ) ;
 TYPE_1__ FUNC_5 (int *,int *,int ,void* const,size_t const,void* const,size_t const) ;
 int FUNC_6 (void* const) ;
 int VAR_2 ;
 void* FUNC_7 (size_t const) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static compressResult_t
FUNC_9(FILE* VAR_3, FILE* VAR_4)
{
    FUNC_4(VAR_3 != ((void*)0));
    FUNC_4(VAR_4 != ((void*)0));


    LZ4F_compressionContext_t VAR_5;
    size_t const VAR_6 = FUNC_1(&VAR_5, VAR_1);
    void* const VAR_7 = FUNC_7(VAR_0);
    size_t const VAR_8 = FUNC_0(VAR_0, &VAR_2);
    void* const VAR_9 = FUNC_7(VAR_8);

    compressResult_t VAR_10 = { 1, 0, 0 };
    if (!FUNC_3(VAR_6) && VAR_7 && VAR_9) {
        VAR_10 = FUNC_5(VAR_3, VAR_4,
                                        VAR_5,
                                        VAR_7, VAR_0,
                                        VAR_9, VAR_8);
    } else {
        FUNC_8("error : ressource allocation failed \n");
    }

    FUNC_2(VAR_5);
    FUNC_6(VAR_7);
    FUNC_6(VAR_9);
    return VAR_10;
}
