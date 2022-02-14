
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* HPDF_String ;
typedef int HPDF_STATUS ;
typedef int HPDF_NameTree ;
typedef scalar_t__ HPDF_INT32 ;
typedef int HPDF_Array ;


 int FUNC_0 (int ,void*) ;
 void* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,void*,void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (void*,void*) ;

HPDF_STATUS
FUNC_6 (HPDF_NameTree VAR_5,
                    HPDF_String VAR_6,
                    void *VAR_7)
{
    HPDF_Array VAR_8;
    HPDF_INT32 VAR_9, VAR_10;

    if (!VAR_5 || !VAR_6)
        return VAR_1;

    VAR_8 = FUNC_4 (VAR_5, "Names", VAR_2);
    if (!VAR_8)
        return VAR_0;






    VAR_10 = FUNC_3(VAR_8);


    if (VAR_10) {
        HPDF_String VAR_11 = FUNC_1(VAR_8, VAR_10 - 2, VAR_3);

        if (FUNC_5(VAR_6, VAR_11) > 0) {
            FUNC_0(VAR_8, VAR_6);
            FUNC_0(VAR_8, VAR_7);
            return VAR_4;
        }
    }



    for (VAR_9 = VAR_10 - 4; VAR_9 >= 0; VAR_9 -= 2) {
        HPDF_String VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_3);

        if (VAR_9 == 0 || FUNC_5(VAR_6, VAR_12) < 0) {
            FUNC_2(VAR_8, VAR_12, VAR_6);
            FUNC_2(VAR_8, VAR_12, VAR_7);
            return VAR_4;
        }
    }


    FUNC_0(VAR_8, VAR_6);
    FUNC_0(VAR_8, VAR_7);
    return VAR_4;
}
