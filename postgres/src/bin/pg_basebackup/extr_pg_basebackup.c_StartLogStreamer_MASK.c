
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int statusdir ;
struct TYPE_5__ {int timeline; char* sysidentifier; int startptr; char* xlog; int bgconn; } ;
typedef TYPE_1__ logstreamer_param ;


 int FUNC_0 (int ,scalar_t__,int *,int,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int *,int ,void*,TYPE_1__*,int ,int *) ;
 int FUNC_7 (int ) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 () ;
 char VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,scalar_t__) ;
 TYPE_1__* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (char*,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_16 (char*,int,char*,char*,char*) ;
 int FUNC_17 (char*,char*,int*,int*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_18(char *VAR_17, uint32 VAR_18, char *VAR_19)
{
 logstreamer_param *VAR_20;
 uint32 VAR_21,
    VAR_22;
 char VAR_23[VAR_1];

 VAR_20 = FUNC_12(sizeof(logstreamer_param));
 VAR_20->timeline = VAR_18;
 VAR_20->sysidentifier = VAR_19;


 if (FUNC_17(VAR_17, "%X/%X", &VAR_21, &VAR_22) != 2)
 {
  FUNC_10("could not parse write-ahead log location \"%s\"",
      VAR_17);
  FUNC_8(1);
 }
 VAR_20->startptr = ((uint64) VAR_21) << 32 | VAR_22;

 VAR_20->startptr -= FUNC_5(VAR_20->startptr, VAR_4);



 if (FUNC_14(VAR_7) < 0)
 {
  FUNC_10("could not create pipe for background process: %m");
  FUNC_8(1);
 }



 VAR_20->bgconn = FUNC_1();
 if (!VAR_20->bgconn)

  FUNC_8(1);


 FUNC_16(VAR_20->xlog, sizeof(VAR_20->xlog), "%s/%s",
    VAR_5,
    FUNC_4(VAR_8) < VAR_2 ?
    "pg_xlog" : "pg_wal");


 if (FUNC_4(VAR_8) < VAR_3)
  VAR_15 = 0;




 if (VAR_15 && !VAR_14)
  VAR_14 = FUNC_15("pg_basebackup_%d", (int) FUNC_3(VAR_20->bgconn));
 if (VAR_15 || VAR_9)
 {
  if (!FUNC_0(VAR_20->bgconn, VAR_14, ((void*)0),
           VAR_15, 1, 1, 0))
   FUNC_8(1);

  if (VAR_16)
  {
   if (VAR_15)
    FUNC_11("created temporary replication slot \"%s\"",
       VAR_14);
   else
    FUNC_11("created replication slot \"%s\"",
       VAR_14);
  }
 }

 if (VAR_11 == 'p')
 {






  FUNC_16(VAR_23, sizeof(VAR_23), "%s/%s/archive_status",
     VAR_5,
     FUNC_4(VAR_8) < VAR_2 ?
     "pg_xlog" : "pg_wal");

  if (FUNC_13(VAR_23, VAR_13) != 0 && VAR_10 != VAR_0)
  {
   FUNC_10("could not create directory \"%s\": %m", VAR_23);
   FUNC_8(1);
  }
 }






 VAR_6 = FUNC_9();
 if (VAR_6 == 0)
 {

  FUNC_8(FUNC_2(VAR_20));
 }
 else if (VAR_6 < 0)
 {
  FUNC_10("could not create background process: %m");
  FUNC_8(1);
 }




 FUNC_7(VAR_12);
}
