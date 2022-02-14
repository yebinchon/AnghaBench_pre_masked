
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_networkadapterconfig {int dhcpenabled; int ipconnectionmetric; int ipenabled; int index; int settingid; int mac_address; int ipsubnet; int ipaddress; int dnsserversearchorder; int dnshostname; int description; int defaultipgateway; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int IfIndex; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {scalar_t__ IfType; int PhysicalAddressLength; int PhysicalAddress; int FirstUnicastAddress; TYPE_2__ u; int FirstDnsServerAddress; int Description; int FirstGatewayAddress; struct TYPE_9__* Next; } ;
typedef TYPE_3__ IP_ADAPTER_ADDRESSES ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *,TYPE_3__*,scalar_t__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct table*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct table*,scalar_t__,struct expr const*,int*) ;
 int FUNC_14 (struct table*,scalar_t__,int) ;

__attribute__((used)) static enum fill_status FUNC_15( struct table *VAR_6, const struct expr *VAR_7 )
{
    struct record_networkadapterconfig *VAR_8;
    IP_ADAPTER_ADDRESSES *VAR_9, *VAR_10;
    UINT VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
    DWORD VAR_14 = 0, VAR_15;
    enum fill_status VAR_16 = VAR_3;

    VAR_15 = FUNC_0( VAR_0, VAR_4, ((void*)0), ((void*)0), &VAR_14 );
    if (VAR_15 != VAR_1) return VAR_2;

    if (!(VAR_10 = FUNC_10( VAR_14 ))) return VAR_2;
    if (FUNC_0( VAR_0, VAR_4, ((void*)0), VAR_10, &VAR_14 ))
    {
        FUNC_11( VAR_10 );
        return VAR_2;
    }
    for (VAR_9 = VAR_10; VAR_9; VAR_9 = VAR_9->Next)
    {
        if (VAR_9->IfType != VAR_5) VAR_13++;
    }
    if (!FUNC_14( VAR_6, VAR_13, sizeof(*VAR_8) ))
    {
        FUNC_11( VAR_10 );
        return VAR_2;
    }
    for (VAR_9 = VAR_10; VAR_9; VAR_9 = VAR_9->Next)
    {
        if (VAR_9->IfType == VAR_5) continue;

        VAR_8 = (struct record_networkadapterconfig *)(VAR_6->data + VAR_12);
        VAR_8->defaultipgateway = FUNC_3( VAR_9->FirstGatewayAddress );
        VAR_8->description = FUNC_12( VAR_9->Description );
        VAR_8->dhcpenabled = -1;
        VAR_8->dnshostname = FUNC_4( VAR_9->FirstUnicastAddress );
        VAR_8->dnsserversearchorder = FUNC_5( VAR_9->FirstDnsServerAddress );
        VAR_8->index = VAR_9->u.s.IfIndex;

        VAR_8->ipaddress = FUNC_6( VAR_9->FirstUnicastAddress );

        VAR_8->ipconnectionmetric = 20;
        VAR_8->ipenabled = -1;

        VAR_8->ipsubnet = FUNC_7( VAR_9->FirstUnicastAddress );

        VAR_8->mac_address = FUNC_8( VAR_9->PhysicalAddress, VAR_9->PhysicalAddressLength );
        VAR_8->settingid = FUNC_9( VAR_8->index );
        if (!FUNC_13( VAR_6, VAR_11, VAR_7, &VAR_16 ))
        {
            FUNC_2( VAR_6, VAR_11 );
            continue;
        }
        VAR_12 += sizeof(*VAR_8);
        VAR_11++;
    }
    FUNC_1("created %u rows\n", VAR_11);
    VAR_6->num_rows = VAR_11;

    FUNC_11( VAR_10 );
    return VAR_16;
}
