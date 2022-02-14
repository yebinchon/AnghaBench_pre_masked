
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_data_st {int ctx; } ;


 int FUNC_0 (int ,unsigned char*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                      size_t VAR_3)
{
    unsigned int VAR_4;
    struct hmac_data_st *VAR_5 = VAR_0;

    if (!FUNC_0(VAR_5->ctx, VAR_1, &VAR_4))
        return 0;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_4;
    return 1;
}
