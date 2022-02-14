
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* abID; } ;
struct TYPE_8__ {TYPE_1__ mkid; } ;
typedef TYPE_2__* LPITEMIDLIST ;
typedef scalar_t__ HRESULT ;
typedef int const GUID ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,int ,int ,...) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int,int *,int ,TYPE_2__**) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static void FUNC_7(int VAR_4, const GUID *VAR_5, const GUID *VAR_6)
{
    LPITEMIDLIST VAR_7;
    HRESULT VAR_8;

    if (!&FUNC_5) return;
    if (!VAR_5) return;

    VAR_7 = ((void*)0);
    VAR_8 = FUNC_5(((void*)0), VAR_4, ((void*)0), 0, &VAR_7);
    if (VAR_8 == VAR_2)
    {
        LPITEMIDLIST VAR_9 = FUNC_4(VAR_7);

        if (VAR_9 && (VAR_9->mkid.abID[0] == VAR_1 ||
         VAR_9->mkid.abID[0] == VAR_0))
        {
            GUID *VAR_10 = (GUID *)(VAR_9->mkid.abID + 2);

            if (!VAR_6)
             FUNC_3(FUNC_1(VAR_10, VAR_5),
              "%s: got GUID %s, expected %s\n", FUNC_2(VAR_4),
              FUNC_6(VAR_10), FUNC_6(VAR_5));
            else
             FUNC_3(FUNC_1(VAR_10, VAR_5) ||
              FUNC_1(VAR_10, VAR_6),
              "%s: got GUID %s, expected %s or %s\n", FUNC_2(VAR_4),
              FUNC_6(VAR_10), FUNC_6(VAR_5), FUNC_6(VAR_6));
        }
        FUNC_0(VAR_3, VAR_7);
    }
}
