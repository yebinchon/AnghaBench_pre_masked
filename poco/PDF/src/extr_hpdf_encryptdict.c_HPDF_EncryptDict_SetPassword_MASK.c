
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int user_passwd; int owner_passwd; } ;
struct TYPE_4__ {int error; int attr; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_EncryptDict ;
typedef TYPE_2__* HPDF_Encrypt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,int) ;

HPDF_STATUS
FUNC_5 (HPDF_EncryptDict VAR_2,
                               const char *VAR_3,
                               const char *VAR_4)
{
    HPDF_Encrypt VAR_5 = (HPDF_Encrypt)VAR_2->attr;

    FUNC_0((" HPDF_EncryptDict_SetPassword\n"));

    if (FUNC_4(VAR_3, 2) == 0)
        return FUNC_2(VAR_2->error, VAR_0, 0);

    if (VAR_3 && VAR_4 &&
            FUNC_3 (VAR_3, VAR_4) == 0)
        return FUNC_2(VAR_2->error, VAR_0, 0);

    FUNC_1 (VAR_3, VAR_5->owner_passwd);
    FUNC_1 (VAR_4, VAR_5->user_passwd);

    return VAR_1;
}
