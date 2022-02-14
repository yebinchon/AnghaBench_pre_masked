
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int mode_t ;
struct TYPE_11__ {int is_program; int filename; int * copy_file; int copycontext; } ;
struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int RawStmt ;
typedef int ParseState ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int List ;
typedef TYPE_3__* CopyState ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int *,int,TYPE_2__*,int *,int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int VAR_15 ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,struct stat*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char const*) ;
 int * VAR_16 ;
 int FUNC_19 (int) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static CopyState
FUNC_20(ParseState *VAR_18,
   Relation VAR_19,
   RawStmt *VAR_20,
   Oid VAR_21,
   const char *VAR_22,
   bool VAR_23,
   List *VAR_24,
   List *VAR_25)
{
 CopyState VAR_26;
 bool VAR_27 = (VAR_22 == ((void*)0));
 MemoryContext VAR_28;

 if (VAR_19 != ((void*)0) && VAR_19->rd_rel->relkind != VAR_10)
 {
  if (VAR_19->rd_rel->relkind == VAR_12)
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_14("cannot copy from view \"%s\"",
       FUNC_8(VAR_19)),
      FUNC_13("Try the COPY (SELECT ...) TO variant.")));
  else if (VAR_19->rd_rel->relkind == VAR_8)
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_14("cannot copy from materialized view \"%s\"",
       FUNC_8(VAR_19)),
      FUNC_13("Try the COPY (SELECT ...) TO variant.")));
  else if (VAR_19->rd_rel->relkind == VAR_7)
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_14("cannot copy from foreign table \"%s\"",
       FUNC_8(VAR_19)),
      FUNC_13("Try the COPY (SELECT ...) TO variant.")));
  else if (VAR_19->rd_rel->relkind == VAR_11)
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_14("cannot copy from sequence \"%s\"",
       FUNC_8(VAR_19))));
  else if (VAR_19->rd_rel->relkind == VAR_9)
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_14("cannot copy from partitioned table \"%s\"",
       FUNC_8(VAR_19)),
      FUNC_13("Try the COPY (SELECT ...) TO variant.")));
  else
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_14("cannot copy from non-table relation \"%s\"",
       FUNC_8(VAR_19))));
 }

 VAR_26 = FUNC_2(VAR_18, 0, VAR_19, VAR_20, VAR_21, VAR_24,
        VAR_25);
 VAR_28 = FUNC_3(VAR_26->copycontext);

 if (VAR_27)
 {
  FUNC_1(!VAR_23);
  if (VAR_17 != VAR_0)
   VAR_26->copy_file = VAR_16;
 }
 else
 {
  VAR_26->filename = FUNC_18(VAR_22);
  VAR_26->is_program = VAR_23;

  if (VAR_23)
  {
   VAR_26->copy_file = FUNC_4(VAR_26->filename, VAR_6);
   if (VAR_26->copy_file == ((void*)0))
    FUNC_10(VAR_5,
      (FUNC_12(),
       FUNC_14("could not execute command \"%s\": %m",
        VAR_26->filename)));
  }
  else
  {
   mode_t VAR_29;
   struct stat VAR_30;





   if (!FUNC_17(VAR_22))
    FUNC_10(VAR_5,
      (FUNC_11(VAR_3),
       FUNC_14("relative path not allowed for COPY to file")));

   VAR_29 = FUNC_19(VAR_13 | VAR_14);
   FUNC_7();
   {
    VAR_26->copy_file = FUNC_0(VAR_26->filename, VAR_6);
   }
   FUNC_6();
   {
    FUNC_19(VAR_29);
   }
   FUNC_5();
   if (VAR_26->copy_file == ((void*)0))
   {

    int VAR_31 = VAR_15;

    FUNC_10(VAR_5,
      (FUNC_12(),
       FUNC_14("could not open file \"%s\" for writing: %m",
        VAR_26->filename),
       (VAR_31 == VAR_2 || VAR_31 == VAR_1) ?
       FUNC_13("COPY TO instructs the PostgreSQL server process to write a file. "
         "You may want a client-side facility such as psql's \\copy.") : 0));
   }

   if (FUNC_16(FUNC_15(VAR_26->copy_file), &VAR_30))
    FUNC_10(VAR_5,
      (FUNC_12(),
       FUNC_14("could not stat file \"%s\": %m",
        VAR_26->filename)));

   if (FUNC_9(VAR_30.st_mode))
    FUNC_10(VAR_5,
      (FUNC_11(VAR_4),
       FUNC_14("\"%s\" is a directory", VAR_26->filename)));
  }
 }

 FUNC_3(VAR_28);

 return VAR_26;
}
