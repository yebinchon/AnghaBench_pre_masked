
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xl_heap_freeze_tuple ;
struct TYPE_2__ {int ntuples; int cutoff_xid; } ;
typedef TYPE_1__ xl_heap_freeze_page ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int Relation ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int ) ;

XLogRecPtr
FUNC_7(Relation VAR_4, Buffer VAR_5, TransactionId VAR_6,
    xl_heap_freeze_tuple *VAR_7, int VAR_8)
{
 xl_heap_freeze_page VAR_9;
 XLogRecPtr VAR_10;


 FUNC_0(FUNC_1(VAR_4));

 FUNC_0(VAR_8 > 0);

 VAR_9.cutoff_xid = VAR_6;
 VAR_9.ntuples = VAR_8;

 FUNC_2();
 FUNC_6((char *) &VAR_9, VAR_2);






 FUNC_5(0, VAR_5, VAR_0);
 FUNC_4(0, (char *) VAR_7,
      VAR_8 * sizeof(xl_heap_freeze_tuple));

 VAR_10 = FUNC_3(VAR_1, VAR_3);

 return VAR_10;
}
