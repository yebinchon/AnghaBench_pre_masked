
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_st {int p6; int p5; int p4; int p3; int p2; int p1; } ;
typedef int OSSL_PARAM ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, OSSL_PARAM *VAR_1)
{
    struct object_st *VAR_2 = VAR_0;
    OSSL_PARAM *VAR_3 = ((void*)0);

    if ((VAR_3 = FUNC_0(VAR_1, "p1")) != ((void*)0)
        && !FUNC_6(FUNC_3(VAR_3, VAR_2->p1)))
        return 0;
    if ((VAR_3 = FUNC_0(VAR_1, "p2")) != ((void*)0)
        && !FUNC_6(FUNC_2(VAR_3, VAR_2->p2)))
        return 0;
    if ((VAR_3 = FUNC_0(VAR_1, "p3")) != ((void*)0)
        && !FUNC_6(FUNC_1(VAR_3, VAR_2->p3)))
        return 0;
    if ((VAR_3 = FUNC_0(VAR_1, "p4")) != ((void*)0)
        && !FUNC_6(FUNC_5(VAR_3, VAR_2->p4)))
        return 0;
    if ((VAR_3 = FUNC_0(VAR_1, "p5")) != ((void*)0)
        && !FUNC_6(FUNC_5(VAR_3, VAR_2->p5)))
        return 0;
    if ((VAR_3 = FUNC_0(VAR_1, "p6")) != ((void*)0)
        && !FUNC_6(FUNC_4(VAR_3, VAR_2->p6)))
        return 0;

    return 1;
}
