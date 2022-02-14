
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ usri1_user_id; int usri1_flags; scalar_t__ usri1_next_index; } ;
typedef int PVOID ;
typedef TYPE_1__* PNET_DISPLAY_USER ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int,scalar_t__,int,int ,scalar_t__*,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
    PNET_DISPLAY_USER VAR_9, VAR_10;
    DWORD VAR_11, VAR_12;
    DWORD VAR_13 = 0;
    BOOL VAR_14 = VAR_4;
    BOOL VAR_15 = VAR_4;

    do
    {
        VAR_11 = FUNC_2(
            ((void*)0), 1, VAR_13, 1000, VAR_5, &VAR_12,
            (PVOID *)&VAR_9);

        FUNC_0((VAR_11 == VAR_3) || (VAR_11 == VAR_2),
           "Information Retrieved\n");
        VAR_10 = VAR_9;
        for(; VAR_12 > 0; VAR_12--)
        {
            if (VAR_10->usri1_user_id == VAR_0)
            {
                FUNC_0(!VAR_14, "One admin user\n");
                FUNC_0(VAR_10->usri1_flags & VAR_8, "UF_SCRIPT flag is set\n");
                FUNC_0(VAR_10->usri1_flags & VAR_7, "UF_NORMAL_ACCOUNT flag is set\n");
                VAR_14 = VAR_6;
            }
            else if (VAR_10->usri1_user_id == VAR_1)
            {
                FUNC_0(!VAR_15, "One guest record\n");
                FUNC_0(VAR_10->usri1_flags & VAR_8, "UF_SCRIPT flag is set\n");
                FUNC_0(VAR_10->usri1_flags & VAR_7, "UF_NORMAL_ACCOUNT flag is set\n");
                VAR_15 = VAR_6;
            }

            VAR_13 = VAR_10->usri1_next_index;
            VAR_10++;
        }

        FUNC_1(VAR_9);
    } while (VAR_11 == VAR_2);

    FUNC_0(VAR_14, "Doesn't have 'Administrator' account\n");
}
