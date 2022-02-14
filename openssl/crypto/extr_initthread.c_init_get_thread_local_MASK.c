
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int THREAD_EVENT_HANDLER ;
typedef int CRYPTO_THREAD_LOCAL ;


 int ** FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int **) ;
 int ** FUNC_3 (int) ;
 int FUNC_4 (int **) ;

__attribute__((used)) static THREAD_EVENT_HANDLER **
FUNC_5(CRYPTO_THREAD_LOCAL *VAR_0, int VAR_1, int VAR_2)
{
    THREAD_EVENT_HANDLER **VAR_3 = FUNC_0(VAR_0);

    if (VAR_1) {
        if (VAR_3 == ((void*)0)) {

            if ((VAR_3 = FUNC_3(sizeof(*VAR_3))) == ((void*)0))
                return ((void*)0);

            if (!FUNC_1(VAR_0, VAR_3)) {
                FUNC_2(VAR_3);
                return ((void*)0);
            }


            if (!FUNC_4(VAR_3)) {
                FUNC_1(VAR_0, ((void*)0));
                FUNC_2(VAR_3);
                return ((void*)0);
            }

        }
    } else if (!VAR_2) {
        FUNC_1(VAR_0, ((void*)0));
    }

    return VAR_3;
}
