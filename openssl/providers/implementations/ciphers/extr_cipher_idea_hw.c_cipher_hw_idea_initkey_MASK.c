
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mode; scalar_t__ enc; } ;
struct TYPE_5__ {int ks; } ;
struct TYPE_6__ {TYPE_1__ ks; } ;
typedef TYPE_2__ PROV_IDEA_CTX ;
typedef TYPE_3__ PROV_CIPHER_CTX ;
typedef int IDEA_KEY_SCHEDULE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (unsigned char const*,int *) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(PROV_CIPHER_CTX *VAR_2,
                                  const unsigned char *VAR_3, size_t VAR_4)
{
    PROV_IDEA_CTX *VAR_5 = (PROV_IDEA_CTX *)VAR_2;
    IDEA_KEY_SCHEDULE *VAR_6 = &(VAR_5->ks.ks);

    if (VAR_2->enc
            || VAR_2->mode == VAR_1
            || VAR_2->mode == VAR_0) {
        FUNC_1(VAR_3, VAR_6);
    } else {
        IDEA_KEY_SCHEDULE VAR_7;

        FUNC_1(VAR_3, &VAR_7);
        FUNC_0(&VAR_7, VAR_6);
        FUNC_2((unsigned char *)&VAR_7, sizeof(IDEA_KEY_SCHEDULE));
    }
    return 1;
}
