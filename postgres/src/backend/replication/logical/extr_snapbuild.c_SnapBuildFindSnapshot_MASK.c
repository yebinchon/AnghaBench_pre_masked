
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ oldestRunningXid; scalar_t__ nextXid; int xcnt; } ;
typedef TYPE_1__ xl_running_xacts ;
typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_10__ {scalar_t__ initial_xmin_horizon; int start_decoding_at; scalar_t__ xmin; scalar_t__ xmax; scalar_t__ state; int building_full_snapshot; } ;
typedef TYPE_2__ SnapBuild ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,scalar_t__,scalar_t__) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (char*,int ,int ) ;

__attribute__((used)) static bool
FUNC_13(SnapBuild *VAR_8, XLogRecPtr VAR_9, xl_running_xacts *VAR_10)
{
 if (FUNC_6(VAR_8->initial_xmin_horizon) &&
  FUNC_1(VAR_10->oldestRunningXid,
         VAR_8->initial_xmin_horizon))
 {
  FUNC_8(VAR_0,
    (FUNC_12("skipping snapshot at %X/%X while building logical decoding snapshot, xmin horizon too low",
         (uint32) (VAR_9 >> 32), (uint32) VAR_9),
     FUNC_10("initial xmin horizon of %u vs the snapshot's %u",
         VAR_8->initial_xmin_horizon, VAR_10->oldestRunningXid)));


  FUNC_5(VAR_10, VAR_8->initial_xmin_horizon);

  return 1;
 }
 if (VAR_10->oldestRunningXid == VAR_10->nextXid)
 {
  if (VAR_8->start_decoding_at == VAR_2 ||
   VAR_8->start_decoding_at <= VAR_9)

   VAR_8->start_decoding_at = VAR_9 + 1;


  VAR_8->xmin = VAR_10->nextXid;
  VAR_8->xmax = VAR_10->nextXid;


  FUNC_0(FUNC_6(VAR_8->xmin));
  FUNC_0(FUNC_6(VAR_8->xmax));

  VAR_8->state = VAR_5;
  FUNC_4(VAR_8, VAR_1);

  FUNC_8(VAR_3,
    (FUNC_11("logical decoding found consistent point at %X/%X",
      (uint32) (VAR_9 >> 32), (uint32) VAR_9),
     FUNC_9("There are no running transactions.")));

  return 0;
 }

 else if (!VAR_8->building_full_snapshot &&
    FUNC_3(VAR_8, VAR_9))
 {

  return 0;
 }
 else if (VAR_8->state == VAR_7)
 {
  VAR_8->state = VAR_4;
  FUNC_4(VAR_8, VAR_10->nextXid);






  VAR_8->xmin = VAR_10->nextXid;
  VAR_8->xmax = VAR_10->nextXid;


  FUNC_0(FUNC_6(VAR_8->xmin));
  FUNC_0(FUNC_6(VAR_8->xmax));

  FUNC_8(VAR_3,
    (FUNC_11("logical decoding found initial starting point at %X/%X",
      (uint32) (VAR_9 >> 32), (uint32) VAR_9),
     FUNC_9("Waiting for transactions (approximately %d) older than %u to end.",
         VAR_10->xcnt, VAR_10->nextXid)));

  FUNC_5(VAR_10, VAR_10->nextXid);
 }
 else if (VAR_8->state == VAR_4 &&
    FUNC_7(FUNC_2(VAR_8),
             VAR_10->oldestRunningXid))
 {
  VAR_8->state = VAR_6;
  FUNC_4(VAR_8, VAR_10->nextXid);

  FUNC_8(VAR_3,
    (FUNC_11("logical decoding found initial consistent point at %X/%X",
      (uint32) (VAR_9 >> 32), (uint32) VAR_9),
     FUNC_9("Waiting for transactions (approximately %d) older than %u to end.",
         VAR_10->xcnt, VAR_10->nextXid)));

  FUNC_5(VAR_10, VAR_10->nextXid);
 }
 else if (VAR_8->state == VAR_6 &&
    FUNC_7(FUNC_2(VAR_8),
             VAR_10->oldestRunningXid))
 {
  VAR_8->state = VAR_5;
  FUNC_4(VAR_8, VAR_1);

  FUNC_8(VAR_3,
    (FUNC_11("logical decoding found consistent point at %X/%X",
      (uint32) (VAR_9 >> 32), (uint32) VAR_9),
     FUNC_9("There are no old transactions anymore.")));
 }






 return 1;

}
