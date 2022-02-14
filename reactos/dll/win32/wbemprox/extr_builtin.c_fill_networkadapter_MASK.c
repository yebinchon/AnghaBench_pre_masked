
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_networkadapter {int physicaladapter; int speed; int pnpdevice_id; int netconnection_status; void* name; int manufacturer; int mac_address; int interface_index; int index; void* device_id; int adaptertype; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int IfIndex; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {scalar_t__ IfType; char* FriendlyName; int OperStatus; int PhysicalAddressLength; int PhysicalAddress; TYPE_2__ u; struct TYPE_9__* Next; } ;
typedef TYPE_3__ IP_ADAPTER_ADDRESSES ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *,TYPE_3__*,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (struct table*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (struct table*,scalar_t__,struct expr const*,int*) ;
 int VAR_6 ;
 int FUNC_10 (struct table*,scalar_t__,int) ;
 int FUNC_11 (char*,char const*,int ) ;

__attribute__((used)) static enum fill_status FUNC_12( struct table *VAR_7, const struct expr *VAR_8 )
{
    static const WCHAR VAR_9[] = {'%','u',0};
    WCHAR VAR_10[11];
    struct record_networkadapter *VAR_11;
    IP_ADAPTER_ADDRESSES *VAR_12, *VAR_13;
    UINT VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
    DWORD VAR_17 = 0, VAR_18;
    int VAR_19;
    enum fill_status VAR_20 = VAR_3;

    VAR_18 = FUNC_0( VAR_0, 0, ((void*)0), ((void*)0), &VAR_17 );
    if (VAR_18 != VAR_1) return VAR_2;

    if (!(VAR_13 = FUNC_6( VAR_17 ))) return VAR_2;
    if (FUNC_0( VAR_0, 0, ((void*)0), VAR_13, &VAR_17 ))
    {
        FUNC_7( VAR_13 );
        return VAR_2;
    }
    for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->Next)
    {
        if (VAR_12->IfType != VAR_4) VAR_16++;
    }
    if (!FUNC_10( VAR_7, VAR_16, sizeof(*VAR_11) ))
    {
        FUNC_7( VAR_13 );
        return VAR_2;
    }
    for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->Next)
    {
        if (VAR_12->IfType == VAR_4) continue;

        VAR_11 = (struct record_networkadapter *)(VAR_7->data + VAR_15);
        FUNC_11( VAR_10, VAR_9, VAR_12->u.s.IfIndex );
        VAR_11->adaptertype = FUNC_3( VAR_12->IfType, &VAR_19 );
        VAR_11->device_id = FUNC_8( VAR_10 );
        VAR_11->index = VAR_12->u.s.IfIndex;
        VAR_11->interface_index = VAR_12->u.s.IfIndex;
        VAR_11->mac_address = FUNC_5( VAR_12->PhysicalAddress, VAR_12->PhysicalAddressLength );
        VAR_11->manufacturer = VAR_5;
        VAR_11->name = FUNC_8( VAR_12->FriendlyName );
        VAR_11->netconnection_status = FUNC_4( VAR_12->OperStatus );
        VAR_11->physicaladapter = VAR_19;
        VAR_11->pnpdevice_id = VAR_6;
        VAR_11->speed = 1000000;
        if (!FUNC_9( VAR_7, VAR_14, VAR_8, &VAR_20 ))
        {
            FUNC_2( VAR_7, VAR_14 );
            continue;
        }
        VAR_15 += sizeof(*VAR_11);
        VAR_14++;
    }
    FUNC_1("created %u rows\n", VAR_14);
    VAR_7->num_rows = VAR_14;

    FUNC_7( VAR_13 );
    return VAR_20;
}
