
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_2__ {int tableSize; scalar_t__ table; } ;
typedef int NetBIOSAdapter ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static UCHAR FUNC_3(UCHAR VAR_4)
{
    UCHAR VAR_5;

    if (VAR_3.table)
        VAR_3.table = FUNC_2(FUNC_0(),
         VAR_0, VAR_3.table,
         VAR_4 * sizeof(NetBIOSAdapter));
    else
        VAR_3.table = FUNC_1(FUNC_0(),
         VAR_0, VAR_4 * sizeof(NetBIOSAdapter));
    if (VAR_3.table)
    {
        VAR_3.tableSize = VAR_4;
        VAR_5 = VAR_1;
    }
    else
        VAR_5 = VAR_2;
    return VAR_5;
}
