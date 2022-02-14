
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ mode; int key_len; int permission; int user_key; int owner_key; } ;
struct TYPE_11__ {int error; int mmgr; int attr; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_EncryptDict ;
typedef TYPE_2__* HPDF_Encrypt ;
typedef int HPDF_Dict ;
typedef int HPDF_Binary ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*) ;

HPDF_STATUS
FUNC_10 (HPDF_EncryptDict VAR_4,
                           HPDF_Dict VAR_5,
                           HPDF_Xref VAR_6)
{
    HPDF_STATUS VAR_7;
    HPDF_Encrypt VAR_8 = (HPDF_Encrypt)VAR_4->attr;
    HPDF_Binary VAR_9;
    HPDF_Binary VAR_10;

    FUNC_9((" HPDF_EncryptDict_Prepare\n"));

    FUNC_4 (VAR_4, VAR_5, VAR_6);
    FUNC_6 (VAR_8);
    FUNC_5 (VAR_8);
    FUNC_7 (VAR_8);

    VAR_10 = FUNC_0 (VAR_4->mmgr, VAR_8->owner_key, VAR_3);
    if (!VAR_10)
        return FUNC_8 (VAR_4->error);

    if ((VAR_7 = FUNC_1 (VAR_4, "O", VAR_10)) != VAR_2)
        return VAR_7;

    VAR_9 = FUNC_0 (VAR_4->mmgr, VAR_8->user_key, VAR_3);
    if (!VAR_9)
        return FUNC_8 (VAR_4->error);

    if ((VAR_7 = FUNC_1 (VAR_4, "U", VAR_9)) != VAR_2)
        return VAR_7;

    VAR_7 += FUNC_2 (VAR_4, "Filter", "Standard");

    if (VAR_8->mode == VAR_0) {
        VAR_7 += FUNC_3 (VAR_4, "V", 1);
        VAR_7 += FUNC_3 (VAR_4, "R", 2);
    } else if (VAR_8->mode == VAR_1) {
        VAR_7 += FUNC_3 (VAR_4, "V", 2);
        VAR_7 += FUNC_3 (VAR_4, "R", 3);
        VAR_7 += FUNC_3 (VAR_4, "Length", VAR_8->key_len * 8);
    }

    VAR_7 += FUNC_3 (VAR_4, "P", VAR_8->permission);

    if (VAR_7 != VAR_2)
        return FUNC_8 (VAR_4->error);

    return VAR_2;
}
