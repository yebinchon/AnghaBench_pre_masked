
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogSegNo ;
struct TYPE_3__ {scalar_t__ first_lsn; scalar_t__ final_lsn; int xid; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(ReorderBuffer *VAR_7, ReorderBufferTXN *VAR_8)
{
 XLogSegNo VAR_9;
 XLogSegNo VAR_10;
 XLogSegNo VAR_11;

 FUNC_0(VAR_8->first_lsn != VAR_2);
 FUNC_0(VAR_8->final_lsn != VAR_2);

 FUNC_2(VAR_8->first_lsn, VAR_9, VAR_6);
 FUNC_2(VAR_8->final_lsn, VAR_11, VAR_6);


 for (VAR_10 = VAR_9; VAR_10 <= VAR_11; VAR_10++)
 {
  char VAR_12[VAR_3];

  FUNC_1(VAR_12, VAR_4, VAR_8->xid, VAR_10);
  if (FUNC_6(VAR_12) != 0 && VAR_5 != VAR_0)
   FUNC_3(VAR_1,
     (FUNC_4(),
      FUNC_5("could not remove file \"%s\": %m", VAR_12)));
 }
}
