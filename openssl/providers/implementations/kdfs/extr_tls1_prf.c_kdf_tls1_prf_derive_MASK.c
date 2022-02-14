
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seedlen; int seed; int seclen; int * sec; int P_sha1; int * P_hash; } ;
typedef TYPE_1__ TLS1_PRF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,int ,int ,scalar_t__,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, unsigned char *VAR_5,
                               size_t VAR_6)
{
    TLS1_PRF *VAR_7 = (TLS1_PRF *)VAR_4;

    if (VAR_7->P_hash == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_7->sec == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_7->seedlen == 0) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    return FUNC_1(VAR_7->P_hash, VAR_7->P_sha1,
                        VAR_7->sec, VAR_7->seclen,
                        VAR_7->seed, VAR_7->seedlen,
                        VAR_5, VAR_6);
}
