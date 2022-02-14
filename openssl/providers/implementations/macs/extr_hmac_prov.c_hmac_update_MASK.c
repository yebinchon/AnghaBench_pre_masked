
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_data_st {int ctx; } ;


 int FUNC_0 (int ,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const unsigned char *VAR_1,
                       size_t VAR_2)
{
    struct hmac_data_st *VAR_3 = VAR_0;

    return FUNC_0(VAR_3->ctx, VAR_1, VAR_2);
}
