
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int taglen; int gcm; scalar_t__ enc; } ;
typedef TYPE_1__ PROV_GCM_CTX ;


 scalar_t__ FUNC_0 (int *,unsigned char*,int ) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int VAR_0 ;

int FUNC_2(PROV_GCM_CTX *VAR_1, unsigned char *VAR_2)
{
    if (VAR_1->enc) {
        FUNC_1(&VAR_1->gcm, VAR_2, VAR_0);
        VAR_1->taglen = VAR_0;
    } else {
        if (FUNC_0(&VAR_1->gcm, VAR_2, VAR_1->taglen) != 0)
            return 0;
    }
    return 1;
}
