
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int new_tid; int new_node; int old_tid; int old_node; } ;
struct TYPE_7__ {scalar_t__ cmin; scalar_t__ cmax; int combocid; } ;
struct TYPE_6__ {int tid; int relnode; } ;
typedef TYPE_1__ ReorderBufferTupleCidKey ;
typedef TYPE_2__ ReorderBufferTupleCidEnt ;
typedef int Oid ;
typedef TYPE_3__ LogicalRewriteMappingData ;
typedef int HTAB ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (int *,void*,int ,int*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,TYPE_3__*,int) ;
 int FUNC_12 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_13(HTAB *VAR_8, Oid VAR_9, const char *VAR_10)
{
 char VAR_11[VAR_4];
 int VAR_12;
 int VAR_13;
 LogicalRewriteMappingData VAR_14;

 FUNC_12(VAR_11, "pg_logical/mappings/%s", VAR_10);
 VAR_12 = FUNC_3(VAR_11, VAR_5 | VAR_6);
 if (VAR_12 < 0)
  FUNC_4(VAR_0,
    (FUNC_5(),
     FUNC_6("could not open file \"%s\": %m", VAR_11)));

 while (1)
 {
  ReorderBufferTupleCidKey VAR_15;
  ReorderBufferTupleCidEnt *VAR_16;
  ReorderBufferTupleCidEnt *VAR_17;
  bool VAR_18;


  FUNC_8(&VAR_15, 0, sizeof(ReorderBufferTupleCidKey));


  FUNC_10(VAR_7);
  VAR_13 = FUNC_11(VAR_12, &VAR_14, sizeof(LogicalRewriteMappingData));
  FUNC_9();

  if (VAR_13 < 0)
   FUNC_4(VAR_0,
     (FUNC_5(),
      FUNC_6("could not read file \"%s\": %m",
       VAR_11)));
  else if (VAR_13 == 0)
   break;
  else if (VAR_13 != sizeof(LogicalRewriteMappingData))
   FUNC_4(VAR_0,
     (FUNC_5(),
      FUNC_6("could not read from file \"%s\": read %d instead of %d bytes",
       VAR_11, VAR_13,
       (int32) sizeof(LogicalRewriteMappingData))));

  VAR_15.relnode = VAR_14.old_node;
  FUNC_2(&VAR_14.old_tid,
      &VAR_15.tid);


  VAR_16 = (ReorderBufferTupleCidEnt *)
   FUNC_7(VAR_8,
      (void *) &VAR_15,
      VAR_2,
      ((void*)0));


  if (!VAR_16)
   continue;

  VAR_15.relnode = VAR_14.new_node;
  FUNC_2(&VAR_14.new_tid,
      &VAR_15.tid);

  VAR_17 = (ReorderBufferTupleCidEnt *)
   FUNC_7(VAR_8,
      (void *) &VAR_15,
      VAR_1,
      &VAR_18);

  if (VAR_18)
  {





   FUNC_0(VAR_16->cmin == VAR_3 || VAR_16->cmin == VAR_17->cmin);
   FUNC_0(VAR_16->cmax == VAR_3 || VAR_16->cmax == VAR_17->cmax);
  }
  else
  {

   VAR_17->cmin = VAR_16->cmin;
   VAR_17->cmax = VAR_16->cmax;
   VAR_17->combocid = VAR_16->combocid;
  }
 }

 if (FUNC_1(VAR_12) != 0)
  FUNC_4(VAR_0,
    (FUNC_5(),
     FUNC_6("could not close file \"%s\": %m", VAR_11)));
}
