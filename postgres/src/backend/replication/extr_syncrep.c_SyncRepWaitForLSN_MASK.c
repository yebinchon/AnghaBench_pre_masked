
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_4__ {scalar_t__ syncRepState; scalar_t__ waitLSN; int syncRepLinks; } ;
struct TYPE_3__ {scalar_t__* lsn; int sync_standbys_defined; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 () ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int ,int,int,int ) ;
 TYPE_1__* VAR_18 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int*) ;
 int FUNC_16 (char*,char const*,int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 () ;
 int FUNC_20 (char*,int) ;
 int FUNC_21 (char*,char*,int,int) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;

void
FUNC_22(XLogRecPtr VAR_21, bool VAR_22)
{
 char *VAR_23 = ((void*)0);
 const char *VAR_24;
 int VAR_25;






 FUNC_0(VAR_2 > 0);


 if (VAR_22)
  VAR_25 = VAR_13;
 else
  VAR_25 = FUNC_3(VAR_13, VAR_11);




 if (!FUNC_9())
  return;

 FUNC_0(FUNC_5(&(VAR_5->syncRepLinks)));
 FUNC_0(VAR_18 != ((void*)0));

 FUNC_1(VAR_12, VAR_3);
 FUNC_0(VAR_5->syncRepState == VAR_8);
 if (!VAR_18->sync_standbys_defined ||
  VAR_21 <= VAR_18->lsn[VAR_25])
 {
  FUNC_2(VAR_12);
  return;
 }





 VAR_5->waitLSN = VAR_21;
 VAR_5->syncRepState = VAR_9;
 FUNC_7(VAR_25);
 FUNC_0(FUNC_8(VAR_25));
 FUNC_2(VAR_12);


 if (VAR_19)
 {
  int VAR_26;

  VAR_24 = FUNC_15(&VAR_26);
  VAR_23 = (char *) FUNC_17(VAR_26 + 32 + 1);
  FUNC_16(VAR_23, VAR_24, VAR_26);
  FUNC_21(VAR_23 + VAR_26, " waiting for %X/%X",
    (uint32) (VAR_21 >> 32), (uint32) VAR_21);
  FUNC_20(VAR_23, 0);
  VAR_23[VAR_26] = '\0';
 }







 for (;;)
 {
  int VAR_27;


  FUNC_4(VAR_4);
  if (VAR_5->syncRepState == VAR_10)
   break;
  if (VAR_6)
  {
   FUNC_11(VAR_15,
     (FUNC_12(VAR_1),
      FUNC_14("canceling the wait for synchronous replication and terminating connection due to administrator command"),
      FUNC_13("The transaction has already committed locally, but might not have been replicated to the standby.")));
   VAR_20 = VAR_0;
   FUNC_6();
   break;
  }







  if (VAR_7)
  {
   VAR_7 = 0;
   FUNC_11(VAR_15,
     (FUNC_14("canceling wait for synchronous replication due to user request"),
      FUNC_13("The transaction has already committed locally, but might not have been replicated to the standby.")));
   FUNC_6();
   break;
  }





  VAR_27 = FUNC_10(VAR_4, VAR_16 | VAR_17, -1,
        VAR_14);





  if (VAR_27 & VAR_17)
  {
   VAR_6 = 1;
   VAR_20 = VAR_0;
   FUNC_6();
   break;
  }
 }
 FUNC_19();
 FUNC_0(FUNC_5(&(VAR_5->syncRepLinks)));
 VAR_5->syncRepState = VAR_8;
 VAR_5->waitLSN = 0;

 if (VAR_23)
 {

  FUNC_20(VAR_23, 0);
  FUNC_18(VAR_23);
 }
}
