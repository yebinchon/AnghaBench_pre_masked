
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_6__ {scalar_t__ userid; scalar_t__ dbid; scalar_t__ queryid; } ;
typedef TYPE_1__ pgssHashKey ;
struct TYPE_7__ {TYPE_1__ key; } ;
typedef TYPE_2__ pgssEntry ;
struct TYPE_8__ {int lock; scalar_t__ extent; } ;
typedef scalar_t__ Oid ;
typedef int HASH_SEQ_STATUS ;
typedef int FILE ;


 int * FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 long FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_13 (int *,int ) ;
 TYPE_2__* FUNC_14 (int *) ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int FUNC_15 () ;

__attribute__((used)) static void
FUNC_16(Oid VAR_9, Oid VAR_10, uint64 VAR_11)
{
 HASH_SEQ_STATUS VAR_12;
 pgssEntry *VAR_13;
 FILE *VAR_14;
 long VAR_15;
 long VAR_16 = 0;
 pgssHashKey VAR_17;

 if (!VAR_7 || !VAR_8)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_8("pg_stat_statements must be loaded via shared_preload_libraries")));

 FUNC_2(VAR_7->lock, VAR_4);
 VAR_15 = FUNC_11(VAR_8);

 if (VAR_9 != 0 && VAR_10 != 0 && VAR_11 != FUNC_4(0))
 {

  VAR_17.userid = VAR_9;
  VAR_17.dbid = VAR_10;
  VAR_17.queryid = VAR_11;


  VAR_13 = (pgssEntry *) FUNC_12(VAR_8, &VAR_17, VAR_2, ((void*)0));
  if (VAR_13)
   VAR_16++;
 }
 else if (VAR_9 != 0 || VAR_10 != 0 || VAR_11 != FUNC_4(0))
 {

  FUNC_13(&VAR_12, VAR_8);
  while ((VAR_13 = FUNC_14(&VAR_12)) != ((void*)0))
  {
   if ((!VAR_9 || VAR_13->key.userid == VAR_9) &&
    (!VAR_10 || VAR_13->key.dbid == VAR_10) &&
    (!VAR_11 || VAR_13->key.queryid == VAR_11))
   {
    FUNC_12(VAR_8, &VAR_13->key, VAR_2, ((void*)0));
    VAR_16++;
   }
  }
 }
 else
 {

  FUNC_13(&VAR_12, VAR_8);
  while ((VAR_13 = FUNC_14(&VAR_12)) != ((void*)0))
  {
   FUNC_12(VAR_8, &VAR_13->key, VAR_2, ((void*)0));
   VAR_16++;
  }
 }


 if (VAR_15 != VAR_16)
  goto release_lock;





 VAR_14 = FUNC_0(VAR_5, VAR_6);
 if (VAR_14 == ((void*)0))
 {
  FUNC_5(VAR_3,
    (FUNC_7(),
     FUNC_8("could not create file \"%s\": %m",
      VAR_5)));
  goto done;
 }


 if (FUNC_10(FUNC_9(VAR_14), 0) != 0)
  FUNC_5(VAR_3,
    (FUNC_7(),
     FUNC_8("could not truncate file \"%s\": %m",
      VAR_5)));

 FUNC_1(VAR_14);

done:
 VAR_7->extent = 0;

 FUNC_15();

release_lock:
 FUNC_3(VAR_7->lock);
}
