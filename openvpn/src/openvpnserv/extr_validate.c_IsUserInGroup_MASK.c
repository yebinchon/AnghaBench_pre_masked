
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int lgrmi0_sid; } ;
struct TYPE_7__ {size_t GroupCount; TYPE_1__* Groups; } ;
struct TYPE_6__ {int Sid; } ;
typedef TYPE_2__* PTOKEN_GROUPS ;
typedef int PSID ;
typedef int LPBYTE ;
typedef TYPE_3__ LOCALGROUP_MEMBERS_INFO_0 ;
typedef int DWORD_PTR ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int const*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (int *,int const*,int ,int *,int ,size_t*,size_t*,int *) ;
 int VAR_6 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static BOOL
FUNC_8(PSID VAR_8, const PTOKEN_GROUPS VAR_9, const WCHAR *VAR_10)
{
    BOOL VAR_11 = VAR_1;
    DWORD_PTR VAR_12 = 0;
    DWORD VAR_13;
    BYTE VAR_14[VAR_6];
    int VAR_15 = 0;


    if (VAR_9 && FUNC_1(VAR_10, (PSID) VAR_14, FUNC_7(VAR_14)))
    {
        for (DWORD VAR_16 = 0; VAR_16 < VAR_9->GroupCount; ++VAR_16)
        {
            if (FUNC_0((PSID) VAR_14, VAR_9->Groups[VAR_16].Sid))
            {
                return VAR_7;
            }
        }
    }


    if (!VAR_8)
    {
        return VAR_1;
    }
    do
    {
        DWORD VAR_17, VAR_18;
        LOCALGROUP_MEMBERS_INFO_0 *VAR_19 = ((void*)0);
        VAR_13 = FUNC_4(((void*)0), VAR_10, 0, (LPBYTE *) &VAR_19,
                                      VAR_2, &VAR_17, &VAR_18, &VAR_12);
        if ((VAR_13 != VAR_5 && VAR_13 != VAR_0))
        {
            break;
        }

        for (DWORD VAR_20 = 0; VAR_20 < VAR_17 && !VAR_11; ++VAR_20)
        {
            VAR_11 = FUNC_0(VAR_19[VAR_20].lgrmi0_sid, VAR_8);
        }
        FUNC_3(VAR_19);

    } while (VAR_13 == VAR_0 && VAR_15++ < 100);

    if (VAR_13 != VAR_5 && VAR_13 != VAR_4)
    {
        FUNC_5(VAR_13);
        FUNC_2(VAR_3, FUNC_6("In NetLocalGroupGetMembers for group '%s'"), VAR_10);
    }

    return VAR_11;
}
