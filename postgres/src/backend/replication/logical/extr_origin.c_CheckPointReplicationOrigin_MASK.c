
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ roident; int remote_lsn; } ;
typedef TYPE_1__ uint32 ;
typedef TYPE_1__ pg_crc32c ;
typedef int magic ;
typedef int disk_state ;
typedef int crc ;
typedef int XLogRecPtr ;
struct TYPE_14__ {scalar_t__ roident; int lock; int local_lsn; int remote_lsn; } ;
typedef TYPE_1__ ReplicationStateOnDisk ;
typedef TYPE_4__ ReplicationState ;


 int FUNC_0 (TYPE_1__,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char const*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*,char const*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char const*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 TYPE_4__* VAR_13 ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (int,TYPE_1__*,int) ;

void
FUNC_15(void)
{
 const char *VAR_14 = "pg_logical/replorigin_checkpoint.tmp";
 const char *VAR_15 = "pg_logical/replorigin_checkpoint";
 int VAR_16;
 int VAR_17;
 uint32 VAR_18 = VAR_9;
 pg_crc32c VAR_19;

 if (VAR_12 == 0)
  return;

 FUNC_3(VAR_19);


 if (FUNC_13(VAR_14) < 0 && VAR_11 != VAR_0)
  FUNC_9(VAR_7,
    (FUNC_10(),
     FUNC_11("could not remove file \"%s\": %m",
      VAR_14)));





 VAR_16 = FUNC_6(VAR_14,
         VAR_4 | VAR_5 | VAR_6 | VAR_8);
 if (VAR_16 < 0)
  FUNC_9(VAR_7,
    (FUNC_10(),
     FUNC_11("could not create file \"%s\": %m",
      VAR_14)));


 VAR_11 = 0;
 if ((FUNC_14(VAR_16, &VAR_18, sizeof(VAR_18))) != sizeof(VAR_18))
 {

  if (VAR_11 == 0)
   VAR_11 = VAR_1;
  FUNC_9(VAR_7,
    (FUNC_10(),
     FUNC_11("could not write to file \"%s\": %m",
      VAR_14)));
 }
 FUNC_0(VAR_19, &VAR_18, sizeof(VAR_18));


 FUNC_4(VAR_10, VAR_3);


 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
 {
  ReplicationStateOnDisk VAR_20;
  ReplicationState *VAR_21 = &VAR_13[VAR_17];
  XLogRecPtr VAR_22;

  if (VAR_21->roident == VAR_2)
   continue;


  FUNC_12(&VAR_20, 0, sizeof(VAR_20));

  FUNC_4(&VAR_21->lock, VAR_3);

  VAR_20.roident = VAR_21->roident;

  VAR_20.remote_lsn = VAR_21->remote_lsn;
  VAR_22 = VAR_21->local_lsn;

  FUNC_5(&VAR_21->lock);


  FUNC_7(VAR_22);

  VAR_11 = 0;
  if ((FUNC_14(VAR_16, &VAR_20, sizeof(VAR_20))) !=
   sizeof(VAR_20))
  {

   if (VAR_11 == 0)
    VAR_11 = VAR_1;
   FUNC_9(VAR_7,
     (FUNC_10(),
      FUNC_11("could not write to file \"%s\": %m",
       VAR_14)));
  }

  FUNC_0(VAR_19, &VAR_20, sizeof(VAR_20));
 }

 FUNC_5(VAR_10);


 FUNC_2(VAR_19);
 VAR_11 = 0;
 if ((FUNC_14(VAR_16, &VAR_19, sizeof(VAR_19))) != sizeof(VAR_19))
 {

  if (VAR_11 == 0)
   VAR_11 = VAR_1;
  FUNC_9(VAR_7,
    (FUNC_10(),
     FUNC_11("could not write to file \"%s\": %m",
      VAR_14)));
 }

 if (FUNC_1(VAR_16) != 0)
  FUNC_9(VAR_7,
    (FUNC_10(),
     FUNC_11("could not close file \"%s\": %m",
      VAR_14)));


 FUNC_8(VAR_14, VAR_15, VAR_7);
}
