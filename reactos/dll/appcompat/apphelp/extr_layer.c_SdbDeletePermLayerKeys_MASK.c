
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_8__ {int Str; } ;
typedef TYPE_2__ SDB_TMP_STR ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;

BOOL FUNC_8(PCWSTR VAR_4, BOOL VAR_5)
{
    UNICODE_STRING VAR_6;
    SDB_TMP_STR VAR_7;
    HANDLE VAR_8;
    NTSTATUS VAR_9;

    if (!FUNC_7(&VAR_7, VAR_4))
        return VAR_0;

    VAR_9 = FUNC_6(&VAR_6, VAR_5, VAR_1, &VAR_8);
    if (FUNC_0(VAR_9))
    {
        VAR_9 = FUNC_2(VAR_8, &VAR_7.Str);
        if (!FUNC_0(VAR_9))
        {
            FUNC_3("Failed to delete value from Key \"%wZ\" Status 0x%lx\n", &VAR_6, VAR_9);

            if (VAR_9 == VAR_2)
                VAR_9 = VAR_3;
        }
        FUNC_1(VAR_8);
        FUNC_4(VAR_6.Buffer);
    }
    FUNC_5(&VAR_7);
    return FUNC_0(VAR_9);
}
