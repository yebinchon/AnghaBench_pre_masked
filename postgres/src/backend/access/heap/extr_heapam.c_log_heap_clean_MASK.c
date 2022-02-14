
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nredirected; int ndead; int latestRemovedXid; } ;
typedef TYPE_1__ xl_heap_clean ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
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
FUNC_7(Relation VAR_4, Buffer VAR_5,
      OffsetNumber *VAR_6, int VAR_7,
      OffsetNumber *VAR_8, int VAR_9,
      OffsetNumber *VAR_10, int VAR_11,
      TransactionId VAR_12)
{
 xl_heap_clean VAR_13;
 XLogRecPtr VAR_14;


 FUNC_0(FUNC_1(VAR_4));

 VAR_13.latestRemovedXid = VAR_12;
 VAR_13.nredirected = VAR_7;
 VAR_13.ndead = VAR_9;

 FUNC_2();
 FUNC_6((char *) &VAR_13, VAR_2);

 FUNC_5(0, VAR_5, VAR_0);
 if (VAR_7 > 0)
  FUNC_4(0, (char *) VAR_6,
       VAR_7 * sizeof(OffsetNumber) * 2);

 if (VAR_9 > 0)
  FUNC_4(0, (char *) VAR_8,
       VAR_9 * sizeof(OffsetNumber));

 if (VAR_11 > 0)
  FUNC_4(0, (char *) VAR_10,
       VAR_11 * sizeof(OffsetNumber));

 VAR_14 = FUNC_3(VAR_1, VAR_3);

 return VAR_14;
}
