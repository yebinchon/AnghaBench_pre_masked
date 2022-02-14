
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
    thread_t VAR_5;
    void *VAR_6 = ((void*)0);

    if (!FUNC_5(FUNC_2(&VAR_2,
                                            VAR_1)))
        return 0;

    VAR_6 = FUNC_1(&VAR_2);
    if (!FUNC_4(VAR_6)
        || !FUNC_5(FUNC_6(&VAR_5, VAR_3))
        || !FUNC_5(FUNC_7(VAR_5))
        || !FUNC_3(VAR_4, 1))
        return 0;
    if (!FUNC_5(FUNC_0(&VAR_2)))
        return 0;
    return 1;
}
