
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int * LPPROC_THREAD_ATTRIBUTE_LIST ;
typedef int HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int *,int,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (void*,int ) ;

__attribute__((used)) static LPPROC_THREAD_ATTRIBUTE_LIST FUNC_6(void *VAR_3,
                                                       HANDLE *VAR_4, int VAR_5)
{

    SIZE_T VAR_6 = 0;
    if (!FUNC_1(((void*)0), 1, 0, &VAR_6)) {
        if (FUNC_0() != VAR_0)
            return ((void*)0);
    }


    LPPROC_THREAD_ATTRIBUTE_LIST VAR_7 = FUNC_5(VAR_3, VAR_6);
    if (!FUNC_1(VAR_7, 1, 0, &VAR_6))
        goto error;
    FUNC_4(VAR_7, VAR_2);

    if (!FUNC_2(VAR_7, 0, VAR_1,
                                   VAR_4, VAR_5 * sizeof(HANDLE), ((void*)0), ((void*)0)))
        goto error;

    return VAR_7;
error:
    FUNC_3(VAR_7);
    return ((void*)0);
}
