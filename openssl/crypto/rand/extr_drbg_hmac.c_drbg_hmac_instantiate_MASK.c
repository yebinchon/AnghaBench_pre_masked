
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int blocklen; int V; int K; } ;
struct TYPE_6__ {TYPE_2__ hmac; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HMAC ;
typedef TYPE_3__ RAND_DRBG ;


 int FUNC_0 (TYPE_3__*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(RAND_DRBG *VAR_0,
                                 const unsigned char *VAR_1, size_t VAR_2,
                                 const unsigned char *VAR_3, size_t VAR_4,
                                 const unsigned char *VAR_5, size_t VAR_6)
{
    RAND_DRBG_HMAC *VAR_7 = &VAR_0->data.hmac;


    FUNC_1(VAR_7->K, 0x00, VAR_7->blocklen);

    FUNC_1(VAR_7->V, 0x01, VAR_7->blocklen);

    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_6);
}
