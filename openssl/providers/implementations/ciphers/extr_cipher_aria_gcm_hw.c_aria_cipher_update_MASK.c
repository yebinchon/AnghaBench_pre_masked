
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gcm; scalar_t__ enc; } ;
typedef TYPE_1__ PROV_GCM_CTX ;


 scalar_t__ FUNC_0 (int *,unsigned char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int *,unsigned char const*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_2(PROV_GCM_CTX *VAR_0, const unsigned char *VAR_1,
                              size_t VAR_2, unsigned char *VAR_3)
{
    if (VAR_0->enc) {
        if (FUNC_1(&VAR_0->gcm, VAR_1, VAR_3, VAR_2))
            return 0;
    } else {
        if (FUNC_0(&VAR_0->gcm, VAR_1, VAR_3, VAR_2))
            return 0;
    }
    return 1;
}
