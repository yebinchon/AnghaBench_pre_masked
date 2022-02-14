
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int latestRemovedFullXid; int block; int node; } ;
typedef TYPE_1__ gistxlogPageReuse ;
struct TYPE_5__ {int rd_node; } ;
typedef TYPE_2__* Relation ;
typedef int FullTransactionId ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(Relation VAR_3, BlockNumber VAR_4, FullTransactionId VAR_5)
{
 gistxlogPageReuse VAR_6;
 VAR_6.node = VAR_3->rd_node;
 VAR_6.block = VAR_4;
 VAR_6.latestRemovedFullXid = VAR_5;

 FUNC_0();
 FUNC_2((char *) &VAR_6, VAR_1);

 FUNC_1(VAR_0, VAR_2);
}
