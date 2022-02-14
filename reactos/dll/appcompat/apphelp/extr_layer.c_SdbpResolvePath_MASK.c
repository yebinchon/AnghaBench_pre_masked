
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Buffer; } ;
struct TYPE_9__ {TYPE_1__ Str; } ;
typedef TYPE_2__* PSDB_TMP_STR ;
typedef int PCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

BOOL FUNC_5(PSDB_TMP_STR VAR_2, PCWSTR VAR_3)
{
    FUNC_3(VAR_2);
    if (!FUNC_2(VAR_3, VAR_2))
    {
        FUNC_1(VAR_2);
        return VAR_0;
    }
    if (FUNC_4(VAR_2->Str.Buffer))
    {
        return FUNC_0(VAR_2);
    }
    return VAR_1;
}
