
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_12__ {int mask; int stateMask; int state; int szUrl; int szID; int iLink; } ;
struct TYPE_9__ {void* szID; void* szUrl; int state; } ;
struct TYPE_10__ {TYPE_1__ Link; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef int SYSLINK_INFO ;
typedef void* PWSTR ;
typedef TYPE_3__* PDOC_ITEM ;
typedef int LRESULT ;
typedef TYPE_4__ LITEM ;
typedef int BOOL ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,TYPE_3__*) ;
 int FUNC_5 (int const*,TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_9 (const SYSLINK_INFO *VAR_11, const LITEM *VAR_12)
{
    PDOC_ITEM VAR_13;
    int VAR_14;
    PWSTR VAR_15 = ((void*)0);
    PWSTR VAR_16 = ((void*)0);
    BOOL VAR_17 = VAR_0;

    if(!(VAR_12->mask & VAR_3) || !(VAR_12->mask & (VAR_1)))
    {
        FUNC_1("Invalid Flags!\n");
        return VAR_0;
    }

    VAR_13 = FUNC_3(VAR_11, VAR_12->iLink);
    if(VAR_13 == ((void*)0))
    {
        FUNC_1("Link %d couldn't be found\n", VAR_12->iLink);
        return VAR_0;
    }

    if(VAR_12->mask & VAR_2)
    {
        VAR_14 = FUNC_8(FUNC_7(VAR_12->szID), VAR_9 - 1);
        VAR_15 = FUNC_0((VAR_14 + 1) * sizeof(WCHAR));
        if(VAR_15)
        {
            FUNC_6(VAR_15, VAR_12->szID, VAR_14 + 1);
        }
        else
        {
            FUNC_1("Unable to allocate memory for link id\n");
            return VAR_0;
        }
    }

    if(VAR_12->mask & VAR_5)
    {
        VAR_14 = FUNC_8(FUNC_7(VAR_12->szUrl), VAR_8 - 1);
        VAR_16 = FUNC_0((VAR_14 + 1) * sizeof(WCHAR));
        if(VAR_16)
        {
            FUNC_6(VAR_16, VAR_12->szUrl, VAR_14 + 1);
        }
        else
        {
            FUNC_2(VAR_15);

            FUNC_1("Unable to allocate memory for link url\n");
            return VAR_0;
        }
    }

    if(VAR_12->mask & VAR_2)
    {
        FUNC_2(VAR_13->u.Link.szID);
        VAR_13->u.Link.szID = VAR_15;
    }

    if(VAR_12->mask & VAR_5)
    {
        FUNC_2(VAR_13->u.Link.szUrl);
        VAR_13->u.Link.szUrl = VAR_16;
    }

    if(VAR_12->mask & VAR_4)
    {
        UINT VAR_18 = VAR_13->u.Link.state;

        VAR_13->u.Link.state &= ~(VAR_12->stateMask & VAR_7);

        VAR_13->u.Link.state |= (VAR_12->state & VAR_12->stateMask) & VAR_7;
        VAR_17 = (VAR_18 != VAR_13->u.Link.state);


        FUNC_5(VAR_11, ((VAR_13->u.Link.state & VAR_6) ? VAR_13 : ((void*)0)));
    }

    if(VAR_17)
    {
        FUNC_4(VAR_11, VAR_13);
    }

    return VAR_10;
}
