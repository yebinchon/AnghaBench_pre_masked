
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int downlinkOffset; int deleteXid; } ;
typedef TYPE_1__ gistxlogPageDelete ;
typedef int XLogRecPtr ;
typedef int OffsetNumber ;
typedef int FullTransactionId ;
typedef int Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ) ;

XLogRecPtr
FUNC_4(Buffer VAR_4, FullTransactionId VAR_5,
       Buffer VAR_6, OffsetNumber VAR_7)
{
 gistxlogPageDelete VAR_8;
 XLogRecPtr VAR_9;

 VAR_8.deleteXid = VAR_5;
 VAR_8.downlinkOffset = VAR_7;

 FUNC_0();
 FUNC_3((char *) &VAR_8, VAR_2);

 FUNC_2(0, VAR_4, VAR_0);
 FUNC_2(1, VAR_6, VAR_0);

 VAR_9 = FUNC_1(VAR_1, VAR_3);

 return VAR_9;
}
