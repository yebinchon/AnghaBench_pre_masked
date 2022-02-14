
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ocb128_f ;
typedef int block128_f ;
typedef int OCB128_CONTEXT ;


 int FUNC_0 (int *,void*,void*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

OCB128_CONTEXT *FUNC_3(void *VAR_0, void *VAR_1,
                                  block128_f VAR_2, block128_f VAR_3,
                                  ocb128_f VAR_4)
{
    OCB128_CONTEXT *VAR_5;
    int VAR_6;

    if ((VAR_5 = FUNC_2(sizeof(*VAR_5))) != ((void*)0)) {
        VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3,
                                 VAR_4);
        if (VAR_6)
            return VAR_5;
        FUNC_1(VAR_5);
    }

    return ((void*)0);
}
