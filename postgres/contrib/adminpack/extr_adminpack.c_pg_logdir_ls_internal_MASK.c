
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pg_tm {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int fsec_t ;
struct TYPE_8__ {int dirdesc; int location; } ;
typedef TYPE_1__ directory_fctx ;
typedef int TupleDesc ;
struct TYPE_9__ {int attinmeta; TYPE_1__* user_fctx; int multi_call_memory_ctx; } ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef TYPE_2__ FuncCallContext ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char**) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char**,int*,int,int*,struct pg_tm*,int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,char*,int ,char**,int*,int,int*) ;
 struct dirent* FUNC_8 (int ,int ) ;
 TYPE_2__* FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 TYPE_2__* FUNC_11 () ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,char*,int ,int,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,...) ;
 TYPE_1__* FUNC_20 (int) ;
 char* FUNC_21 (char*,int ,char*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*) ;
 scalar_t__ FUNC_26 (char*,char*,int) ;

__attribute__((used)) static Datum
FUNC_27(FunctionCallInfo VAR_8)
{
 FuncCallContext *VAR_9;
 struct dirent *VAR_10;
 directory_fctx *VAR_11;

 if (FUNC_23(VAR_3, "postgresql-%Y-%m-%d_%H%M%S.log") != 0)
  FUNC_16(VAR_1,
    (FUNC_17(VAR_0),
     (FUNC_19("the log_filename parameter must equal 'postgresql-%%Y-%%m-%%d_%%H%%M%%S.log'"))));

 if (FUNC_10())
 {
  MemoryContext VAR_12;
  TupleDesc VAR_13;

  VAR_9 = FUNC_9();
  VAR_12 = FUNC_6(VAR_9->multi_call_memory_ctx);

  VAR_11 = FUNC_20(sizeof(directory_fctx));

  VAR_13 = FUNC_2(2);
  FUNC_15(VAR_13, (AttrNumber) 1, "starttime",
         VAR_7, -1, 0);
  FUNC_15(VAR_13, (AttrNumber) 2, "filename",
         VAR_6, -1, 0);

  VAR_9->attinmeta = FUNC_14(VAR_13);

  VAR_11->location = FUNC_22(VAR_2);
  VAR_11->dirdesc = FUNC_0(VAR_11->location);

  if (!VAR_11->dirdesc)
   FUNC_16(VAR_1,
     (FUNC_18(),
      FUNC_19("could not open directory \"%s\": %m",
       VAR_11->location)));

  VAR_9->user_fctx = VAR_11;
  FUNC_6(VAR_12);
 }

 VAR_9 = FUNC_11();
 VAR_11 = (directory_fctx *) VAR_9->user_fctx;

 while ((VAR_10 = FUNC_8(VAR_11->dirdesc, VAR_11->location)) != ((void*)0))
 {
  char *VAR_14[2];
  HeapTuple VAR_15;
  char VAR_16[32];
  char *VAR_17[VAR_4];
  char VAR_18[VAR_5 + 1];
  int VAR_19;
  int VAR_20,
     VAR_21[VAR_4];
  fsec_t VAR_22;
  int VAR_23 = 0;
  struct pg_tm VAR_24;




  if (FUNC_25(VAR_10->d_name) != 32
   || FUNC_26(VAR_10->d_name, "postgresql-", 11) != 0
   || VAR_10->d_name[21] != '_'
   || FUNC_23(VAR_10->d_name + 28, ".log") != 0)
   continue;


  FUNC_24(VAR_16, VAR_10->d_name + 11);
  VAR_16[17] = '\0';


  if (FUNC_7(VAR_16, VAR_18, VAR_5, VAR_17, VAR_21, VAR_4, &VAR_20))
   continue;

  if (FUNC_3(VAR_17, VAR_21, VAR_20, &VAR_19, &VAR_24, &VAR_22, &VAR_23))
   continue;



  VAR_14[0] = VAR_16;
  VAR_14[1] = FUNC_21("%s/%s", VAR_11->location, VAR_10->d_name);

  VAR_15 = FUNC_1(VAR_9->attinmeta, VAR_14);

  FUNC_13(VAR_9, FUNC_5(VAR_15));
 }

 FUNC_4(VAR_11->dirdesc);
 FUNC_12(VAR_9);
}
