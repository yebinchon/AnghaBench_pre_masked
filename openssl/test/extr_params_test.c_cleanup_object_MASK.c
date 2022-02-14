
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_st {struct object_st* p4; int * p3; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct object_st*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct object_st *VAR_1 = VAR_0;

    FUNC_0(VAR_1->p3);
    VAR_1->p3 = ((void*)0);
    FUNC_1(VAR_1->p4);
    VAR_1->p4 = ((void*)0);
    FUNC_1(VAR_1);
}
