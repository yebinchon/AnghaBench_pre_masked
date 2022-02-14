
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmac_data_st {void* provctx; int * ctx; } ;


 int * FUNC_0 () ;
 struct kmac_data_st* FUNC_1 (int) ;
 int FUNC_2 (struct kmac_data_st*) ;

__attribute__((used)) static struct kmac_data_st *FUNC_3(void *VAR_0)
{
    struct kmac_data_st *VAR_1;

    if ((VAR_1 = FUNC_1(sizeof(*VAR_1))) == ((void*)0)
            || (VAR_1->ctx = FUNC_0()) == ((void*)0)) {
        FUNC_2(VAR_1);
        return ((void*)0);
    }
    VAR_1->provctx = VAR_0;
    return VAR_1;
}
