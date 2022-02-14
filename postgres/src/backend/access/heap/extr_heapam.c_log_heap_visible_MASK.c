
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int cutoff_xid; } ;
typedef TYPE_1__ xl_heap_visible ;
typedef int uint8 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int RelFileNode ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,int ) ;

XLogRecPtr
FUNC_7(RelFileNode VAR_5, Buffer VAR_6, Buffer VAR_7,
     TransactionId VAR_8, uint8 VAR_9)
{
 xl_heap_visible VAR_10;
 XLogRecPtr VAR_11;
 uint8 VAR_12;

 FUNC_0(FUNC_1(VAR_6));
 FUNC_0(FUNC_1(VAR_7));

 VAR_10.cutoff_xid = VAR_8;
 VAR_10.flags = VAR_9;
 FUNC_2();
 FUNC_6((char *) &VAR_10, VAR_3);

 FUNC_5(0, VAR_7, 0);

 VAR_12 = VAR_1;
 if (!FUNC_3())
  VAR_12 |= VAR_0;
 FUNC_5(1, VAR_6, VAR_12);

 VAR_11 = FUNC_4(VAR_2, VAR_4);

 return VAR_11;
}
