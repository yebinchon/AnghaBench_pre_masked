
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * undo_lists_t ;
struct TYPE_17__ {int index; int name; } ;
struct TYPE_15__ {scalar_t__ type; } ;
struct TYPE_18__ {TYPE_3__ iface; int gateway; int family; scalar_t__ prefix_len; int prefix; int metric; TYPE_1__ header; } ;
typedef TYPE_4__ route_message_t ;
typedef scalar_t__ UINT8 ;
struct TYPE_16__ {scalar_t__ PrefixLength; void* Prefix; } ;
struct TYPE_19__ {int ValidLifetime; int PreferredLifetime; int InterfaceIndex; int InterfaceLuid; void* NextHop; TYPE_2__ DestinationPrefix; int Metric; int Protocol; } ;
typedef TYPE_5__* PMIB_IPFORWARD_ROW2 ;
typedef int NET_LUID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,TYPE_5__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_2 ;
 TYPE_5__* FUNC_4 (int *,int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_5__* FUNC_7 (int) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static DWORD
FUNC_10(route_message_t *VAR_5, undo_lists_t *VAR_6)
{
    DWORD VAR_7;
    PMIB_IPFORWARD_ROW2 VAR_8;
    BOOL VAR_9 = VAR_5->header.type == VAR_3;

    VAR_8 = FUNC_7(sizeof(*VAR_8));
    if (VAR_8 == ((void*)0))
    {
        return VAR_1;
    }

    FUNC_5(VAR_8, sizeof(*VAR_8));
    VAR_8->ValidLifetime = 0xffffffff;
    VAR_8->PreferredLifetime = 0xffffffff;
    VAR_8->Protocol = VAR_2;
    VAR_8->Metric = VAR_5->metric;
    VAR_8->DestinationPrefix.Prefix = FUNC_8(VAR_5->family, &VAR_5->prefix);
    VAR_8->DestinationPrefix.PrefixLength = (UINT8) VAR_5->prefix_len;
    VAR_8->NextHop = FUNC_8(VAR_5->family, &VAR_5->gateway);

    if (VAR_5->iface.index != -1)
    {
        VAR_8->InterfaceIndex = VAR_5->iface.index;
    }
    else if (FUNC_9(VAR_5->iface.name))
    {
        NET_LUID VAR_10;
        VAR_7 = FUNC_3(VAR_5->iface.name, &VAR_10);
        if (VAR_7)
        {
            goto out;
        }
        VAR_8->InterfaceLuid = VAR_10;
    }

    if (VAR_9)
    {
        VAR_7 = FUNC_1(VAR_8);
        if (VAR_7)
        {
            goto out;
        }

        VAR_7 = FUNC_0(&(*VAR_6)[VAR_4], VAR_8);
        if (VAR_7)
        {
            FUNC_2(VAR_8);
        }
    }
    else
    {
        VAR_7 = FUNC_2(VAR_8);
        if (VAR_7)
        {
            goto out;
        }

        FUNC_6(FUNC_4(&(*VAR_6)[VAR_4], VAR_0, VAR_8));
    }

out:
    if (!VAR_9 || VAR_7)
    {
        FUNC_6(VAR_8);
    }

    return VAR_7;
}
