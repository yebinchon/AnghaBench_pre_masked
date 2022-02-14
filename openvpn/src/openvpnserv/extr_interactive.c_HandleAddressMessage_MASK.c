
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int * undo_lists_t ;
struct TYPE_15__ {int index; int name; } ;
struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_16__ {TYPE_2__ iface; scalar_t__ prefix_len; int address; int family; TYPE_1__ header; } ;
typedef TYPE_3__ address_message_t ;
typedef scalar_t__ UINT8 ;
struct TYPE_17__ {int InterfaceIndex; int InterfaceLuid; scalar_t__ OnLinkPrefixLength; int Address; } ;
typedef TYPE_4__* PMIB_UNICASTIPADDRESS_ROW ;
typedef int NET_LUID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 TYPE_4__* FUNC_5 (int *,int ,TYPE_4__*) ;
 size_t VAR_2 ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static DWORD
FUNC_9(address_message_t *VAR_4, undo_lists_t *VAR_5)
{
    DWORD VAR_6;
    PMIB_UNICASTIPADDRESS_ROW VAR_7;
    BOOL VAR_8 = VAR_4->header.type == VAR_3;

    VAR_7 = FUNC_7(sizeof(*VAR_7));
    if (VAR_7 == ((void*)0))
    {
        return VAR_1;
    }

    FUNC_3(VAR_7);
    VAR_7->Address = FUNC_8(VAR_4->family, &VAR_4->address);
    VAR_7->OnLinkPrefixLength = (UINT8) VAR_4->prefix_len;

    if (VAR_4->iface.index != -1)
    {
        VAR_7->InterfaceIndex = VAR_4->iface.index;
    }
    else
    {
        NET_LUID VAR_9;
        VAR_6 = FUNC_4(VAR_4->iface.name, &VAR_9);
        if (VAR_6)
        {
            goto out;
        }
        VAR_7->InterfaceLuid = VAR_9;
    }

    if (VAR_8)
    {
        VAR_6 = FUNC_1(VAR_7);
        if (VAR_6)
        {
            goto out;
        }

        VAR_6 = FUNC_0(&(*VAR_5)[VAR_2], VAR_7);
        if (VAR_6)
        {
            FUNC_2(VAR_7);
        }
    }
    else
    {
        VAR_6 = FUNC_2(VAR_7);
        if (VAR_6)
        {
            goto out;
        }

        FUNC_6(FUNC_5(&(*VAR_5)[VAR_2], VAR_0, VAR_7));
    }

out:
    if (!VAR_8 || VAR_6)
    {
        FUNC_6(VAR_7);
    }

    return VAR_6;
}
