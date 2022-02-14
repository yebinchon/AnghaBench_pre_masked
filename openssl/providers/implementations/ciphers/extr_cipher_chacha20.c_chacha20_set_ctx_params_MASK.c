
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*,size_t*) ;
 int * FUNC_2 (int const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(void *VAR_8, const OSSL_PARAM VAR_9[])
{
    const OSSL_PARAM *VAR_10;
    size_t VAR_11;

    VAR_10 = FUNC_2(VAR_9, VAR_4);
    if (VAR_10 != ((void*)0)) {
        if (!FUNC_1(VAR_10, &VAR_11)) {
            FUNC_0(VAR_2, VAR_5);
            return 0;
        }
        if (VAR_11 != VAR_1) {
            FUNC_0(VAR_2, VAR_7);
            return 0;
        }
    }
    VAR_10 = FUNC_2(VAR_9, VAR_3);
    if (VAR_10 != ((void*)0)) {
        if (!FUNC_1(VAR_10, &VAR_11)) {
            FUNC_0(VAR_2, VAR_5);
            return 0;
        }
        if (VAR_11 != VAR_0) {
            FUNC_0(VAR_2, VAR_6);
            return 0;
        }
    }
    return 1;
}
