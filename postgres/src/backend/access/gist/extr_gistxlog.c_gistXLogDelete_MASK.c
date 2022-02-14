
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ntodelete; int latestRemovedXid; } ;
typedef TYPE_1__ gistxlogDelete ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int OffsetNumber ;
typedef int Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int) ;

XLogRecPtr
FUNC_4(Buffer VAR_4, OffsetNumber *VAR_5, int VAR_6,
      TransactionId VAR_7)
{
 gistxlogDelete VAR_8;
 XLogRecPtr VAR_9;

 VAR_8.latestRemovedXid = VAR_7;
 VAR_8.ntodelete = VAR_6;

 FUNC_0();
 FUNC_3((char *) &VAR_8, VAR_2);





 FUNC_3((char *) VAR_5, VAR_6 * sizeof(OffsetNumber));

 FUNC_2(0, VAR_4, VAR_0);

 VAR_9 = FUNC_1(VAR_1, VAR_3);

 return VAR_9;
}
