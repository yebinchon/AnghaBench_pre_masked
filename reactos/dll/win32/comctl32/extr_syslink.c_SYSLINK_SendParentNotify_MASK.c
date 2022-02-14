
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int szUrl; int szID; } ;
struct TYPE_11__ {TYPE_1__ Link; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
struct TYPE_13__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_12__ {int iLink; scalar_t__* szUrl; scalar_t__* szID; scalar_t__ stateMask; scalar_t__ state; scalar_t__ mask; } ;
struct TYPE_15__ {TYPE_4__ hdr; TYPE_3__ item; } ;
struct TYPE_14__ {int Notify; int Self; } ;
typedef TYPE_5__ SYSLINK_INFO ;
typedef TYPE_6__ NMLINK ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_7__ DOC_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static LRESULT FUNC_3 (const SYSLINK_INFO *VAR_2, UINT VAR_3, const DOC_ITEM *VAR_4, int VAR_5)
{
    NMLINK VAR_6;

    VAR_6.hdr.hwndFrom = VAR_2->Self;
    VAR_6.hdr.idFrom = FUNC_0(VAR_2->Self, VAR_0);
    VAR_6.hdr.code = VAR_3;

    VAR_6.item.mask = 0;
    VAR_6.item.iLink = VAR_5;
    VAR_6.item.state = 0;
    VAR_6.item.stateMask = 0;
    if(VAR_4->u.Link.szID)
    {
        FUNC_2(VAR_6.item.szID, VAR_4->u.Link.szID);
    }
    else
    {
        VAR_6.item.szID[0] = 0;
    }
    if(VAR_4->u.Link.szUrl)
    {
        FUNC_2(VAR_6.item.szUrl, VAR_4->u.Link.szUrl);
    }
    else
    {
        VAR_6.item.szUrl[0] = 0;
    }

    return FUNC_1(VAR_2->Notify, VAR_1, VAR_6.hdr.idFrom, (LPARAM)&VAR_6);
}
