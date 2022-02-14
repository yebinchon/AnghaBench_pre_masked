
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int latestRemovedXid; int node; } ;
typedef TYPE_1__ xl_heap_cleanup_info ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int RelFileNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;

XLogRecPtr
FUNC_3(RelFileNode VAR_3, TransactionId VAR_4)
{
 xl_heap_cleanup_info VAR_5;
 XLogRecPtr VAR_6;

 VAR_5.node = VAR_3;
 VAR_5.latestRemovedXid = VAR_4;

 FUNC_0();
 FUNC_2((char *) &VAR_5, VAR_1);

 VAR_6 = FUNC_1(VAR_0, VAR_2);

 return VAR_6;
}
