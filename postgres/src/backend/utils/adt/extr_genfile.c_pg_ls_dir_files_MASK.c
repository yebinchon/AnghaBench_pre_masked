
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_mtime; scalar_t__ st_size; int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int path ;
typedef int nulls ;
typedef int int64 ;
struct TYPE_8__ {char const* location; int dirdesc; } ;
typedef TYPE_1__ directory_fctx ;
typedef int TupleDesc ;
struct TYPE_9__ {int tuple_desc; TYPE_1__* user_fctx; int multi_call_memory_ctx; } ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef TYPE_2__ FuncCallContext ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 struct dirent* FUNC_8 (int ,char const*) ;
 TYPE_2__* FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 TYPE_2__* FUNC_11 () ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,char*,int ,int,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_20 (int ,int *,int*) ;
 int FUNC_21 (int*,int ,int) ;
 TYPE_1__* FUNC_22 (int) ;
 char const* FUNC_23 (char const*) ;
 int FUNC_24 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_25 (char*,struct stat*) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static Datum
FUNC_27(FunctionCallInfo VAR_7, const char *VAR_8, bool VAR_9)
{
 FuncCallContext *VAR_10;
 struct dirent *VAR_11;
 directory_fctx *VAR_12;

 if (FUNC_10())
 {
  MemoryContext VAR_13;
  TupleDesc VAR_14;

  VAR_10 = FUNC_9();
  VAR_13 = FUNC_7(VAR_10->multi_call_memory_ctx);

  VAR_12 = FUNC_22(sizeof(directory_fctx));

  VAR_14 = FUNC_3(3);
  FUNC_16(VAR_14, (AttrNumber) 1, "name",
         VAR_4, -1, 0);
  FUNC_16(VAR_14, (AttrNumber) 2, "size",
         VAR_2, -1, 0);
  FUNC_16(VAR_14, (AttrNumber) 3, "modification",
         VAR_5, -1, 0);
  VAR_10->tuple_desc = FUNC_1(VAR_14);

  VAR_12->location = FUNC_23(VAR_8);
  VAR_12->dirdesc = FUNC_0(VAR_12->location);

  if (!VAR_12->dirdesc)
  {
   if (VAR_9 && VAR_6 == VAR_0)
   {
    FUNC_7(VAR_13);
    FUNC_12(VAR_10);
   }
   else
    FUNC_17(VAR_1,
      (FUNC_18(),
       FUNC_19("could not open directory \"%s\": %m",
        VAR_12->location)));
  }

  VAR_10->user_fctx = VAR_12;
  FUNC_7(VAR_13);
 }

 VAR_10 = FUNC_11();
 VAR_12 = (directory_fctx *) VAR_10->user_fctx;

 while ((VAR_11 = FUNC_8(VAR_12->dirdesc, VAR_12->location)) != ((void*)0))
 {
  Datum VAR_15[3];
  bool VAR_16[3];
  char VAR_17[VAR_3 * 2];
  struct stat VAR_18;
  HeapTuple VAR_19;


  if (VAR_11->d_name[0] == '.')
   continue;


  FUNC_24(VAR_17, sizeof(VAR_17), "%s/%s", VAR_12->location, VAR_11->d_name);
  if (FUNC_25(VAR_17, &VAR_18) < 0)
   FUNC_17(VAR_1,
     (FUNC_18(),
      FUNC_19("could not stat directory \"%s\": %m", VAR_8)));


  if (!FUNC_14(VAR_18.st_mode))
   continue;

  VAR_15[0] = FUNC_2(VAR_11->d_name);
  VAR_15[1] = FUNC_6((int64) VAR_18.st_size);
  VAR_15[2] = FUNC_15(FUNC_26(VAR_18.st_mtime));
  FUNC_21(VAR_16, 0, sizeof(VAR_16));

  VAR_19 = FUNC_20(VAR_10->tuple_desc, VAR_15, VAR_16);
  FUNC_13(VAR_10, FUNC_5(VAR_19));
 }

 FUNC_4(VAR_12->dirdesc);
 FUNC_12(VAR_10);
}
