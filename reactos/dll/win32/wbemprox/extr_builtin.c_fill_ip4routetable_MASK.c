
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct table {size_t data; size_t num_rows; } ;
struct record_ip4routetable {void* nexthop; int interfaceindex; void* destination; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef size_t UINT ;
struct TYPE_7__ {size_t dwNumEntries; TYPE_1__* table; } ;
struct TYPE_6__ {int dwForwardNextHop; int dwForwardIfIndex; int dwForwardDest; } ;
typedef TYPE_2__ MIB_IPFORWARDTABLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,size_t*,int ) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (struct table*,size_t) ;
 void* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct table*,size_t,struct expr const*,int*) ;
 int FUNC_7 (size_t,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct table*,int ,int) ;

__attribute__((used)) static enum fill_status FUNC_10( struct table *VAR_4, const struct expr *VAR_5 )
{
    struct record_ip4routetable *VAR_6;
    UINT VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
    MIB_IPFORWARDTABLE *VAR_11;
    enum fill_status VAR_12 = VAR_2;

    if (FUNC_0( ((void*)0), &VAR_10, VAR_3 ) != VAR_0) return VAR_1;
    if (!(VAR_11 = FUNC_4( VAR_10 ))) return VAR_1;
    if (FUNC_0( VAR_11, &VAR_10, VAR_3 ))
    {
        FUNC_5( VAR_11 );
        return VAR_1;
    }
    if (!FUNC_9( VAR_4, FUNC_7(VAR_11->dwNumEntries, 1), sizeof(*VAR_6) ))
    {
        FUNC_5( VAR_11 );
        return VAR_1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_11->dwNumEntries; VAR_7++)
    {
        VAR_6 = (struct record_ip4routetable *)(VAR_4->data + VAR_9);

        VAR_6->destination = FUNC_3( FUNC_8(VAR_11->table[VAR_7].dwForwardDest) );
        VAR_6->interfaceindex = VAR_11->table[VAR_7].dwForwardIfIndex;
        VAR_6->nexthop = FUNC_3( FUNC_8(VAR_11->table[VAR_7].dwForwardNextHop) );

        if (!FUNC_6( VAR_4, VAR_8, VAR_5, &VAR_12 ))
        {
            FUNC_2( VAR_4, VAR_8 );
            continue;
        }
        VAR_9 += sizeof(*VAR_6);
        VAR_8++;
    }
    FUNC_1("created %u rows\n", VAR_8);
    VAR_4->num_rows = VAR_8;

    FUNC_5( VAR_11 );
    return VAR_12;
}
