
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int grand_totals ;
struct TYPE_4__ {scalar_t__ freespace; scalar_t__ totalspace; int freechunks; int nblocks; } ;
typedef TYPE_1__ MemoryContextCounters ;
typedef int MemoryContext ;


 int FUNC_0 (int ,int ,int,int,TYPE_1__*) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_0 ;

void
FUNC_3(MemoryContext VAR_1, int VAR_2)
{
 MemoryContextCounters VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 FUNC_0(VAR_1, 0, 1, VAR_2, &VAR_3);

 FUNC_1(VAR_0,
   "Grand total: %zu bytes in %d blocks; %zu free (%d chunks); %zu used\n",
   VAR_3.totalspace, VAR_3.nblocks,
   VAR_3.freespace, VAR_3.freechunks,
   VAR_3.totalspace - VAR_3.freespace);
}
