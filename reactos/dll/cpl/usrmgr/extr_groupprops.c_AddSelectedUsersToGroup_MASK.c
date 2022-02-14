
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * lgrmi3_domainandname; } ;
struct TYPE_4__ {int szGroupName; } ;
typedef int TCHAR ;
typedef TYPE_1__* PGENERAL_GROUP_DATA ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;
typedef TYPE_2__ LOCALGROUP_MEMBERS_INFO_3 ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int *,int ,int,int ,int) ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_10(HWND VAR_9,
                        PGENERAL_GROUP_DATA VAR_10)
{
    HWND VAR_11;
    INT VAR_12;
    INT VAR_13;
    TCHAR VAR_14[VAR_8];
    BOOL VAR_15 = VAR_1;
    LOCALGROUP_MEMBERS_INFO_3 VAR_16;
    NET_API_STATUS VAR_17;

    VAR_11 = FUNC_1(VAR_9, VAR_2);

    VAR_12 = FUNC_4(VAR_11);
    if (VAR_12 > 0)
    {
        VAR_13 = FUNC_3(VAR_11, -1, VAR_3);
        while (VAR_13 != -1)
        {

            FUNC_2(VAR_11,
                                 VAR_13, 0,
                                 VAR_14,
                                 VAR_8);

            FUNC_0(FUNC_8("Selected user: %s"), VAR_14);

            VAR_16.lgrmi3_domainandname = VAR_14;

            VAR_17 = FUNC_6(((void*)0), VAR_10->szGroupName, 3,
                                             (LPBYTE)&VAR_16, 1);
            if (VAR_17 != VAR_6 && VAR_17 != VAR_0)
            {
                TCHAR VAR_18[256];
                FUNC_9(VAR_18, FUNC_7("Error: %u"), VAR_17);
                FUNC_5(((void*)0), VAR_18, FUNC_7("NetLocalGroupAddMembers"), VAR_4 | VAR_5);
            }
            else
            {
                VAR_15 = VAR_7;
            }

            VAR_13 = FUNC_3(VAR_11, VAR_13, VAR_3);
        }
    }

    return VAR_15;
}
