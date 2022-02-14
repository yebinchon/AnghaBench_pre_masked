
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_CMP_PKIFREETEXT ;
typedef int OSSL_CMP_CTX ;
typedef int ASN1_UTF8STRING ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 char* FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;

char *FUNC_9(OSSL_CMP_CTX *VAR_4, char *VAR_5,
                                     size_t VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    const char *VAR_10, *VAR_11;
    OSSL_CMP_PKIFREETEXT *VAR_12;
    ASN1_UTF8STRING *VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16 = 0;
    int VAR_17;
    char* VAR_18 = VAR_5;







    if (VAR_4 == ((void*)0)
            || VAR_5 == ((void*)0)
            || (VAR_7 = FUNC_5(VAR_4)) < 0
            || (VAR_10 = FUNC_6(VAR_7)) == ((void*)0))
        return ((void*)0);
    VAR_15 = FUNC_1(VAR_18, VAR_6, "%s", VAR_10);
    if (VAR_15 < 0 || (size_t)VAR_15 >= VAR_6) return ((void*)0); VAR_18 += VAR_15; VAR_6 -= VAR_15;;


    if ((VAR_9 = FUNC_4(VAR_4)) > 0) {
        VAR_15 = FUNC_1(VAR_18, VAR_6, "; PKIFailureInfo: ");
        if (VAR_15 < 0 || (size_t)VAR_15 >= VAR_6) return ((void*)0); VAR_18 += VAR_15; VAR_6 -= VAR_15;;
        for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
            if ((VAR_9 & (1 << VAR_8)) != 0) {
                VAR_11 = FUNC_2(VAR_8);
                if (VAR_11 != ((void*)0)) {
                    VAR_15 = FUNC_1(VAR_18, VAR_6, "%s%s",
                                                 VAR_8 > 0 ? ", " : "",
                                                 VAR_11);
                    if (VAR_15 < 0 || (size_t)VAR_15 >= VAR_6) return ((void*)0); VAR_18 += VAR_15; VAR_6 -= VAR_15;;
                    VAR_16 = 1;
                }
            }
        }
    }
    if (!VAR_16 && VAR_7 != VAR_2
            && VAR_7 != VAR_3) {
        VAR_15 = FUNC_1(VAR_18, VAR_6, "; <no failure info>");
        if (VAR_15 < 0 || (size_t)VAR_15 >= VAR_6) return ((void*)0); VAR_18 += VAR_15; VAR_6 -= VAR_15;;
    }


    VAR_12 = FUNC_3(VAR_4);
    VAR_17 = FUNC_7(VAR_12);
    if (VAR_17 > 0) {
        VAR_15 = FUNC_1(VAR_18, VAR_6, "; StatusString%s: ",
                                     VAR_17 > 1 ? "s" : "");
        if (VAR_15 < 0 || (size_t)VAR_15 >= VAR_6) return ((void*)0); VAR_18 += VAR_15; VAR_6 -= VAR_15;;
        for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
            VAR_13 = FUNC_8(VAR_12, VAR_14);
            VAR_15 = FUNC_1(VAR_18, VAR_6, "\"%s\"%s",
                                         FUNC_0(VAR_13),
                                         VAR_14 < VAR_17 - 1 ? ", " : "");
            if (VAR_15 < 0 || (size_t)VAR_15 >= VAR_6) return ((void*)0); VAR_18 += VAR_15; VAR_6 -= VAR_15;;
        }
    }

    return VAR_5;
}
