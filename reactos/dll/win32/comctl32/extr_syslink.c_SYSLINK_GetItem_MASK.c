
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int state; scalar_t__ szUrl; scalar_t__ szID; } ;
struct TYPE_11__ {TYPE_1__ Link; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
struct TYPE_13__ {int mask; int state; int stateMask; scalar_t__* szUrl; scalar_t__* szID; int iLink; } ;
struct TYPE_12__ {int HasFocus; } ;
typedef TYPE_3__ SYSLINK_INFO ;
typedef TYPE_4__* PLITEM ;
typedef TYPE_5__* PDOC_ITEM ;
typedef int LRESULT ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_1 (TYPE_3__ const*,int ) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_3 (const SYSLINK_INFO *VAR_8, PLITEM VAR_9)
{
    PDOC_ITEM VAR_10;

    if(!(VAR_9->mask & VAR_3) || !(VAR_9->mask & (VAR_1)))
    {
        FUNC_0("Invalid Flags!\n");
        return VAR_0;
    }

    VAR_10 = FUNC_1(VAR_8, VAR_9->iLink);
    if(VAR_10 == ((void*)0))
    {
        FUNC_0("Link %d couldn't be found\n", VAR_9->iLink);
        return VAR_0;
    }

    if(VAR_9->mask & VAR_4)
    {
        VAR_9->state = (VAR_10->u.Link.state & VAR_9->stateMask);
        if(!VAR_8->HasFocus)
        {

            VAR_9->state &= ~VAR_6;
        }
    }

    if(VAR_9->mask & VAR_2)
    {
        if(VAR_10->u.Link.szID)
        {
            FUNC_2(VAR_9->szID, VAR_10->u.Link.szID);
        }
        else
        {
            VAR_9->szID[0] = 0;
        }
    }

    if(VAR_9->mask & VAR_5)
    {
        if(VAR_10->u.Link.szUrl)
        {
            FUNC_2(VAR_9->szUrl, VAR_10->u.Link.szUrl);
        }
        else
        {
            VAR_9->szUrl[0] = 0;
        }
    }

    return VAR_7;
}
