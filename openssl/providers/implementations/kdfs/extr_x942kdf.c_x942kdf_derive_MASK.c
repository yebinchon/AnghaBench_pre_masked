
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cek_nid; scalar_t__ ukm_len; size_t dkm_len; int secret_len; int * secret; int * ukm; int digest; } ;
typedef TYPE_1__ KDF_X942 ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,size_t,int *,scalar_t__,unsigned char**,size_t*,unsigned char**) ;
 int FUNC_4 (int const*,int *,int ,unsigned char*,size_t,unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(void *VAR_8, unsigned char *VAR_9, size_t VAR_10)
{
    KDF_X942 *VAR_11 = (KDF_X942 *)VAR_8;
    const EVP_MD *VAR_12 = FUNC_2(&VAR_11->digest);
    int VAR_13 = 0;
    unsigned char *VAR_14;
    unsigned char *VAR_15 = ((void*)0);
    size_t VAR_16 = 0;

    if (VAR_11->secret == ((void*)0)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    if (VAR_12 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_5);
        return 0;
    }
    if (VAR_11->cek_nid == VAR_1) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    if (VAR_11->ukm != ((void*)0) && VAR_11->ukm_len >= VAR_7) {




        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    if (VAR_10 != VAR_11->dkm_len) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }

    if (!FUNC_3(VAR_11->cek_nid, VAR_11->dkm_len,
                               VAR_11->ukm, VAR_11->ukm_len,
                               &VAR_15, &VAR_16, &VAR_14)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_13 = FUNC_4(VAR_12, VAR_11->secret, VAR_11->secret_len,
                           VAR_15, VAR_16, VAR_14, VAR_9, VAR_10);
    FUNC_1(VAR_15);
    return VAR_13;
}
