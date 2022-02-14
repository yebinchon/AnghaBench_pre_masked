
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_5__ {size_t tableSize; TYPE_1__* table; } ;
struct TYPE_4__ {scalar_t__ transport_id; scalar_t__ transport; } ;
typedef TYPE_1__ NetBIOSAdapter ;


 int FUNC_0 (char*,...) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static NetBIOSAdapter *FUNC_1(UCHAR VAR_1)
{
    NetBIOSAdapter *VAR_2 = ((void*)0);

    FUNC_0(": lana %d, num allocated adapters %d\n", VAR_1, VAR_0.tableSize);
    if (VAR_1 < VAR_0.tableSize && VAR_0.table[VAR_1].transport_id != 0
     && VAR_0.table[VAR_1].transport)
        VAR_2 = &VAR_0.table[VAR_1];
    FUNC_0("returning %p\n", VAR_2);
    return VAR_2;
}
