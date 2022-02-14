
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ value; int error; int mmgr; } ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Binary ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__,int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;

HPDF_STATUS
FUNC_5 (HPDF_Binary VAR_3,
                       HPDF_BYTE *VAR_4,
                       HPDF_UINT VAR_5)
{
    if (VAR_5 > VAR_1)
        return FUNC_4 (VAR_3->error, VAR_0, 0);

    if (VAR_3->value) {
        FUNC_1 (VAR_3->mmgr, VAR_3->value);
        VAR_3->len = 0;
    }

    VAR_3->value = FUNC_2 (VAR_3->mmgr, VAR_5);
    if (!VAR_3->value)
        return FUNC_0 (VAR_3->error);

    FUNC_3 (VAR_3->value, VAR_4, VAR_5);
    VAR_3->len = VAR_5;

    return VAR_2;
}
