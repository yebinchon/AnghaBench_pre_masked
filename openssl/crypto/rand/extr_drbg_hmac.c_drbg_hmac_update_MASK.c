
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hmac; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef int RAND_DRBG_HMAC ;
typedef TYPE_2__ RAND_DRBG ;


 int FUNC_0 (int *,int,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_1(RAND_DRBG *VAR_0,
                            const unsigned char *VAR_1, size_t VAR_2,
                            const unsigned char *VAR_3, size_t VAR_4,
                            const unsigned char *VAR_5, size_t VAR_6)
{
    RAND_DRBG_HMAC *VAR_7 = &VAR_0->data.hmac;


    if (!FUNC_0(VAR_7, 0x00, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
        return 0;

    if (VAR_2 == 0 && VAR_4 == 0 && VAR_6 == 0)
        return 1;

    return FUNC_0(VAR_7, 0x01, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
